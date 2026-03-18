/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00A78A0
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00A7D84 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0003884 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 (__fastcall *v24)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r12
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // r9
  int v45; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _BYTE v59[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v60; // [rsp+38h] [rbp-41h]
  void (__fastcall *v61)(__int64, __int64); // [rsp+40h] [rbp-39h]
  __int64 v62; // [rsp+48h] [rbp-31h]
  int v63; // [rsp+50h] [rbp-29h]
  _BYTE v64[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v65; // [rsp+60h] [rbp-19h]
  void (__fastcall *v66)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v67; // [rsp+70h] [rbp-9h]
  int v68; // [rsp+78h] [rbp-1h]
  __int64 v69; // [rsp+D0h] [rbp+57h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v70; // [rsp+D8h] [rbp+5Fh]
  __int64 v71; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v72; // [rsp+E8h] [rbp+6Fh] BYREF

  v70 = a2;
  v8 = a2;
  if ( !a1 )
  {
    v47 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v47 + 24) = 3127LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !v8 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v48 + 24) = 3128LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !a3 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v49 + 24) = 3129LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( !a4 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v50 + 24) = 3130LL;
    WdLogEvent5_WdAssertion(v50);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    v51 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v51 + 24) = 3131LL;
    WdLogEvent5_WdAssertion(v51);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v71 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0;
  v64[0] = 0;
  v69 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v69, &v71);
  v17 = v12;
  if ( v12 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v52[3] = v10;
    v52[4] = a1;
    v52[5] = v17;
LABEL_46:
    WdLogEvent5_WdError(v52);
    goto LABEL_34;
  }
  if ( !v69 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v53 + 24) = 3156LL;
    WdLogEvent5_WdAssertion(v53);
  }
  if ( !v71 )
  {
    v54 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v54 + 24) = 3157LL;
    WdLogEvent5_WdAssertion(v54);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v64,
    v69,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v18) = 1;
  v19 = v65;
  v20 = (*(__int64 (__fastcall **)(__int64, __int64))(v71 + 48))(v65, v18);
  v17 = v20;
  if ( v20 < 0 )
  {
    v52 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v52[3] = v19;
    v52[4] = v17;
    goto LABEL_46;
  }
  v23 = 0LL;
  if ( !a6 )
  {
LABEL_33:
    LODWORD(v17) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v24 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v25 = v24(a3, (unsigned int)v10, v23, &a5);
    v17 = v25;
    if ( v25 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26);
      v52[3] = v23;
      v52[4] = v10;
      goto LABEL_45;
    }
    if ( a5 == -1 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v27, v26, 0xFFFFFFFFLL, v28);
      *(_QWORD *)(v55 + 24) = 3211LL;
      WdLogEvent5_WdAssertion(v55);
    }
    v29 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 13))(a3, (unsigned int)v10);
    v17 = v29;
    if ( v29 < 0 )
    {
LABEL_40:
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v52[3] = v10;
      v52[4] = a5;
LABEL_45:
      v52[5] = a3;
      v52[6] = v17;
      goto LABEL_46;
    }
    v72 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 0;
    v59[0] = 0;
    v69 = 0LL;
    v32 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v69,
            &v72);
    v17 = v32;
    if ( v32 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
      v52[3] = v17;
      goto LABEL_46;
    }
    if ( !v69 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v56 + 24) = 3256LL;
      WdLogEvent5_WdAssertion(v56);
    }
    if ( !v72 )
    {
      v57 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
      *(_QWORD *)(v57 + 24) = 3257LL;
      WdLogEvent5_WdAssertion(v57);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v59,
      v69,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v37) = 1;
    v38 = v60;
    v39 = (*(__int64 (__fastcall **)(__int64, __int64))(v72 + 56))(v60, v37);
    v17 = v39;
    if ( v39 < 0 )
      break;
    if ( v59[0] )
      v61(v62, v38);
    LOBYTE(v42) = 1;
    v43 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v10,
            a5,
            v42);
    v17 = v43;
    if ( v43 < 0 )
      goto LABEL_40;
    LOBYTE(v44) = 1;
    v45 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v10,
            a5,
            v44);
    v17 = v45;
    if ( v45 < 0 )
      goto LABEL_40;
    if ( ++v23 >= a6 )
      goto LABEL_33;
    v8 = v70;
  }
  v58 = WdLogNewEntry5_WdError(v41, v40);
  *(_QWORD *)(v58 + 24) = v17;
  WdLogEvent5_WdError(v58);
  if ( v59[0] )
    v61(v62, v38);
LABEL_34:
  if ( v64[0] )
    v66(v67, v65);
  return (unsigned int)v17;
}
