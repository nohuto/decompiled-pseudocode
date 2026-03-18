/*
 * XREFs of ?DmmIsOnlySingleSourceModeExposed@@YAEPEAVADAPTER_DISPLAY@@I@Z @ 0x1C0213A80
 * Callers:
 *     ?_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z @ 0x1C00B8028 (-_GetMonitorCCDMonitorID@DXGMONITOR@@QEAAJEKPEAG@Z.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DmmIsOnlySingleSourceModeExposed(struct ADAPTER_DISPLAY *a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, __int64 *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // bl
  __int64 (__fastcall **v14)(__int64, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+48h] [rbp-28h]
  void (__fastcall *v18)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  __int64 v21; // [rsp+90h] [rbp+20h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v15 = 0LL;
  v21 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  v2 = *(_QWORD *)(v1 + 400);
  v3 = *((_QWORD *)a1 + 2);
  v22 = 0LL;
  v17 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(v2 + 48);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v16[0] = 0;
  v5 = v4(v3, &v21, &v22);
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = v3;
    *(_QWORD *)(v8 + 32) = v7;
    WdLogEvent5_WdError(v8);
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v16,
    v21,
    *(_QWORD *)(v2 + 64),
    v3);
  if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *, __int64 (__fastcall ***)(__int64, __int64 *)))(v22 + 8))(
         v21,
         0LL,
         &v23,
         &v14) < 0 )
    goto LABEL_8;
  v9 = (*v14)(v23, &v15);
  if ( (*(int (__fastcall **)(__int64, __int64))(v22 + 16))(v21, v23) < 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 14066LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v9 < 0 )
    goto LABEL_8;
  v12 = 1;
  if ( v15 != 1 )
    goto LABEL_8;
LABEL_9:
  if ( v16[0] )
    v18(v19, v17);
  return v12;
}
