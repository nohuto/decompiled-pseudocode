/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00A7D84
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C018EF8C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00A78A0 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C018D70C (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int *v43; // rdi
  __int64 i; // rcx
  unsigned __int64 v45; // rdi
  struct D3DKMDT_HVIDPN__ *v46; // rsi
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  _BYTE v78[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v79; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v80; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v81; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v82; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v83; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v84; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v85; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v86; // [rsp+90h] [rbp-59h]
  unsigned int Src[16]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v81 = a6;
  v85 = a11;
  v86 = a13;
  v83 = a4;
  v84 = a3;
  v82 = a1;
  if ( !a1 )
  {
    v51 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v51 + 24) = 3923LL;
    WdLogEvent5_WdAssertion(v51);
  }
  if ( !a2 )
  {
    v52 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v52 + 24) = 3924LL;
    WdLogEvent5_WdAssertion(v52);
  }
  if ( !a3 )
  {
    v53 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v53 + 24) = 3925LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !a4 )
  {
    v54 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v54 + 24) = 3926LL;
    WdLogEvent5_WdAssertion(v54);
  }
  if ( !a5 )
  {
    v55 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v55 + 24) = 3927LL;
    WdLogEvent5_WdAssertion(v55);
  }
  if ( !a6 )
  {
    v56 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v56 + 24) = 3928LL;
    WdLogEvent5_WdAssertion(v56);
  }
  if ( a7 == -1 )
  {
    v57 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v57 + 24) = 3929LL;
    WdLogEvent5_WdAssertion(v57);
  }
  if ( !a11 )
  {
    v58 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v58 + 24) = 3930LL;
    WdLogEvent5_WdAssertion(v58);
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
  v79 = 0LL;
  v20 = 0;
  v21 = v19(a5, a7, &v79);
  v26 = v21;
  if ( v21 == -1071774919 )
  {
    if ( v79 )
    {
      v59 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
      *(_QWORD *)(v59 + 24) = 3961LL;
      WdLogEvent5_WdAssertion(v59);
    }
    v20 = 1;
    v38 = WdLogNewEntry5_WdDmmEvent();
    v39 = a7;
    *(_QWORD *)(v38 + 24) = a5;
    *(_QWORD *)(v38 + 32) = a7;
    goto LABEL_31;
  }
  if ( v21 < 0 )
  {
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
    v60[3] = a7;
    goto LABEL_51;
  }
  v27 = 0LL;
  if ( !v79 )
  {
LABEL_30:
    v38 = WdLogNewEntry5_WdDmmEvent();
    v39 = a7;
    *(_QWORD *)(v38 + 24) = a7;
    *(_QWORD *)(v38 + 32) = a5;
LABEL_31:
    WdLogEvent5_WdDmmEvent(v38);
    v43 = Src;
    for ( i = 16LL; i; --i )
      *v43++ = -1;
    if ( !v20 )
    {
      v45 = v79;
LABEL_36:
      if ( !v45 )
      {
        v77 = WdLogNewEntry5_WdAssertion(i, v40, v41, v42);
        *(_QWORD *)(v77 + 24) = 4127LL;
        WdLogEvent5_WdAssertion(v77);
        v45 = v79;
      }
      if ( !a9 )
        goto LABEL_41;
      v46 = v84;
      v47 = UnpinCofuncModalityOnPathsFromSource(v84, v83, a5, v81, a7, v45);
      v26 = v47;
      if ( v47 >= 0 )
      {
        v45 = v79;
LABEL_41:
        *v85 = v45;
        if ( a12 )
          memmove(a12, Src, 0x40uLL);
        if ( v86 )
          *v86 = v20;
        return 0LL;
      }
      v60 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
      v60[3] = v79;
      v60[4] = v39;
      v60[5] = v46;
      v60[6] = a2;
      v60[7] = v26;
LABEL_53:
      WdLogEvent5_WdError(v60);
      return (unsigned int)v26;
    }
    if ( !a8 )
    {
      v64 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v64 + 24) = v39;
      *(_QWORD *)(v64 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v64);
      return 3223192403LL;
    }
    if ( !v79
      || (v65 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v81 + 7))(a5, a7),
          v26 = v65,
          v65 >= 0) )
    {
      v80 = 0LL;
      v68 = AugmentVidPnTopology(v84, v83, a5, v81, a2, v82, a7, a10, &v80, (unsigned int (*)[16])Src);
      v26 = v68;
      if ( v68 == -1071774925 )
      {
        v73 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v73 + 24) = a5;
        *(_QWORD *)(v73 + 32) = v39;
        WdLogEvent5_WdDmmEvent(v73);
        return (unsigned int)v26;
      }
      if ( v68 == -1071774886 )
      {
        v74 = WdLogNewEntry5_WdDmmEvent();
        *(_QWORD *)(v74 + 24) = a5;
        *(_QWORD *)(v74 + 32) = v39;
        WdLogEvent5_WdDmmEvent(v74);
        return 3223192410LL;
      }
      if ( v68 < 0 )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v70, v69);
        v60[3] = v39;
        v60[4] = v26;
        goto LABEL_53;
      }
      v45 = v80;
      if ( !v80 )
      {
        v75 = WdLogNewEntry5_WdAssertion(v70, v69, v71, v72);
        *(_QWORD *)(v75 + 24) = 4117LL;
        WdLogEvent5_WdAssertion(v75);
      }
      v76 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v76[3] = a2;
      v76[4] = v45;
      v76[5] = v39;
      v76[6] = v79;
      WdLogEvent5_WdDmmEvent(v76);
      v79 = v45;
      goto LABEL_36;
    }
    v60 = (_QWORD *)WdLogNewEntry5_WdError(v67, v66);
    v60[3] = v39;
LABEL_51:
    v60[4] = a5;
    v60[5] = v26;
    goto LABEL_53;
  }
  while ( 1 )
  {
    LODWORD(v80) = -1;
    v28 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))v13 + 1))(
            a5,
            a7,
            v27,
            &v80);
    v33 = v28;
    if ( v28 < 0 )
      break;
    v34 = (unsigned int)v80;
    if ( (_DWORD)v80 == -1 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v30, 0xFFFFFFFFLL, v31, v32);
      *(_QWORD *)(v61 + 24) = 4004LL;
      WdLogEvent5_WdAssertion(v61);
      v34 = (unsigned int)v80;
    }
    v78[0] = 0;
    v35 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v82 + 9))(a2, v34, v78);
    v33 = v35;
    if ( v35 < 0 )
    {
      v63 = (_QWORD *)WdLogNewEntry5_WdError(v37, v36);
      v63[3] = a2;
      v63[4] = v33;
      goto LABEL_57;
    }
    if ( !v78[0] )
    {
      v20 = 1;
      v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
      v62[3] = a5;
      v62[4] = a7;
      v62[5] = (unsigned int)v80;
      WdLogEvent5_WdDmmEvent(v62);
      goto LABEL_30;
    }
    v13 = v81;
    if ( ++v27 >= v79 )
      goto LABEL_30;
  }
  v63 = (_QWORD *)WdLogNewEntry5_WdError(v30, v29);
  v63[3] = v27;
  v63[4] = a7;
  v63[5] = v33;
LABEL_57:
  WdLogEvent5_WdError(v63);
  return (unsigned int)v33;
}
