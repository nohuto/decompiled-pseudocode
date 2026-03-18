/*
 * XREFs of DpiDxgkDdiUnload @ 0x1C0033B4C
 * Callers:
 *     DpiCleanup @ 0x1C01E4C78 (DpiCleanup.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0 @ 0x1C002048C (McTemplateK0.c)
 */

_QWORD *__fastcall DpiDxgkDdiUnload(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *result; // rax

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0(a1, &EventEnterDdiUnload, a3);
  (*(void (**)(void))(a1 + 248))();
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0(v5, &EventExitDdiUnload, v6);
  result = (_QWORD *)WdLogNewEntry5_WdTrace(v5, v4);
  result[3] = a1;
  result[4] = 0LL;
  result[5] = 0LL;
  result[6] = 0LL;
  result[7] = 0LL;
  return result;
}
