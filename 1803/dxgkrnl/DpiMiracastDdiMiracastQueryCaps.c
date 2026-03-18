/*
 * XREFs of DpiMiracastDdiMiracastQueryCaps @ 0x1C01FEF2C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C00278B8 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastQueryCaps(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 (__fastcall *v3)(_QWORD, __int64, const GUID *); // r9
  unsigned int v6; // edi
  unsigned int Arg3; // eax
  const GUID *v8; // r8

  v3 = *(__int64 (__fastcall **)(_QWORD, __int64, const GUID *))(a1 + 3048);
  v6 = -1073741637;
  if ( v3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    {
      McTemplateK0pqqq(0LL, &EventEnterDxgkDdiMiracastQueryCaps, a3, *(const void **)(a1 + 48), 0, 0, 0);
      v3 = *(__int64 (__fastcall **)(_QWORD, __int64, const GUID *))(a1 + 3048);
    }
    Arg3 = v3(*(_QWORD *)(a1 + 48), 8LL, a3);
    v6 = Arg3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
      McTemplateK0pqqq(
        (PMCGEN_TRACE_CONTEXT)a3->Data1,
        &EventLeaveDxgkDdiMiracastQueryCaps,
        v8,
        *(const void **)(a1 + 48),
        a3->Data1,
        *(_DWORD *)&a3->Data2,
        Arg3);
  }
  return v6;
}
