/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1407519AC
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x140751548 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetProcessServerSilo @ 0x1400893E0 (PsGetProcessServerSilo.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *i; // rsi
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v14; // rbx
  $709EDFC2F9E0D4565D6AA3C4377BC643 v16; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 384;
  ExAcquirePushLockExclusiveEx(a2 + 384, 0LL);
  v8 = a2 + 112;
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v9 = 0;
  while ( !*(_DWORD *)v8 || *(unsigned __int16 *)(v8 + 6) != *a1 )
  {
    ++v9;
    v8 += 32LL;
    if ( v9 >= 8 )
      goto LABEL_18;
  }
  for ( i = *(_QWORD **)(a2 + 40); i != (_QWORD *)(a2 + 40); i = (_QWORD *)*i )
  {
    if ( a3 == 2 )
    {
      v11 = KeGetCurrentThread();
      v12 = (__int64)(i - 2);
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(i[2] + 384LL, 0LL);
      *(_QWORD *)(i[2] + 392LL) = KeGetCurrentThread();
    }
    else
    {
      v12 = (__int64)i;
    }
    if ( (*(_BYTE *)(v12 + 98) & 1) != 0 )
    {
      EtwpProviderArrivalCallback((__int64)a1, 0, v12);
    }
    else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 760LL)) )
    {
      ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(v12 + 80));
      v14 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v12 + 80), 0, (__int64)&v16);
      EtwpProviderArrivalCallback((__int64)a1, 1, v12);
      KiUnstackDetachProcess(&v16, 0LL);
      PsDetachSiloFromCurrentThread(v14);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(v12 + 80) + 760LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v12 + 32) + 392LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v12 + 32) + 384LL, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 392) = 0LL;
  ExReleasePushLockEx(v7, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
