/*
 * XREFs of ObpDecrementHandleCount @ 0x1404F5E48
 * Callers:
 *     AlpcHandleDataDestroyProcedure @ 0x1404F2DA0 (AlpcHandleDataDestroyProcedure.c)
 *     ObpInsertOrLocateNamedObject @ 0x1404F3FB0 (ObpInsertOrLocateNamedObject.c)
 *     ObCompleteObjectDuplication @ 0x140516CFC (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x140085020 (PsGetProcessServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     ObpReleaseHandleInfo @ 0x1406C1374 (ObpReleaseHandleInfo.c)
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
  unsigned int v11; // [rsp+30h] [rbp-78h] BYREF
  $5BC46E0569261879018906DEC3127961 v12; // [rsp+38h] [rbp-70h] BYREF

  v3 = 0;
  v11 = 0;
  v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a2 + 24) ^ (unsigned __int64)BYTE1(a2)];
  if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 || (*(_BYTE *)(a2 + 27) & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 16, 0LL);
    v6 = *(_QWORD *)(a2 + 8);
    if ( !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) && (*(_BYTE *)(a2 + 27) & 8) != 0 )
      *(_QWORD *)(a2 - ObpInfoMaskToOffset[*(_BYTE *)(a2 + 26) & 0x1F]) = 0LL;
    if ( (*(_BYTE *)(v5 + 66) & 0x10) != 0 )
      ObpReleaseHandleInfo(a2, BugCheckParameter1, &v11);
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
      KiStackAttachProcess(BugCheckParameter1, 0, (__int64)&v12);
    }
    (*(void (__fastcall **)(_KPROCESS *, __int64, _QWORD, signed __int64))(v5 + 128))(
      BugCheckParameter1,
      a2 + 48,
      v11,
      v6);
    if ( v3 )
    {
      KiUnstackDetachProcess(&v12, 0LL);
      PsDetachSiloFromCurrentThread(v8);
    }
  }
  result = ObpDeleteNameCheck(a2);
  _InterlockedAdd((volatile signed __int32 *)(v5 + 48), 0xFFFFFFFF);
  return result;
}
