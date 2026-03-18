/*
 * XREFs of ObpDecrementHandleCount @ 0x140487254
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x140486408 (ObpInsertOrLocateNamedObject.c)
 *     AlpcHandleDataDestroyProcedure @ 0x140488F90 (AlpcHandleDataDestroyProcedure.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObCompleteObjectDuplication @ 0x140506594 (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140507760 (ObDuplicateObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ObpReleaseHandleInfo @ 0x14044E830 (ObpReleaseHandleInfo.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 */

__int64 __fastcall ObpDecrementHandleCount(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  char v3; // r12
  __int64 v5; // rbp
  signed __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // r15
  __int64 ProcessServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rax
  $709EDFC2F9E0D4565D6AA3C4377BC643 v11; // [rsp+38h] [rbp-70h] BYREF

  v3 = 0;
  v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = *(_QWORD *)(a2 + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(a2 + 27) & 8) != 0 )
    {
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2);
    ExReleasePushLockEx(a2 + 16, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
  }
  if ( *(_QWORD *)(v5 + 128) )
  {
    v8 = 0LL;
    if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
    {
      v3 = 1;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)BugCheckParameter1);
      v8 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v11);
    }
    (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128))(
      BugCheckParameter1,
      a2 + 48,
      0LL,
      v6);
    if ( v3 )
    {
      KiUnstackDetachProcess(&v11, 0LL);
      PsDetachSiloFromCurrentThread(v8);
    }
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
  return result;
}
