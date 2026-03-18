/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C018DD48
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C0099E20 (DxgkQueryMonitorTypeLockHeld.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        DXGADAPTER *this,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        struct _D3DKMT_PATHMODALITY_DESCRIPTOR *a8)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v9; // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  bool v17; // al
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rbx
  __int64 v34; // rdx
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v35; // rcx
  __int64 v36; // rax
  __int128 v37; // xmm1
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rax
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v47; // rcx
  __int64 v48; // xmm1_8
  __int64 v49; // [rsp+58h] [rbp-29h] BYREF
  __int64 v50; // [rsp+60h] [rbp-21h] BYREF
  __int64 v51; // [rsp+68h] [rbp-19h] BYREF
  __int64 v52; // [rsp+70h] [rbp-11h] BYREF
  _BYTE v53[8]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v54; // [rsp+80h] [rbp-1h]
  void (__fastcall *v55)(__int64, __int64); // [rsp+88h] [rbp+7h]
  __int64 v56; // [rsp+90h] [rbp+Fh]
  int v57; // [rsp+98h] [rbp+17h]
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v58; // [rsp+E0h] [rbp+5Fh] BYREF

  v58 = a4;
  v9 = a5;
  v12 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v51);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, v13);
    *(_QWORD *)(v15 + 24) = v9;
    *(_QWORD *)(v15 + 32) = v14;
    WdLogEvent5_WdError(v15);
    return (unsigned int)v14;
  }
  v17 = (int)DxgkQueryMonitorTypeLockHeld(this, a7, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v49, (bool *)&v49 + 1, 0LL) >= 0
     && (_WORD)v49;
  v18 = a8;
  v19 = v51;
  *((_BYTE *)a8 + 129) = v17;
  v20 = *(_DWORD *)(v19 + 12);
  if ( v20 != 254 )
  {
    *((_DWORD *)v18 + 35) = v20;
    *((_DWORD *)v18 + 34) = *(_DWORD *)(v19 + 12);
    *(_QWORD *)v18 |= 0x40000010000uLL;
  }
  v21 = *(_DWORD *)(v19 + 20);
  if ( v21 != 254 )
  {
    *(_QWORD *)v18 |= 0x200uLL;
    *((_DWORD *)v18 + 33) = v21;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))v58 + 4))(v9);
  v22 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 1))(
          a2,
          a6,
          &v58,
          &v50);
  v25 = v22;
  if ( v22 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24, v23);
    v27 = a6;
LABEL_13:
    v26[3] = v27;
    v26[4] = a2;
    v26[5] = v25;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v25;
  }
  v28 = *((_QWORD *)a3 + 2);
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v53[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v53,
    (__int64)v58,
    v28,
    (__int64)a2);
  v29 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v50 + 24))(v58, &v52);
  v25 = v29;
  if ( v29 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
    v33 = v54;
    v32[3] = a6;
    v32[4] = v33;
    v32[5] = v25;
    goto LABEL_17;
  }
  if ( v29 != 1075708679 )
  {
    v34 = v52;
    v35 = v58;
    *((_BYTE *)v18 + 128) = (unsigned int)(*(_DWORD *)(v52 + 4) - 3) <= 1;
    v36 = v50;
    *((_OWORD *)v18 + 6) = *(_OWORD *)(v34 + 8);
    v37 = *(_OWORD *)(v34 + 24);
    *(_QWORD *)v18 |= 0x100uLL;
    *((_OWORD *)v18 + 7) = v37;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v36 + 32))(v35);
  }
  if ( v53[0] )
    v55(v56, v54);
  v38 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **, __int64 *))a3
         + 3))(
          a2,
          a7,
          &v58,
          &v50);
  v25 = v38;
  if ( v38 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v40, v39);
    v27 = a7;
    goto LABEL_13;
  }
  v41 = *((_QWORD *)a3 + 4);
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v53[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v53,
    (__int64)v58,
    v41,
    (__int64)a2);
  v42 = (*(__int64 (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *, __int64 *))(v50 + 24))(v58, &v52);
  v25 = v42;
  if ( v42 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v44, v43);
    v33 = v54;
    v32[3] = v54;
    v32[4] = v25;
LABEL_17:
    WdLogEvent5_WdError(v32);
    if ( v53[0] )
      v55(v56, v33);
    return (unsigned int)v25;
  }
  if ( v42 != 1075708679 )
  {
    v45 = v52;
    v46 = v50;
    v47 = v58;
    *((_OWORD *)v18 + 2) = *(_OWORD *)(v52 + 8);
    *((_OWORD *)v18 + 3) = *(_OWORD *)(v45 + 24);
    *((_OWORD *)v18 + 4) = *(_OWORD *)(v45 + 40);
    v48 = *(_QWORD *)(v45 + 56);
    *(_QWORD *)v18 |= 0x87uLL;
    *((_QWORD *)v18 + 10) = v48;
    (*(void (__fastcall **)(const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *))(v46 + 32))(v47);
  }
  if ( v53[0] )
    v55(v56, v54);
  return 0LL;
}
