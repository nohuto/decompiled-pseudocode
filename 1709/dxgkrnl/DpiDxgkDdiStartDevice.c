/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x1C011AA38
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq @ 0x1C00206A0 (McTemplateK0pqqq.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(
        __int64 a1,
        const void *a2,
        const GUID *a3,
        __int64 a4,
        const unsigned int *a5,
        const unsigned int *a6)
{
  signed int Arg3; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // rdi
  _QWORD *v15; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)a1, &EventEnterDdiStartDevice, a3, a2, a3->Data1, 0, 0);
  Arg3 = (*(__int64 (__fastcall **)(const void *, const GUID *, __int64, const unsigned int *, const unsigned int *))(a1 + 152))(
           a2,
           a3,
           a4,
           a5,
           a6);
  v14 = Arg3;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)*a5, &EventExitDdiStartDevice, v13, a2, *a5, *a6, Arg3);
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v15[3] = a1;
  v15[4] = a3->Data1;
  v15[5] = *a5;
  v15[6] = *a6;
  v15[7] = v14;
  return (unsigned int)v14;
}
