/*
 * XREFs of NtSetInformationObject @ 0x140566540
 * Callers:
 *     <none>
 * Callees:
 *     ObpUnlockDirectory @ 0x1400190C8 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x140024034 (ObpLockDirectoryExclusive.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionObjectById @ 0x14008A93C (MmGetSessionObjectById.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsGetCurrentProcessSessionId @ 0x1400B08F0 (PsGetCurrentProcessSessionId.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x1404B1720 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14059D508 (ExpBlockOnLockedHandleEntry.c)
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
  _KPROCESS *Process; // rcx
  ULONG_PTR v9; // r14
  struct _KTHREAD *CurrentThread; // rdi
  signed __int64 *v11; // rbx
  signed __int64 v12; // r8
  unsigned int v13; // ecx
  bool v14; // zf
  __int32 v16; // edx
  KPROCESSOR_MODE PreviousMode; // di
  int CurrentProcessSessionId; // eax
  void *SessionObjectById; // rdi
  _QWORD *v20; // rbx
  KPROCESSOR_MODE v21; // di
  _DWORD *v22; // rbx
  signed __int32 v23[8]; // [rsp+0h] [rbp-108h] BYREF
  __int16 v24; // [rsp+34h] [rbp-D4h]
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  PVOID v26; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v28; // [rsp+6Eh] [rbp-9Ah]
  int v29; // [rsp+70h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-90h] BYREF
  __int16 v31; // [rsp+96h] [rbp-72h]
  int v32; // [rsp+98h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-68h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v34; // [rsp+A8h] [rbp-60h] BYREF
  $709EDFC2F9E0D4565D6AA3C4377BC643 v35; // [rsp+B0h] [rbp-58h] BYREF

  v5 = -1073741821;
  if ( ObjectInformationClass != ObjectHandleFlagInformation )
  {
    v16 = ObjectInformationClass - 5;
    if ( v16 )
    {
      if ( v16 != 1 )
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
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          SessionObjectById = (void *)MmGetSessionObjectById(CurrentProcessSessionId);
          v20 = Object;
          if ( SessionObjectById )
          {
            v27 = 0LL;
            v28 = 0;
            v29 = -60876;
            ObpLockDirectoryExclusive((__int64)&v27, Object);
            if ( v20[41] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v20[41] = SessionObjectById;
            }
            ObpUnlockDirectory((__int64)v20, (__int64)&v27);
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(v20);
        }
        return v5;
      }
    }
    else
    {
      v21 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v21) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, v21, &v26, &v34);
        if ( v5 >= 0 )
        {
          v30 = 0LL;
          v31 = 0;
          v32 = -60876;
          v22 = v26;
          ObpLockDirectoryExclusive((__int64)&v30, v26);
          v22[85] = PsGetCurrentProcessSessionId();
          ObpUnlockDirectory((__int64)v22, (__int64)&v30);
          ObfDereferenceObject(v22);
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
    v24 = *(_WORD *)ObjectInformation;
    v7 = 0;
    if ( v6
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v9 = Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v9 = ObpKernelHandleTable;
      Process = PsInitialSystemProcess;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v35);
        v7 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v11 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v9, (__int64)ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v12 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v12 )
            goto LABEL_31;
          ExpBlockOnLockedHandleEntry(v9, v11, v12);
        }
        Process = (_KPROCESS *)(v12 - 1);
      }
      while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
      if ( (_BYTE)v24
        && (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v11) & 0xFFF0) >> 8)]
                      + 72) & 2) != 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        v13 = 0;
        if ( (_BYTE)v24 )
          v13 = 2;
        if ( HIBYTE(v24) )
          v13 |= 1u;
        *v11 = *v11 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v13 << 17);
      }
      _InterlockedExchangeAdd64(v11, 1uLL);
      Process = (_KPROCESS *)(v9 + 48);
      _InterlockedOr(v23, 0);
      if ( *(_QWORD *)(v9 + 48) )
        ExfUnblockPushLock((volatile __int64 *)&Process->Header.Lock, 0LL);
    }
    else
    {
LABEL_31:
      v5 = -1073741790;
    }
    v14 = CurrentThread->KernelApcDisable++ == -1;
    if ( v14
      && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)Process);
    }
    if ( v7 )
      KiUnstackDetachProcess(&v35, 0LL);
    return v5;
  }
  return -1073741820;
}
