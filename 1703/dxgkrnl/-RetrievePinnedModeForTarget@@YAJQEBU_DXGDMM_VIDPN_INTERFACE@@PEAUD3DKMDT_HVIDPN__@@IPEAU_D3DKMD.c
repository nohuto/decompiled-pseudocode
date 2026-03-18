/*
 * XREFs of ?RetrievePinnedModeForTarget@@YAJQEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPN__@@IPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C018EA0C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RetrievePinnedModeForTarget(
        const struct _DXGDMM_VIDPN_INTERFACE *const a1,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_TARGET_MODE *a4)
{
  __int64 v5; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  _OWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  _OWORD *v24; // [rsp+38h] [rbp-38h] BYREF
  _BYTE v25[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h]
  void (__fastcall *v27)(__int64, __int64); // [rsp+50h] [rbp-20h]
  __int64 v28; // [rsp+58h] [rbp-18h]
  int v29; // [rsp+60h] [rbp-10h]
  __int64 v30; // [rsp+90h] [rbp+20h] BYREF

  v5 = a3;
  v8 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a1 + 3))(a2, a3, &v30, &v23);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v12[3] = v5;
    v12[4] = a2;
    v12[5] = v11;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  v13 = *((_QWORD *)a1 + 4);
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v25[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v25,
    v30,
    v13,
    (__int64)a2);
  v14 = (*(__int64 (__fastcall **)(__int64, _OWORD **))(v23 + 24))(v30, &v24);
  v17 = v26;
  v11 = v14;
  if ( v14 < 0 )
    goto LABEL_6;
  if ( v14 == 1075708679 )
  {
    v11 = -1071774970LL;
LABEL_6:
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v17;
    *(_QWORD *)(v18 + 32) = v11;
    WdLogEvent5_WdError(v18);
    goto LABEL_8;
  }
  v19 = v24;
  v20 = v23;
  v21 = v30;
  *(_OWORD *)&a4->Id = *v24;
  *(_OWORD *)&a4->VideoSignalInfo.TotalSize.cy = v19[1];
  *(_OWORD *)&a4->VideoSignalInfo.VSyncFreq.Denominator = v19[2];
  *(_OWORD *)&a4->VideoSignalInfo.PixelRate = v19[3];
  *(_QWORD *)&a4->WireFormatAndPreference.0 = *((_QWORD *)v19 + 8);
  (*(void (__fastcall **)(__int64))(v20 + 32))(v21);
LABEL_8:
  if ( v25[0] )
    v27(v28, v17);
  return (unsigned int)v11;
}
