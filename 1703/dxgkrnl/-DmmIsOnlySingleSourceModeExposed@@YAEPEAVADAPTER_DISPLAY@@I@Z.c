/*
 * XREFs of ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C01D23E4
 * Callers:
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00FA000 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z @ 0x1C00E4AE4 (-QueryDxgDmmInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_INTERFACE@@@Z.c)
 */

char __fastcall DmmIsOnlySingleSourceModeExposed(struct ADAPTER_DISPLAY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  VIDPN_MGR *v5; // rcx
  struct _DXGDMM_INTERFACE *v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64 *, __int64 *); // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // bl
  struct _DXGDMM_INTERFACE *v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall **v22)(__int64, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v24[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  void (__fastcall *v26)(__int64, __int64); // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  int v28; // [rsp+68h] [rbp-8h]
  __int64 v29; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B8h] [rbp+48h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = (VIDPN_MGR *)*((_QWORD *)a1 + 11);
  v23 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  VIDPN_MGR::QueryDxgDmmInterface(v5, &v21, a3, a4);
  v6 = v21;
  v30 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v7 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)v21 + 6);
  v27 = 0LL;
  v28 = 0;
  v24[0] = 0;
  v8 = v7(v4, &v29, &v30);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v4;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdError(v12);
LABEL_8:
    v19 = 0;
    goto LABEL_9;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v24,
    v29,
    *((_QWORD *)v6 + 8),
    v4);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 (__fastcall ***)(__int64, __int64 *)))(v30 + 8))(
         v29,
         0LL,
         &v31,
         &v22) < 0 )
    goto LABEL_8;
  v13 = (*v22)(v31, &v23);
  if ( (*(int (__fastcall **)(__int64, __int64))(v30 + 16))(v29, v31) < 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v18 + 24) = 13654LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( v13 < 0 )
    goto LABEL_8;
  v19 = 1;
  if ( v23 != 1 )
    goto LABEL_8;
LABEL_9:
  if ( v24[0] )
    v26(v27, v25);
  return v19;
}
