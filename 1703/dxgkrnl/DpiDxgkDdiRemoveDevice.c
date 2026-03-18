/*
 * XREFs of DpiDxgkDdiRemoveDevice @ 0x1C01CF720
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C01C41B0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C00414C4 (Template_xq.c)
 */

__int64 __fastcall DpiDxgkDdiRemoveDevice(__int64 a1, __int64 a2, __int64 a3)
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
    Template_xq(a1, &EventEnterDdiRemoveDevice, a3, a2, v14);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a2);
  v10 = v5;
  if ( bTracingEnabled )
  {
    v7 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v13) = v5;
      Template_xq((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventExitDdiRemoveDevice, v8, a2, v13);
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
