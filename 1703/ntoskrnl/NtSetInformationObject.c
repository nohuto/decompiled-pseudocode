/*
 * XREFs of NtSetInformationObject @ 0x1404276F0
 * Callers:
 *     <none>
 * Callees:
 *     ObpUnlockDirectory @ 0x140041474 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryExclusive @ 0x14004439C (ObpLockDirectoryExclusive.c)
 *     PsGetCurrentProcessSessionId @ 0x1400714B0 (PsGetCurrentProcessSessionId.c)
 *     MmGetSessionObjectById @ 0x140094330 (MmGetSessionObjectById.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 */

NTSTATUS __stdcall NtSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  int v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  KPROCESSOR_MODE v8; // di
  void *SessionObjectById; // rsi
  _QWORD *v10; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  _DWORD *v12; // rbx
  char v14; // cl
  char v15; // r15
  ULONG_PTR v16; // r14
  _KPROCESS *Process; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *v19; // rbx
  signed __int64 v20; // r8
  unsigned int v21; // ecx
  __int16 v22; // ax
  signed __int32 v23[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int16 v24; // [rsp+34h] [rbp-C4h]
  PVOID Object; // [rsp+38h] [rbp-C0h] BYREF
  PVOID v26; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v27; // [rsp+48h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+66h] [rbp-92h]
  int v29; // [rsp+68h] [rbp-90h]
  __int128 v30; // [rsp+70h] [rbp-88h] BYREF
  __int16 v31; // [rsp+8Eh] [rbp-6Ah]
  int v32; // [rsp+90h] [rbp-68h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-60h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v34; // [rsp+A0h] [rbp-58h] BYREF
  $5BC46E0569261879018906DEC3127961 v35; // [rsp+A8h] [rbp-50h] BYREF

  v5 = -1073741821;
  v6 = ObjectInformationClass - 4;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( !v7 )
    {
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, PreviousMode, &v26, &v34);
        if ( v5 >= 0 )
        {
          v30 = 0LL;
          v31 = 0;
          v32 = -60876;
          v12 = v26;
          ObpLockDirectoryExclusive((__int64)&v30, (__int64)v26);
          v12[85] = PsGetCurrentProcessSessionId();
          ObpUnlockDirectory((__int64)v12, (__int64)&v30);
          ObfDereferenceObject(v12);
        }
        return v5;
      }
      return -1073741727;
    }
    if ( v7 == 1 )
    {
      v8 = KeGetCurrentThread()->PreviousMode;
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, v8) )
      {
        v5 = ObReferenceObjectByHandle(ObjectHandle, 0, ObpDirectoryObjectType, v8, &Object, &HandleInformation);
        if ( v5 >= 0 )
        {
          PsGetCurrentProcessSessionId();
          SessionObjectById = (void *)MmGetSessionObjectById();
          v10 = Object;
          if ( SessionObjectById )
          {
            v27 = 0LL;
            v28 = 0;
            v29 = -60876;
            ObpLockDirectoryExclusive((__int64)&v27, (__int64)Object);
            if ( v10[41] )
            {
              v5 = -1073741790;
              ObfDereferenceObject(SessionObjectById);
            }
            else
            {
              v10[41] = SessionObjectById;
            }
            ObpUnlockDirectory((__int64)v10, (__int64)&v27);
          }
          else
          {
            v5 = -1073740715;
          }
          ObfDereferenceObject(v10);
        }
        return v5;
      }
      return -1073741727;
    }
  }
  else
  {
    if ( Length != 2 )
      return -1073741820;
    v14 = KeGetCurrentThread()->PreviousMode;
    if ( v14
      && ((unsigned __int64)ObjectInformation + 2 > 0x7FFFFFFF0000LL || (char *)ObjectInformation + 2 < ObjectInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    v24 = *(_WORD *)ObjectInformation;
    v15 = 0;
    if ( v14
      || ((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL
      || (unsigned __int64)ObjectHandle >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v16 = Process[1].ActiveProcessors.Bitmap[5];
    }
    else
    {
      ObjectHandle = (HANDLE)((unsigned __int64)ObjectHandle & 0xFFFFFFFF80000000uLL ^ (unsigned __int64)ObjectHandle);
      v16 = ObpKernelHandleTable;
      Process = PsInitialSystemProcess;
      if ( KeGetCurrentThread()->ApcState.Process != PsInitialSystemProcess )
      {
        KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)&v35);
        v15 = 1;
      }
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ((unsigned __int16)ObjectHandle & 0x3FC) != 0
      && (v19 = (signed __int64 *)ExpLookupHandleTableEntry(v16, ObjectHandle)) != 0LL )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v19);
          v20 = *v19;
          if ( (*v19 & 1) != 0 )
            break;
          if ( !v20 )
            goto LABEL_46;
          ExpBlockOnLockedHandleEntry(v16, v19, v20);
        }
        Process = (_KPROCESS *)(v20 - 1);
      }
      while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
      if ( (_BYTE)v24
        && (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v19 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                              + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v19) & 0xFFF0) >> 8)]
                      + 72) & 2) != 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 0;
        v21 = 0;
        if ( (_BYTE)v24 )
          v21 = 2;
        if ( HIBYTE(v24) )
          v21 |= 1u;
        *v19 = *v19 & 0xFFFFFFFFFFF9FFFFuLL | ((unsigned __int64)v21 << 17);
      }
      _InterlockedExchangeAdd64(v19, 1uLL);
      Process = (_KPROCESS *)(v16 + 48);
      _InterlockedOr(v23, 0);
      if ( *(_QWORD *)(v16 + 48) )
        ExfUnblockPushLock((volatile __int64 *)&Process->Header.Lock, 0LL);
    }
    else
    {
LABEL_46:
      v5 = -1073741790;
    }
    v22 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v22;
    if ( !v22
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)Process);
    }
    if ( v15 )
      KiUnstackDetachProcess(&v35, 0LL);
  }
  return v5;
}
