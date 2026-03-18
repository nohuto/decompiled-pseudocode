/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C01233A4
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-18h]
  __int64 v16; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 1144) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_pqq(a1, &EventEnterDdiExchangePreStartInfo, (__int64)a3, a2, *a3, 0);
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144))(a2, a3);
    v6 = v8;
    if ( bTracingEnabled )
    {
      v10 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v16) = v8;
        LODWORD(v15) = a3[1];
        Template_pqq((unsigned int)v15, &EventExitDdiExchangePreStartInfo, v11, a2, v15, v16);
      }
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v13[3] = a1;
    v13[4] = *a3;
    v14 = a3[1];
    v13[7] = 0LL;
    v13[5] = v14;
    v13[6] = v6;
  }
  else
  {
    LODWORD(v6) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v6;
}
