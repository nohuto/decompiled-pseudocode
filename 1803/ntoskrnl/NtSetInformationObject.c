/*
 * XREFs of NtSetInformationObject @ 0x140550ED0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MmGetSessionObjectById @ 0x14005A340 (MmGetSessionObjectById.c)
 *     ObpUnlockDirectory @ 0x140061134 (ObpUnlockDirectory.c)
 *     PsGetCurrentProcessSessionId @ 0x1400767F0 (PsGetCurrentProcessSessionId.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     ObpLockDirectoryExclusive @ 0x1400A5628 (ObpLockDirectoryExclusive.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14054D4C4 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1405A4D70 (ExpLookupHandleTableEntry.c)
 */

NTSTATUS __stdcall NtSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  int v5; // esi
  char v6; // cl
  char v7; // r15
  __int64 v8; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 *v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // ecx
  bool v13; // zf
  __int32 v15; // edx
  KPROCESSOR_MODE PreviousMode; // di
  void *SessionObjectById; // rdi
  _QWORD *v18; // rbx
  KPROCESSOR_MODE v19; // di
  _DWORD *v20; // rbx
  signed __int32 v21[8]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v22; // [rsp+34h] [rbp-D4h]
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v24; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v26; // [rsp+6Eh] [rbp-9Ah]
  int v27; // [rsp+70h] [rbp-98h]
  __int128 v28; // [rsp+78h] [rbp-90h] BYREF
  __int16 v29; // [rsp+96h] [rbp-72h]
  int v30; // [rsp+98h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v32; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[48]; // [rsp+B0h] [rbp-58h] BYREF

  v5 = -1073741821;
  if ( ObjectInformationClass != ObjectHandleFlagInformation )
  {
    v15 = ObjectInformationClass - 5;
    if ( v15 )
    {
      if ( v15 != 1 )
        return v5;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v5 = ObReferenceObjectByHandle(
               ObjectHandle,
               0,
               ObpDirectoryObjectType,
               PreviousMode,
               &Object,
               &HandleInformation);
        if ( v5 >= 0 )
        {
          PsGetCurrentProcessSessionId();
          SessionObjectById = MmGetSessionObjectById();
          v18 = Object;
          if ( SessionObjectById )
          {
            v25 = 0LL;
            v26 = 0;
            v27 = -60876;
            ObpLockDirectoryExclusive((__int64)&v25, Object);
            if ( v18[41] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v18[41] = SessionObjectById;
            }
            ObpUnlockDirectory((__int64)v18, (__int64)&v25);
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(v18);
        }
        return v5;
      }
    }
    else
    {
      v19 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v19) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, v19, &v24, &v32);
        if ( v5 >= 0 )
        {
          v28 = 0LL;
          v29 = 0;
          v30 = -60876;
          v20 = v24;
          ObpLockDirectoryExclusive((__int64)&v28, v24);
          v20[85] = PsGetCurrentProcessSessionId();
          ObpUnlockDirectory((__int64)v20, (__int64)&v28);
          ObfDereferenceObject(v20);
        }
        return v5;
      }
    }
    return -1073741727;
  }
  if ( Length == 2 )
  {
    v6 = KeGetCurrentThread()->PreviousMode;
    if ( v6
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v22 = *(_WORD *)ObjectInformation;
    v7 = 0;
    if ( v6
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v8 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v8 = ObpKernelHandleTable;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v33);
        v7 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v10 = (__int64 *)ExpLookupHandleTableEntry(v8, ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v10);
          v11 = *v10;
          if ( (*v10 & 1) != 0 )
            break;
          if ( !v11 )
            goto LABEL_50;
          ExpBlockOnLockedHandleEntry(v8, v10, v11);
        }
      }
      while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
      if ( (_BYTE)v22
        && (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v10 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v10) & 0xFFF0) >> 8)]
                      + 72) & 2) != 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        v12 = 0;
        if ( (_BYTE)v22 )
          v12 = 2;
        if ( HIBYTE(v22) )
          v12 |= 1u;
        *v10 = *v10 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v12 << 17);
      }
      _InterlockedExchangeAdd64(v10, 1uLL);
      _InterlockedOr(v21, 0);
      if ( *(_QWORD *)(v8 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
    }
    else
    {
LABEL_50:
      v5 = -1073741790;
    }
    v13 = CurrentThread->KernelApcDisable++ == -1;
    if ( v13
      && ($005F0E83B22994B61E86C72E0CE43C71 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v7 )
      KiUnstackDetachProcess((__int64)v33, 0LL);
    return v5;
  }
  return -1073741820;
}
