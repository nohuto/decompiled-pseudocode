/*
 * XREFs of DpiMiracastDdiMiracastCreateContext @ 0x1C01C7244
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_ppqq @ 0x1C003875C (Template_ppqq.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastCreateContext(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    v15 = 0;
    v13 = -1;
    Template_ppqq(a1, &EventEnterDxgkDdiMiracastCreateContext, (__int64)a3, *(_QWORD *)(a1 + 48), 0LL, v13, v15);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, _DWORD *))(a1 + 3032))(*(_QWORD *)(a1 + 48), a2, a3, a4);
  v10 = v8;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
  {
    LODWORD(v14) = v8;
    LODWORD(v12) = *a4;
    Template_ppqq(*a3, &EventLeaveDxgkDdiMiracastCreateContext, v9, *(_QWORD *)(a1 + 48), *a3, v12, v14);
  }
  return v10;
}
