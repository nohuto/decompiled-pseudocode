/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C020A260
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 (__fastcall *v5)(__int64, unsigned int *); // r8
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]

  v5 = *(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144);
  if ( v5 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqq(a1, &EventEnterDdiExchangePreStartInfo, (__int64)v5, a2, *a3, 0);
      v5 = *(__int64 (__fastcall **)(__int64, unsigned int *))(a1 + 1144);
    }
    v7 = v5(a2, a3);
    v12 = v7;
    if ( bTracingEnabled )
    {
      v9 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v17) = v7;
        LODWORD(v16) = a3[1];
        McTemplateK0pqq((unsigned int)v16, &EventExitDdiExchangePreStartInfo, v10, a2, v16, v17);
      }
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v13[3] = a1;
    v13[4] = *a3;
    v14 = a3[1];
    v13[7] = 0LL;
    v13[5] = v14;
    v13[6] = v12;
  }
  else
  {
    LODWORD(v12) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v12;
}
