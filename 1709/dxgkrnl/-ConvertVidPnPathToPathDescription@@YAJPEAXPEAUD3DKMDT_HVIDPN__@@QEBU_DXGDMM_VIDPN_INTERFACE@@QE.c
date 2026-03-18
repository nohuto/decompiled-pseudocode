/*
 * XREFs of ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01A24BC
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01A284C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E25C8 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 */

__int64 __fastcall ConvertVidPnPathToPathDescription(
        DXGADAPTER *a1,
        struct D3DKMDT_HVIDPN__ *a2,
        const struct _DXGDMM_VIDPN_INTERFACE *const a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *const a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        unsigned int a6,
        unsigned int a7,
        bool a8,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a9)
{
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v10; // rdi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  bool v18; // al
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int128 v36; // xmm1
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // xmm1_8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // [rsp+50h] [rbp-41h] BYREF
  __int64 v51; // [rsp+58h] [rbp-39h] BYREF
  __int64 v52; // [rsp+60h] [rbp-31h] BYREF
  __int64 v53; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v54[8]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v55; // [rsp+78h] [rbp-19h]
  void (__fastcall *v56)(__int64, __int64); // [rsp+80h] [rbp-11h]
  __int64 v57; // [rsp+88h] [rbp-9h]
  int v58; // [rsp+90h] [rbp-1h]
  __int64 v60; // [rsp+E8h] [rbp+57h] BYREF

  v10 = a5;
  v13 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64 *))a4 + 3))(
          a5,
          a6,
          a7,
          &v52);
  v15 = v13;
  if ( v13 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = v10;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdError(v16);
    return (unsigned int)v15;
  }
  v18 = (int)DxgkQueryMonitorTypeLockHeld(a1, a7, 0LL, 0LL, 0LL, 0LL, 0LL, (bool *)&v60, (bool *)&v50, 0LL) >= 0
     && ((_BYTE)v60 || (_BYTE)v50);
  v19 = a9;
  v20 = v52;
  *((_BYTE *)a9 + 129) = v18;
  v21 = *(_DWORD *)(v20 + 12);
  if ( v21 != 254 )
  {
    *((_DWORD *)v19 + 35) = v21;
    *((_DWORD *)v19 + 34) = *(_DWORD *)(v20 + 12);
    *(_QWORD *)v19 |= 0x40000010000uLL;
  }
  v22 = *(_DWORD *)(v20 + 20);
  if ( v22 != 254 )
  {
    *(_QWORD *)v19 |= 0x200uLL;
    *((_DWORD *)v19 + 33) = v22;
  }
  (*((void (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *))a4 + 4))(v10);
  v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 1))(
          a2,
          a6,
          &v60,
          &v51);
  v25 = v23;
  if ( v23 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v27 = a6;
LABEL_14:
    v26[3] = v27;
    v26[4] = a2;
    v26[5] = v25;
    WdLogEvent5_WdError(v26);
    return (unsigned int)v25;
  }
  v28 = *((_QWORD *)a3 + 2);
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v54[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v54,
    v60,
    v28,
    (__int64)a2);
  v29 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v51 + 24))(v60, &v53);
  v25 = v29;
  if ( v29 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v30);
    v32 = v55;
    v31[3] = a6;
    v31[4] = v32;
    v31[5] = v25;
    goto LABEL_18;
  }
  if ( v29 != 1075708679 )
  {
    v33 = v53;
    v34 = v60;
    *((_BYTE *)v19 + 128) = (unsigned int)(*(_DWORD *)(v53 + 4) - 3) <= 1;
    v35 = v51;
    *((_OWORD *)v19 + 6) = *(_OWORD *)(v33 + 8);
    v36 = *(_OWORD *)(v33 + 24);
    *(_QWORD *)v19 |= 0x100uLL;
    *((_OWORD *)v19 + 7) = v36;
    (*(void (__fastcall **)(__int64))(v35 + 32))(v34);
  }
  if ( v54[0] )
    v56(v57, v55);
  v37 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a3 + 3))(
          a2,
          a7,
          &v60,
          &v51);
  v25 = v37;
  if ( v37 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v38);
    v27 = a7;
    goto LABEL_14;
  }
  v39 = *((_QWORD *)a3 + 4);
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v54[0] = 0;
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v54,
    v60,
    v39,
    (__int64)a2);
  v40 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v51 + 24))(v60, &v53);
  v25 = v40;
  if ( v40 < 0 )
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdError(v41);
    v32 = v55;
    v31[3] = v55;
    v31[4] = v25;
LABEL_18:
    WdLogEvent5_WdError(v31);
    if ( v54[0] )
      v56(v57, v32);
    return (unsigned int)v25;
  }
  if ( v40 != 1075708679 )
  {
    v42 = v53;
    v43 = v51;
    v44 = v60;
    *((_OWORD *)v19 + 2) = *(_OWORD *)(v53 + 8);
    *((_OWORD *)v19 + 3) = *(_OWORD *)(v42 + 24);
    *((_OWORD *)v19 + 4) = *(_OWORD *)(v42 + 40);
    v45 = *(_QWORD *)(v42 + 56);
    *(_QWORD *)v19 |= 0x87uLL;
    *((_QWORD *)v19 + 10) = v45;
    (*(void (__fastcall **)(__int64))(v43 + 32))(v44);
    if ( a8 )
    {
      if ( (int)DmmGetCurrentWireFormatAndColorSpace(
                  a1,
                  a6,
                  a7,
                  (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)v19 + 51,
                  (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)v19 + 52) >= 0 )
      {
        *(_QWORD *)v19 |= 8uLL;
      }
      else
      {
        v49 = WdLogNewEntry5_WdWarning(v47, v46, v48);
        *(_QWORD *)(v49 + 24) = a6;
        *(_QWORD *)(v49 + 32) = a7;
        WdLogEvent5_WdWarning(v49);
      }
    }
  }
  if ( v54[0] )
    v56(v57, v55);
  return 0LL;
}
