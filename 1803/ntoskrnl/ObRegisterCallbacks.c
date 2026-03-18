/*
 * XREFs of ObRegisterCallbacks @ 0x14064D220
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401721B8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObpInsertCallbackByAltitude @ 0x14064D3F4 (ObpInsertCallbackByAltitude.c)
 */

NTSTATUS __stdcall ObRegisterCallbacks(POB_CALLBACK_REGISTRATION CallbackRegistration, PVOID *RegistrationHandle)
{
  unsigned int v3; // edi
  NTSTATUS inserted; // ebx
  USHORT OperationRegistrationCount; // ax
  unsigned int v7; // ebp
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v9; // rsi
  size_t Length; // r8
  char *v11; // rcx
  unsigned int v12; // ebp
  OB_OPERATION_REGISTRATION *v13; // r14
  unsigned __int64 PreOperation; // rcx
  unsigned __int64 PostOperation; // rcx
  unsigned __int16 *v16; // rbx
  POBJECT_TYPE v17; // rcx
  __int64 v18; // rax
  unsigned __int16 *v20; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  unsigned __int16 **v25; // rax

  v3 = 0;
  inserted = 0;
  if ( (CallbackRegistration->Version & 0xFF00) != 0x100 )
    return -1073741811;
  OperationRegistrationCount = CallbackRegistration->OperationRegistrationCount;
  if ( !OperationRegistrationCount )
    return -1073741811;
  v7 = (OperationRegistrationCount << 6) + CallbackRegistration->Altitude.Length + 32;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v7, 0x6C46624Fu);
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  memset(PoolWithTag, 0, v7);
  *v9 = 256;
  *((_QWORD *)v9 + 1) = CallbackRegistration->RegistrationContext;
  Length = CallbackRegistration->Altitude.Length;
  v9[9] = Length;
  v9[8] = Length;
  v11 = (char *)v9 + v7 - (unsigned int)Length;
  *((_QWORD *)v9 + 3) = v11;
  memmove(v11, CallbackRegistration->Altitude.Buffer, Length);
  v12 = 0;
  if ( CallbackRegistration->OperationRegistrationCount )
  {
    while ( 1 )
    {
      v13 = &CallbackRegistration->OperationRegistration[v12];
      if ( !v13->Operations || ((*v13->ObjectType)->TypeInfo.ObjectTypeFlags & 0x40) == 0 )
        break;
      PreOperation = (unsigned __int64)v13->PreOperation;
      if ( PreOperation )
      {
        if ( !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PreOperation, 32) )
          goto LABEL_22;
      }
      else if ( !v13->PostOperation )
      {
        break;
      }
      PostOperation = (unsigned __int64)v13->PostOperation;
      if ( PostOperation && !(unsigned int)MmVerifyCallbackFunctionCheckFlags(PostOperation, 32) )
      {
LABEL_22:
        inserted = -1073741790;
        goto LABEL_23;
      }
      v16 = &v9[32 * (unsigned __int64)v12 + 16];
      *((_QWORD *)v16 + 1) = v16;
      *(_QWORD *)v16 = v16;
      ExInitializePushLock((PKSPIN_LOCK)v16 + 7);
      *((_DWORD *)v16 + 4) = v13->Operations;
      *((_QWORD *)v16 + 3) = v9;
      v17 = *v13->ObjectType;
      *((_QWORD *)v16 + 4) = v17;
      *((_QWORD *)v16 + 5) = v13->PreOperation;
      *((_QWORD *)v16 + 6) = v13->PostOperation;
      inserted = ObpInsertCallbackByAltitude(v17, v16);
      if ( inserted >= 0 )
      {
        ++v9[1];
        if ( ++v12 < CallbackRegistration->OperationRegistrationCount )
          continue;
      }
      goto LABEL_12;
    }
    inserted = -1073741811;
  }
LABEL_12:
  if ( inserted < 0 )
  {
LABEL_23:
    if ( v9[1] )
    {
      do
      {
        v20 = &v9[32 * (unsigned __int64)v3 + 16];
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx(*((_QWORD *)v20 + 4) + 184LL, 0LL);
        v24 = *(_QWORD *)v20;
        if ( *(unsigned __int16 **)(*(_QWORD *)v20 + 8LL) != v20
          || (v25 = (unsigned __int16 **)*((_QWORD *)v20 + 1), *v25 != v20) )
        {
          __fastfail(3u);
        }
        *v25 = (unsigned __int16 *)v24;
        *(_QWORD *)(v24 + 8) = v25;
        ExReleasePushLockEx(*((_QWORD *)v20 + 4) + 184LL, 0LL, v22, v23);
        KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
        ++v3;
      }
      while ( v3 < v9[1] );
    }
    ExFreePoolWithTag(v9, 0x6C46624Fu);
  }
  else
  {
    if ( v9[1] )
    {
      do
      {
        v18 = v3++;
        *(_DWORD *)&v9[32 * v18 + 26] |= 1u;
      }
      while ( v3 < v9[1] );
    }
    *RegistrationHandle = v9;
  }
  return inserted;
}
