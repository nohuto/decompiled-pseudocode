/*
 * XREFs of DpiMiracastDdiMiracastQueryCaps @ 0x1C01E157C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C00206A0 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastQueryCaps(__int64 a1, __int64 a2, GUID *a3)
{
  unsigned int v5; // edi
  unsigned int Arg3; // eax
  const GUID *v7; // r8

  v5 = -1073741637;
  if ( *(_QWORD *)(a1 + 3048) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      McTemplateK0pqqq(0LL, &EventEnterDxgkDdiMiracastQueryCaps, a3, *(const void **)(a1 + 48), 0, 0, 0);
    Arg3 = (*(__int64 (__fastcall **)(_QWORD, __int64, GUID *))(a1 + 3048))(*(_QWORD *)(a1 + 48), 8LL, a3);
    v5 = Arg3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)a3->Data1,
        &EventLeaveDxgkDdiMiracastQueryCaps,
        v7,
        *(const void **)(a1 + 48),
        a3->Data1,
        *(_DWORD *)&a3->Data2,
        Arg3);
  }
  return v5;
}
