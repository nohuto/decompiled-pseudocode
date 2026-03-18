/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00E5668
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E5B54 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C000BC54 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  const struct _DXGDMM_VIDPN_INTERFACE *v8; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r14
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 (__fastcall *v20)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // r9
  int v34; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _BYTE v48[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v49; // [rsp+38h] [rbp-41h]
  void (__fastcall *v50)(__int64, __int64); // [rsp+40h] [rbp-39h]
  __int64 v51; // [rsp+48h] [rbp-31h]
  int v52; // [rsp+50h] [rbp-29h]
  _BYTE v53[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v54; // [rsp+60h] [rbp-19h]
  void (__fastcall *v55)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v56; // [rsp+70h] [rbp-9h]
  int v57; // [rsp+78h] [rbp-1h]
  __int64 v58; // [rsp+D0h] [rbp+57h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v59; // [rsp+D8h] [rbp+5Fh]
  __int64 v60; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v61; // [rsp+E8h] [rbp+6Fh] BYREF

  v59 = a2;
  v8 = a2;
  if ( !a1 )
  {
    v36 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v36 + 24) = 3108LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !v8 )
  {
    v37 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v37 + 24) = 3109LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !a3 )
  {
    v38 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v38 + 24) = 3110LL;
    WdLogEvent5_WdAssertion(v38);
  }
  if ( !a4 )
  {
    v39 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v39 + 24) = 3111LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v40 + 24) = 3112LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v60 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v53[0] = 0;
  v58 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v58, &v60);
  v14 = v12;
  if ( v12 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v41[3] = v10;
    v41[4] = a1;
    v41[5] = v14;
LABEL_46:
    WdLogEvent5_WdError(v41);
    goto LABEL_34;
  }
  if ( !v58 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v42 + 24) = 3137LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !v60 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v13);
    *(_QWORD *)(v43 + 24) = 3138LL;
    WdLogEvent5_WdAssertion(v43);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v53,
    v58,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v15) = 1;
  v16 = v54;
  v17 = (*(__int64 (__fastcall **)(__int64, __int64))(v60 + 48))(v54, v15);
  v14 = v17;
  if ( v17 < 0 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v41[3] = v16;
    v41[4] = v14;
    goto LABEL_46;
  }
  v19 = 0LL;
  if ( !a6 )
  {
LABEL_33:
    LODWORD(v14) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v20 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v21 = v20(a3, (unsigned int)v10, v19, &a5);
    v14 = v21;
    if ( v21 < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v41[3] = v19;
      v41[4] = v10;
      goto LABEL_45;
    }
    if ( a5 == -1 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v44 + 24) = 3192LL;
      WdLogEvent5_WdAssertion(v44);
    }
    v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 13))(a3, (unsigned int)v10);
    v14 = v23;
    if ( v23 < 0 )
    {
LABEL_40:
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v41[3] = v10;
      v41[4] = a5;
LABEL_45:
      v41[5] = a3;
      v41[6] = v14;
      goto LABEL_46;
    }
    v61 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v48[0] = 0;
    v58 = 0LL;
    v25 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v58,
            &v61);
    v14 = v25;
    if ( v25 < 0 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v41[3] = v14;
      goto LABEL_46;
    }
    if ( !v58 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v45 + 24) = 3237LL;
      WdLogEvent5_WdAssertion(v45);
    }
    if ( !v61 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v46 + 24) = 3238LL;
      WdLogEvent5_WdAssertion(v46);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v48,
      v58,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v27) = 1;
    v28 = v49;
    v29 = (*(__int64 (__fastcall **)(__int64, __int64))(v61 + 56))(v49, v27);
    v14 = v29;
    if ( v29 < 0 )
      break;
    if ( v48[0] )
      v50(v51, v28);
    LOBYTE(v31) = 1;
    v32 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v10,
            a5,
            v31);
    v14 = v32;
    if ( v32 < 0 )
      goto LABEL_40;
    LOBYTE(v33) = 1;
    v34 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v10,
            a5,
            v33);
    v14 = v34;
    if ( v34 < 0 )
      goto LABEL_40;
    if ( ++v19 >= a6 )
      goto LABEL_33;
    v8 = v59;
  }
  v47 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v47 + 24) = v14;
  WdLogEvent5_WdError(v47);
  if ( v48[0] )
    v50(v51, v28);
LABEL_34:
  if ( v53[0] )
    v55(v56, v54);
  return (unsigned int)v14;
}
