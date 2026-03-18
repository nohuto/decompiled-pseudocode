/*
 * XREFs of ObpDecrementHandleCount @ 0x140519894
 * Callers:
 *     ObDuplicateObject @ 0x1404B6D20 (ObDuplicateObject.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404D4B8C (ObpInsertOrLocateNamedObject.c)
 *     AlpcHandleDataDestroyProcedure @ 0x140519820 (AlpcHandleDataDestroyProcedure.c)
 *     ObCompleteObjectDuplication @ 0x14055DE6C (ObCompleteObjectDuplication.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1405542F4 (ObpReleaseHandleInfo.c)
 */

__int64 __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rbp
  signed __int64 v5; // rdi
  void (__fastcall *v6)(_KPROCESS *, __int64, _QWORD, signed __int64); // r10
  __int64 result; // rax
  char v8; // r12
  __int64 v9; // r15
  __int64 ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[48]; // [rsp+38h] [rbp-70h] BYREF

  v14 = 0;
  v4 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v5 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v4 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v14);
    ExReleasePushLockEx(a2 + 16, 0LL, v12, v13);
    KeLeaveCriticalRegion();
  }
  else
  {
    v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  v6 = *(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128);
  if ( v6 )
  {
    v8 = 0;
    v9 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process == BugCheckParameter1 )
    {
      v6(BugCheckParameter1, a2 + 48, v14, v5);
    }
    else
    {
      v8 = 1;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v9 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v15);
      (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v4 + 128))(
        BugCheckParameter1,
        a2 + 48,
        v14,
        v5);
    }
    if ( v8 )
    {
      KiUnstackDetachProcess((__int64)v15, 0LL);
      PsDetachSiloFromCurrentThread(v9);
    }
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v4 + 48), 0xFFFFFFFF);
  return result;
}
