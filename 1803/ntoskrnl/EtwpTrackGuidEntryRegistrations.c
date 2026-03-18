/*
 * XREFs of EtwpTrackGuidEntryRegistrations @ 0x1407B2700
 * Callers:
 *     EtwpSetProviderBinaryTracking @ 0x1407B2290 (EtwpSetProviderBinaryTracking.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14006CFF0 (PsGetProcessServerSilo.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 */

__int64 __fastcall EtwpTrackGuidEntryRegistrations(_DWORD *a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // edx
  _QWORD *i; // rsi
  struct _KTHREAD *v13; // rax
  __int64 v14; // rdi
  __int64 ProcessServerSilo; // rax
  __int64 v16; // rbx
  _BYTE v18[48]; // [rsp+20h] [rbp-78h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = a2 + 384;
  ExAcquirePushLockExclusiveEx(a2 + 384, 0LL);
  v10 = a2 + 112;
  *(_QWORD *)(a2 + 392) = KeGetCurrentThread();
  v11 = 0;
  while ( !*(_DWORD *)v10 || *(unsigned __int16 *)(v10 + 6) != *a1 )
  {
    ++v11;
    v10 += 32LL;
    if ( v11 >= 8 )
      goto LABEL_18;
  }
  for ( i = *(_QWORD **)(a2 + 40); i != (_QWORD *)(a2 + 40); i = (_QWORD *)*i )
  {
    if ( a3 == 2 )
    {
      v13 = KeGetCurrentThread();
      v14 = (__int64)(i - 2);
      --v13->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(i[2] + 384LL, 0LL);
      *(_QWORD *)(i[2] + 392LL) = KeGetCurrentThread();
    }
    else
    {
      v14 = (__int64)i;
    }
    if ( (*(_BYTE *)(v14 + 98) & 1) != 0 )
    {
      EtwpProviderArrivalCallback((__int64)a1, 0, v14);
    }
    else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v14 + 80) + 760LL)) )
    {
      ProcessServerSilo = PsGetProcessServerSilo(*(_QWORD *)(v14 + 80));
      v16 = PsAttachSiloToCurrentThread(ProcessServerSilo);
      KiStackAttachProcess(*(_KPROCESS **)(v14 + 80), 0, (__int64)v18);
      EtwpProviderArrivalCallback((__int64)a1, 1, v14);
      KiUnstackDetachProcess((__int64)v18, 0LL);
      PsDetachSiloFromCurrentThread(v16);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)(v14 + 80) + 760LL));
    }
    if ( a3 == 2 )
    {
      *(_QWORD *)(*(_QWORD *)(v14 + 32) + 392LL) = 0LL;
      ExReleasePushLockEx(*(_QWORD *)(v14 + 32) + 384LL, 0LL, v8, v9);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
  }
LABEL_18:
  *(_QWORD *)(a2 + 392) = 0LL;
  ExReleasePushLockEx(v7, 0LL, v8, v9);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0LL;
}
