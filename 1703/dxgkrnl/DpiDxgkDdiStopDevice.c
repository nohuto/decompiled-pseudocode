/*
 * XREFs of DpiDxgkDdiStopDevice @ 0x1C01CF8CC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

__int64 __fastcall DpiDxgkDdiStopDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = 0;
    Template_xq(a1, &EventEnterDdiStopDevice, a3, a2, v14);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 160))(a2);
  v10 = v5;
  if ( bTracingEnabled )
  {
    v7 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v13) = v5;
      Template_xq((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventExitDdiStopDevice, v8, a2, v13);
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v11[3] = a1;
  v11[4] = a2;
  v11[5] = v10;
  v11[6] = 0LL;
  v11[7] = 0LL;
  return (unsigned int)v10;
}
