/*
 * XREFs of DpiFdoThermalPassiveCooling @ 0x1C01CA550
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C01CA778 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00AA538 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00AA5B4 (DpiAcquireCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalPassiveCooling(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, File, 1u, 0x20u);
  v8 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 483) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 4560) + 1LL) = 1;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v12) = a2;
        Template_xq(v10, &EventDpiFdoThermalPassiveCooling, v11, a1, v12);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v2 + 4560) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 4560) + 16LL),
        a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 4560) + 4LL) = a2;
    if ( *(_BYTE *)(v2 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, 0x20u);
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdError(v9);
  }
}
