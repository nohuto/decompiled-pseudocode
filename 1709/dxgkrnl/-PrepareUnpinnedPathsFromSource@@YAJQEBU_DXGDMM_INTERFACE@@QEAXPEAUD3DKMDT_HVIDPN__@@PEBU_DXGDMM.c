/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E5B54
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C01A37D4 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00E5668 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C01A1E80 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 */

__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        unsigned int (*a12)[16],
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rbx
  __int64 v17; // rcx
  unsigned int *v18; // rdi
  __int64 (__fastcall *v19)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v20; // r12
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rdi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rbx
  unsigned int *v32; // rdi
  __int64 i; // rcx
  unsigned __int64 v34; // rdi
  struct D3DKMDT_HVIDPN__ *v35; // rsi
  int v36; // eax
  __int64 v37; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  _BYTE v62[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v63; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v64; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v65; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v66; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v67; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v68; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v69; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v70; // [rsp+90h] [rbp-59h]
  unsigned int Src[16]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v65 = a6;
  v69 = a11;
  v70 = a13;
  v67 = a4;
  v68 = a3;
  v66 = a1;
  if ( !a1 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v39 + 24) = 3941LL;
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v40 + 24) = 3942LL;
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a3 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v41 + 24) = 3943LL;
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a4 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v42 + 24) = 3944LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a5 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v43 + 24) = 3945LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a6 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v44 + 24) = 3946LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( a7 == -1 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v45 + 24) = 3947LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a11 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v46 + 24) = 3948LL;
    WdLogEvent5_WdAssertion(v46);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    v17 = 16LL;
    v18 = (unsigned int *)a12;
    while ( v17 )
    {
      *v18++ = -1;
      --v17;
    }
  }
  v19 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v63 = 0LL;
  v20 = 0;
  v21 = v19(a5, a7, &v63);
  v23 = v21;
  if ( v21 == -1071774919 )
  {
    if ( v63 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v47 + 24) = 3979LL;
      WdLogEvent5_WdAssertion(v47);
    }
    v20 = 1;
    v30 = WdLogNewEntry5_WdDmmEvent(v22);
    v31 = a7;
    *(_QWORD *)(v30 + 24) = a5;
    *(_QWORD *)(v30 + 32) = a7;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v48[3] = a7;
    goto LABEL_51;
  }
  v24 = 0LL;
  if ( !v63 )
  {
LABEL_30:
    v30 = WdLogNewEntry5_WdDmmEvent(v22);
    v31 = a7;
    *(_QWORD *)(v30 + 24) = a7;
    *(_QWORD *)(v30 + 32) = a5;
LABEL_31:
    WdLogEvent5_WdDmmEvent(v30);
    v32 = Src;
    for ( i = 16LL; i; --i )
      *v32++ = -1;
    if ( !v20 )
    {
      v34 = v63;
LABEL_36:
      if ( !v34 )
      {
        v61 = WdLogNewEntry5_WdAssertion(i);
        *(_QWORD *)(v61 + 24) = 4145LL;
        WdLogEvent5_WdAssertion(v61);
        v34 = v63;
      }
      if ( !a9 )
        goto LABEL_41;
      v35 = v68;
      v36 = UnpinCofuncModalityOnPathsFromSource(v68, v67, a5, v65, a7, v34);
      v23 = v36;
      if ( v36 >= 0 )
      {
        v34 = v63;
LABEL_41:
        *v69 = v34;
        if ( a12 )
          memmove(a12, Src, 0x40uLL);
        if ( v70 )
          *v70 = v20;
        return 0LL;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v37);
      v48[3] = v63;
      v48[4] = v31;
      v48[5] = v35;
      v48[6] = a2;
      v48[7] = v23;
LABEL_53:
      WdLogEvent5_WdError(v48);
      return (unsigned int)v23;
    }
    if ( !a8 )
    {
      v52 = WdLogNewEntry5_WdDmmEvent(0LL);
      *(_QWORD *)(v52 + 24) = v31;
      *(_QWORD *)(v52 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v52);
      return 3223192403LL;
    }
    if ( !v63
      || (v53 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v65 + 7))(a5, a7),
          v23 = v53,
          v53 >= 0) )
    {
      v64 = 0LL;
      v55 = AugmentVidPnTopology(v68, v67, a5, v65, a2, v66, a7, a10, &v64, (unsigned int (*)[16])Src);
      v23 = v55;
      if ( v55 == -1071774925 )
      {
        v57 = WdLogNewEntry5_WdDmmEvent(v56);
        *(_QWORD *)(v57 + 24) = a5;
        *(_QWORD *)(v57 + 32) = v31;
        WdLogEvent5_WdDmmEvent(v57);
        return (unsigned int)v23;
      }
      if ( v55 == -1071774886 )
      {
        v58 = WdLogNewEntry5_WdDmmEvent(v56);
        *(_QWORD *)(v58 + 24) = a5;
        *(_QWORD *)(v58 + 32) = v31;
        WdLogEvent5_WdDmmEvent(v58);
        return 3223192410LL;
      }
      if ( v55 < 0 )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v56);
        v48[3] = v31;
        v48[4] = v23;
        goto LABEL_53;
      }
      v34 = v64;
      if ( !v64 )
      {
        v59 = WdLogNewEntry5_WdAssertion(v56);
        *(_QWORD *)(v59 + 24) = 4135LL;
        WdLogEvent5_WdAssertion(v59);
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v56);
      v60[3] = a2;
      v60[4] = v34;
      v60[5] = v31;
      v60[6] = v63;
      WdLogEvent5_WdDmmEvent(v60);
      v63 = v34;
      goto LABEL_36;
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v54);
    v48[3] = v31;
LABEL_51:
    v48[4] = a5;
    v48[5] = v23;
    goto LABEL_53;
  }
  while ( 1 )
  {
    LODWORD(v64) = -1;
    v25 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))v13 + 1))(
            a5,
            a7,
            v24,
            &v64);
    v27 = v25;
    if ( v25 < 0 )
      break;
    v28 = (unsigned int)v64;
    if ( (_DWORD)v64 == -1 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v49 + 24) = 4022LL;
      WdLogEvent5_WdAssertion(v49);
      v28 = (unsigned int)v64;
    }
    v62[0] = 0;
    v29 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v66 + 9))(a2, v28, v62);
    v27 = v29;
    if ( v29 < 0 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v51[3] = a2;
      v51[4] = v27;
      goto LABEL_57;
    }
    if ( !v62[0] )
    {
      v20 = 1;
      v50 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
      v50[3] = a5;
      v50[4] = a7;
      v50[5] = (unsigned int)v64;
      WdLogEvent5_WdDmmEvent(v50);
      goto LABEL_30;
    }
    v13 = v65;
    if ( ++v24 >= v63 )
      goto LABEL_30;
  }
  v51 = (_QWORD *)WdLogNewEntry5_WdError(v26);
  v51[3] = v24;
  v51[4] = a7;
  v51[5] = v27;
LABEL_57:
  WdLogEvent5_WdError(v51);
  return (unsigned int)v27;
}
