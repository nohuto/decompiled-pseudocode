/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C0123C14
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 1144) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pqq(a1, &EventEnterDdiExchangePreStartInfo, (__int64)a3, a2, *a3, 0);
    v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144))(a2, a3);
    v6 = v8;
    if ( bTracingEnabled )
    {
      v10 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v15) = v8;
        LODWORD(v14) = a3[1];
        McTemplateK0pqq((unsigned int)v14, &EventExitDdiExchangePreStartInfo, v11, a2, v14, v15);
      }
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v12[3] = a1;
    v12[4] = *a3;
    v13 = a3[1];
    v12[7] = 0LL;
    v12[5] = v13;
    v12[6] = v6;
  }
  else
  {
    LODWORD(v6) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v6;
}
