/*
 * XREFs of CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0194220
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C00C3E6C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C019200C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01926A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _D3DKMT_DISPLAYMODE *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  struct D3DKMDT_HVIDPN__ *v8; // r12
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering; // edx
  int v19; // eax
  __int64 IntegerRefreshRate; // rcx
  _QWORD *v21; // rax
  __int64 (__fastcall *v23)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  struct _DXGDMM_VIDPN_INTERFACE *v31; // r9
  __int64 v32; // rcx
  unsigned int *v33; // rdi
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rdi
  unsigned int v45; // eax
  _QWORD *v46; // rax
  struct _DXGDMM_VIDPN_INTERFACE **v47; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v48; // [rsp+48h] [rbp-B8h]
  unsigned int v49; // [rsp+50h] [rbp-B0h]
  unsigned int v50; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v51[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int8 v53[8]; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v54; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v55; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGDMM_INTERFACE *v56; // [rsp+98h] [rbp-68h]
  struct D3DKMDT_HVIDPN__ *v57; // [rsp+A0h] [rbp-60h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE **v58; // [rsp+A8h] [rbp-58h]
  char v59[8]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMDT_HVIDPN__ *v60; // [rsp+B8h] [rbp-48h]
  void (__fastcall *v61)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C0h] [rbp-40h]
  __int64 v62; // [rsp+C8h] [rbp-38h]
  int v63; // [rsp+D0h] [rbp-30h]
  unsigned int v64[16]; // [rsp+E0h] [rbp-20h] BYREF

  v8 = 0LL;
  v11 = a3;
  v56 = (struct _DXGDMM_INTERFACE *)a1;
  v58 = a8;
  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v12 + 24) = 4186LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 4187LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( (_DWORD)v11 == -1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 4188LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a6 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 4189LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 4190LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a8 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 4191LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a7 = 0LL;
  *a8 = 0LL;
  ScanLineOrdering = a6->ScanLineOrdering;
  v51[0] = 0;
  v19 = DmmMapVSyncFromRationalToInteger(&a6->RefreshRate, ScanLineOrdering, v51);
  IntegerRefreshRate = a6->IntegerRefreshRate;
  if ( (_DWORD)IntegerRefreshRate != v19 && (!v51[0] || (_DWORD)IntegerRefreshRate != v19 + 1) )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(IntegerRefreshRate);
    v21[3] = a6->IntegerRefreshRate;
    v21[4] = a6->RefreshRate.Numerator;
    v21[5] = a6->RefreshRate.Denominator;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  v23 = *(__int64 (__fastcall **)(void *, unsigned __int8 *, struct _DXGDMM_VIDPN_INTERFACE **))(a1 + 48);
  v52 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v59[0] = 0;
  *(_QWORD *)v53 = 0LL;
  v24 = v23(a2, v53, &v52);
  v26 = v24;
  if ( v24 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 24) = a2;
LABEL_21:
    *(_QWORD *)(v27 + 32) = v26;
    v30 = (_QWORD *)v27;
LABEL_34:
    WdLogEvent5_WdError(v30);
    goto LABEL_36;
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v59,
    *(__int64 *)v53,
    *((_QWORD *)v56 + 8),
    (__int64)a2);
  v8 = v60;
  v55 = 0LL;
  v54 = 0LL;
  v28 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v52)(
          v60,
          &v55,
          &v54);
  v26 = v28;
  if ( v28 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v27 + 24) = v8;
    goto LABEL_21;
  }
  v31 = v52;
  v51[0] = 0;
  v32 = 16LL;
  *(_QWORD *)v53 = 0LL;
  v33 = v64;
  while ( v32 )
  {
    *v33++ = -1;
    --v32;
  }
  v34 = PrepareUnpinnedPathsFromSource(
          v56,
          a2,
          v8,
          v31,
          v55,
          v54,
          v11,
          0,
          0,
          0,
          (unsigned __int64 *const)v53,
          (unsigned int (*)[16])v64,
          v51);
  v36 = v34;
  LODWORD(v26) = -1071774925;
  if ( v34 == -1071774925 || (LODWORD(v26) = -1071774886, v34 == -1071774886) )
  {
    v37 = WdLogNewEntry5_WdDmmEvent(v35);
    *(_QWORD *)(v37 + 24) = v11;
    *(_QWORD *)(v37 + 32) = a2;
    WdLogEvent5_WdDmmEvent(v37);
  }
  else if ( v34 >= 0 )
  {
    v39 = PinPresentPathModalityFromMode(
            (void (__fastcall **)(char *, unsigned __int64))v56,
            (char *)a2,
            v8,
            v52,
            v55,
            v54,
            v11,
            *(unsigned __int64 *)v53,
            a6,
            v48,
            v49,
            v50,
            &v57);
    LODWORD(v26) = v39;
    if ( v39 >= 0 )
    {
      LODWORD(v26) = 0;
      v47 = v58;
      *a7 = v57;
      *v47 = v52;
      goto LABEL_36;
    }
    if ( v39 != -1071774970 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdError(v41);
      v46[3] = v11;
      v46[4] = a6->Width;
      v46[5] = a6->Height;
      v46[6] = a6->Format;
      v46[7] = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
      v30 = v46;
      goto LABEL_34;
    }
    v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v41, v40, v42, v43);
    v44[3] = a6->Width;
    v44[4] = a6->Height;
    v44[5] = a6->Format;
    v45 = a6->RefreshRate.Numerator / a6->RefreshRate.Denominator;
    v44[7] = v11;
    v44[6] = v45;
  }
  else
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v35);
    v38[3] = v11;
    v38[4] = a2;
    v38[5] = v36;
    WdLogEvent5_WdError(v38);
    LODWORD(v26) = v36;
  }
LABEL_36:
  if ( v59[0] )
    v61(v62, v8);
  return (unsigned int)v26;
}
