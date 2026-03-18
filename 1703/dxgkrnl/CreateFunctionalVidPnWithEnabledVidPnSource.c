/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C018EF8C
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BF7F0 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00A7D84 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00F5430 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C018E094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     DmmIsSourceInVidPnTopology @ 0x1C01D605C (DmmIsSourceInVidPnTopology.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        __int64 a7,
        struct D3DKMDT_HVIDPN__ **a8,
        struct _DXGDMM_VIDPN_INTERFACE **a9,
        __int64 a10,
        __int64 a11,
        bool *a12,
        __int64 a13,
        unsigned __int8 *a14)
{
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  D3DDDI_RATIONAL *p_RefreshRate; // r13
  __int64 ScanLineOrdering; // rdx
  int v26; // eax
  __int64 v27; // rdx
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v29; // rax
  __int64 (__fastcall *v31)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v32; // r12
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rbx
  int IsSourceInVidPnTopology; // eax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v43; // r9
  __int64 v44; // rcx
  unsigned int *v45; // rdi
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdi
  __int64 v52; // rax
  _QWORD *v53; // rax
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  _QWORD *v59; // rdi
  unsigned int v60; // eax
  _QWORD *v61; // rax
  bool v62; // zf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v63; // [rsp+48h] [rbp-B8h]
  unsigned int v64; // [rsp+50h] [rbp-B0h]
  unsigned int v65; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v66; // [rsp+70h] [rbp-90h] BYREF
  char v67[7]; // [rsp+71h] [rbp-8Fh] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v68; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v69[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v70; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v71; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v72; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v73; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPN__ **v74; // [rsp+A8h] [rbp-58h]
  struct _DXGDMM_VIDPN_INTERFACE **v75; // [rsp+B0h] [rbp-50h]
  bool *v76; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v77; // [rsp+C0h] [rbp-40h]
  char v78[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v79; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v80)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v81; // [rsp+E0h] [rbp-20h]
  int v82; // [rsp+E8h] [rbp-18h]
  unsigned int v83[16]; // [rsp+F0h] [rbp-10h] BYREF

  v74 = a8;
  v75 = a9;
  v76 = a12;
  v77 = a14;
  v16 = (unsigned int)a3;
  v72 = (struct _DXGDMM_INTERFACE *)a1;
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 4197LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 4198LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( (_DWORD)v16 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 4199LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a6 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 4200LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a8 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 4201LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a9 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 4202LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a12 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v23 + 24) = 4203LL;
    WdLogEvent5_WdAssertion(v23);
  }
  *a8 = 0LL;
  *a9 = 0LL;
  *a12 = 0;
  p_RefreshRate = &a6->RefreshRate;
  ScanLineOrdering = (unsigned int)a6->ScanLineOrdering;
  v66 = 0;
  v26 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, &v66, a4);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v26 && (!v66 || (_DWORD)IntegerRefreshRate != v26 + 1) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate, v27);
    v29[3] = a6->IntegerRefreshRate;
    v29[4] = p_RefreshRate->Numerator;
    v29[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v31 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v68 = 0LL;
  v79 = 0LL;
  v32 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0;
  v78[0] = 0;
  *(_QWORD *)v69 = 0LL;
  v33 = v31(a2, v69, &v68);
  v36 = v33;
  if ( v33 < 0
    || (DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v78,
          *(__int64 *)v69,
          *(_QWORD *)(a1 + 64),
          (__int64)a2),
        v32 = v79,
        v67[0] = 0,
        IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(v79, (unsigned int)v16, v67),
        v36 = IsSourceInVidPnTopology,
        IsSourceInVidPnTopology < 0) )
  {
    v38 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v38 + 24) = a2;
LABEL_24:
    *(_QWORD *)(v38 + 32) = v36;
    v42 = (_QWORD *)v38;
LABEL_37:
    WdLogEvent5_WdError(v42);
    goto LABEL_41;
  }
  v71 = 0LL;
  v70 = 0LL;
  v39 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v68)(
          v32,
          &v71,
          &v70);
  v36 = v39;
  if ( v39 < 0 )
  {
    v38 = WdLogNewEntry5_WdError(v41, v40);
    *(_QWORD *)(v38 + 24) = v32;
    goto LABEL_24;
  }
  v43 = v68;
  v66 = 0;
  v44 = 16LL;
  *(_QWORD *)v69 = 0LL;
  v45 = v83;
  while ( v44 )
  {
    *v45++ = -1;
    --v44;
  }
  v46 = PrepareUnpinnedPathsFromSource(
          v72,
          a2,
          v32,
          v43,
          v71,
          v70,
          v16,
          0,
          0,
          0,
          (unsigned __int64 *const)v69,
          (unsigned int (*)[16])v83,
          &v66);
  v51 = v46;
  LODWORD(v36) = -1071774925;
  if ( v46 == -1071774925 || (LODWORD(v36) = -1071774886, v46 == -1071774886) )
  {
    v52 = WdLogNewEntry5_WdDmmEvent(v48, v47, v49, v50);
    *(_QWORD *)(v52 + 24) = v16;
    *(_QWORD *)(v52 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v52);
  }
  else if ( v46 >= 0 )
  {
    v54 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v72,
            (char *)a2,
            v32,
            v68,
            v71,
            v70,
            v16,
            *(unsigned __int64 *)v69,
            a6,
            v63,
            v64,
            v65,
            &v73);
    LODWORD(v36) = v54;
    if ( v54 >= 0 )
    {
      v62 = v67[0] == 0;
      *v74 = v73;
      *v75 = v68;
      *v76 = v62;
      if ( v77 )
        *v77 = v66;
      LODWORD(v36) = 0;
      goto LABEL_41;
    }
    if ( v54 != -1071774970 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v56, v55);
      v61[3] = v16;
      v61[4] = a6->Width;
      v61[5] = a6->Height;
      v61[6] = a6->Format;
      v61[7] = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
      v42 = v61;
      goto LABEL_37;
    }
    v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v56, v55, v57, v58);
    v59[3] = a6->Width;
    v59[4] = a6->Height;
    v59[5] = a6->Format;
    v60 = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
    v59[7] = v16;
    v59[6] = v60;
  }
  else
  {
    v53 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
    v53[3] = v16;
    v53[4] = a2;
    v53[5] = v51;
    WdLogEvent5_WdError(v53);
    LODWORD(v36) = v51;
  }
LABEL_41:
  if ( v78[0] )
    v80(v81, v32);
  return (unsigned int)v36;
}
