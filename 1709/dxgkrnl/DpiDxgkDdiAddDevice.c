/*
 * XREFs of DpiDxgkDdiAddDevice @ 0x1C0121484
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppq @ 0x1C0032B64 (McTemplateK0ppq.c)
 */

__int64 __fastcall DpiDxgkDdiAddDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v14 = 0;
    McTemplateK0ppq(a1, &EventEnterDdiAddDevice, (__int64)a3, a2, 0LL, v14);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(a1 + 144))(a2, a3);
  v10 = v6;
  if ( bTracingEnabled )
  {
    v8 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v13) = v6;
      McTemplateK0ppq(*a3, &EventExitDdiAddDevice, v9, a2, *a3, v13);
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v11[7] = 0LL;
  v11[3] = a1;
  v11[4] = a2;
  v11[5] = a3;
  v11[6] = v10;
  return (unsigned int)v10;
}
