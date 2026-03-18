/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C01A37D4
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00925C8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00D5698 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E5B54 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01A284C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?DmmIsSourceInVidPnTopology@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAE@Z @ 0x1C01ED17C (-DmmIsSourceInVidPnTopology@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAE@Z.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        struct _DXGDMM_VIDPN_INTERFACE **a8,
        __int64 a9,
        __int64 a10,
        bool *a11,
        __int64 a12,
        unsigned __int8 *a13)
{
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  D3DDDI_RATIONAL *p_RefreshRate; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering; // edx
  int v25; // eax
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v27; // rax
  __int64 (__fastcall *v29)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v30; // r12
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  int IsSourceInVidPnTopology; // eax
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v39; // r9
  __int64 v40; // rcx
  unsigned int *v41; // rdi
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  _QWORD *v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  _QWORD *v50; // rdi
  unsigned int v51; // eax
  _QWORD *v52; // rax
  bool v53; // zf
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v54; // [rsp+48h] [rbp-B8h]
  unsigned int v55; // [rsp+50h] [rbp-B0h]
  unsigned int v56; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v58[7]; // [rsp+71h] [rbp-8Fh] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v59; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v60[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v61; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v62; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v63; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v64; // [rsp+A0h] [rbp-60h] BYREF
  struct D3DKMDT_HVIDPN__ **v65; // [rsp+A8h] [rbp-58h]
  struct _DXGDMM_VIDPN_INTERFACE **v66; // [rsp+B0h] [rbp-50h]
  bool *v67; // [rsp+B8h] [rbp-48h]
  unsigned __int8 *v68; // [rsp+C0h] [rbp-40h]
  char v69[8]; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v70; // [rsp+D0h] [rbp-30h]
  void (__fastcall *v71)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+D8h] [rbp-28h]
  __int64 v72; // [rsp+E0h] [rbp-20h]
  int v73; // [rsp+E8h] [rbp-18h]
  unsigned int v74[16]; // [rsp+F0h] [rbp-10h] BYREF

  v65 = a7;
  v66 = a8;
  v67 = a11;
  v68 = a13;
  v15 = a3;
  v63 = (struct _DXGDMM_INTERFACE *)a1;
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v16 + 24) = 4212LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 4213LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( (_DWORD)v15 == -1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 4214LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 4215LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a7 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 4216LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a8 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v21 + 24) = 4217LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a11 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 4218LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  *a11 = 0;
  p_RefreshRate = &a6->RefreshRate;
  ScanLineOrdering = a6->ScanLineOrdering;
  v57 = 0;
  v25 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, &v57);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v25 && (!v57 || (_DWORD)IntegerRefreshRate != v25 + 1) )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v27[3] = a6->IntegerRefreshRate;
    v27[4] = p_RefreshRate->Numerator;
    v27[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v27);
    return 3221225485LL;
  }
  v29 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v59 = 0LL;
  v70 = 0LL;
  v30 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0;
  v69[0] = 0;
  *(_QWORD *)v60 = 0LL;
  v31 = v29(a2, v60, &v59);
  v33 = v31;
  if ( v31 < 0
    || (DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
          (__int64)v69,
          *(__int64 *)v60,
          *(_QWORD *)(a1 + 64),
          (__int64)a2),
        v30 = v70,
        v58[0] = 0,
        IsSourceInVidPnTopology = DmmIsSourceInVidPnTopology(v70, v15, v58),
        v33 = IsSourceInVidPnTopology,
        IsSourceInVidPnTopology < 0) )
  {
    v35 = WdLogNewEntry5_WdError(v32);
    *(_QWORD *)(v35 + 24) = a2;
LABEL_24:
    *(_QWORD *)(v35 + 32) = v33;
    v38 = (_QWORD *)v35;
LABEL_37:
    WdLogEvent5_WdError(v38);
    goto LABEL_41;
  }
  v62 = 0LL;
  v61 = 0LL;
  v36 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v59)(
          v30,
          &v62,
          &v61);
  v33 = v36;
  if ( v36 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v37);
    *(_QWORD *)(v35 + 24) = v30;
    goto LABEL_24;
  }
  v39 = v59;
  v57 = 0;
  v40 = 16LL;
  *(_QWORD *)v60 = 0LL;
  v41 = v74;
  while ( v40 )
  {
    *v41++ = -1;
    --v40;
  }
  v42 = PrepareUnpinnedPathsFromSource(
          v63,
          a2,
          v30,
          v39,
          v62,
          v61,
          v15,
          0,
          0,
          0,
          (unsigned __int64 *const)v60,
          (unsigned int (*)[16])v74,
          &v57);
  v44 = v42;
  LODWORD(v33) = -1071774925;
  if ( v42 == -1071774925 || (LODWORD(v33) = -1071774886, v42 == -1071774886) )
  {
    v45 = WdLogNewEntry5_WdDmmEvent(v43);
    *(_QWORD *)(v45 + 24) = v15;
    *(_QWORD *)(v45 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v45);
  }
  else if ( v42 >= 0 )
  {
    v47 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, struct D3DKMDT_HVIDPN__ *))v63,
            (char *)a2,
            v30,
            v59,
            v62,
            v61,
            v15,
            *(unsigned __int64 *)v60,
            a6,
            v54,
            v55,
            v56,
            &v64);
    LODWORD(v33) = v47;
    if ( v47 >= 0 )
    {
      v53 = v58[0] == 0;
      *v65 = v64;
      *v66 = v59;
      *v67 = v53;
      if ( v68 )
        *v68 = v57;
      LODWORD(v33) = 0;
      goto LABEL_41;
    }
    if ( v47 != -1071774970 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v49);
      v52[3] = v15;
      v52[4] = a6->Width;
      v52[5] = a6->Height;
      v52[6] = a6->Format;
      v52[7] = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
      v38 = v52;
      goto LABEL_37;
    }
    v50 = (_QWORD *)WdLogNewEntry5_WdTrace(v49, v48);
    v50[3] = a6->Width;
    v50[4] = a6->Height;
    v50[5] = a6->Format;
    v51 = p_RefreshRate->Numerator / a6->RefreshRate.Denominator;
    v50[7] = v15;
    v50[6] = v51;
  }
  else
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdError(v43);
    v46[3] = v15;
    v46[4] = a2;
    v46[5] = v44;
    WdLogEvent5_WdError(v46);
    LODWORD(v33) = v44;
  }
LABEL_41:
  if ( v69[0] )
    v71(v72, v30);
  return (unsigned int)v33;
}
