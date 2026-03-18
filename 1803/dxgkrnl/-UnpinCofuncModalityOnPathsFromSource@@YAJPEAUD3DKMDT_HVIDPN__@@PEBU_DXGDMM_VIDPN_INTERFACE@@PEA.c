/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C01938B0
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01926A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C00087DC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 (__fastcall *v16)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 (__fastcall *v28)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // r9
  int v45; // eax
  __int64 v46; // rax
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
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v10 + 24) = 3087LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !v8 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v11 + 24) = 3088LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 3089LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 3090LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = a5;
  if ( a5 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 3091LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v60 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v53[0] = 0;
  v58 = 0LL;
  v17 = v16(a1, (unsigned int)v14, &v58, &v60);
  v19 = v17;
  if ( v17 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v20[3] = v14;
    v20[4] = a1;
    v20[5] = v19;
LABEL_40:
    WdLogEvent5_WdError(v20);
    goto LABEL_44;
  }
  if ( !v58 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v21 + 24) = 3116LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !v60 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v22 + 24) = 3117LL;
    WdLogEvent5_WdAssertion(v22);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v53,
    v58,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v23) = 1;
  v24 = v54;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64))(v60 + 48))(v54, v23);
  v19 = v25;
  if ( v25 < 0 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v26);
    v20[3] = v24;
    v20[4] = v19;
    goto LABEL_40;
  }
  v27 = 0LL;
  if ( !a6 )
  {
LABEL_43:
    LODWORD(v19) = 0;
    goto LABEL_44;
  }
  while ( 1 )
  {
    v28 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v29 = v28(a3, (unsigned int)v14, v27, &a5);
    v19 = v29;
    if ( v29 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v20[3] = v27;
      v20[4] = v14;
      goto LABEL_42;
    }
    if ( a5 == -1 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v31 + 24) = 3171LL;
      WdLogEvent5_WdAssertion(v31);
    }
    v32 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 13))(a3, (unsigned int)v14);
    v19 = v32;
    if ( v32 < 0 )
    {
LABEL_36:
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v20[3] = v14;
      v20[4] = a5;
LABEL_42:
      v20[5] = a3;
      v20[6] = v19;
      goto LABEL_40;
    }
    v61 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0;
    v48[0] = 0;
    v58 = 0LL;
    v34 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v58,
            &v61);
    v19 = v34;
    if ( v34 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v35);
      v20[3] = v19;
      goto LABEL_40;
    }
    if ( !v58 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v36 + 24) = 3216LL;
      WdLogEvent5_WdAssertion(v36);
    }
    if ( !v61 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v35);
      *(_QWORD *)(v37 + 24) = 3217LL;
      WdLogEvent5_WdAssertion(v37);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v48,
      v58,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v38) = 1;
    v39 = v49;
    v40 = (*(__int64 (__fastcall **)(__int64, __int64))(v61 + 56))(v49, v38);
    v19 = v40;
    if ( v40 < 0 )
      break;
    if ( v48[0] )
      v50(v51, v39);
    LOBYTE(v42) = 1;
    v43 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v14,
            a5,
            v42);
    v19 = v43;
    if ( v43 < 0 )
      goto LABEL_36;
    LOBYTE(v44) = 1;
    v45 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v14,
            a5,
            v44);
    v19 = v45;
    if ( v45 < 0 )
      goto LABEL_36;
    if ( ++v27 >= a6 )
      goto LABEL_43;
    v8 = v59;
  }
  v46 = WdLogNewEntry5_WdError(v41);
  *(_QWORD *)(v46 + 24) = v19;
  WdLogEvent5_WdError(v46);
  if ( v48[0] )
    v50(v51, v39);
LABEL_44:
  if ( v53[0] )
    v55(v56, v54);
  return (unsigned int)v19;
}
