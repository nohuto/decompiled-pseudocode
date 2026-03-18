/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C018E6A0
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C018D9AC (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000C3D4 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v16; // rax
  unsigned int *v17; // r12
  __int64 v18; // rax
  __int64 (__fastcall *v19)(void *const, __int64 *, __int64 *); // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int *v25; // rdi
  __int64 (__fastcall *v26)(__int64, unsigned int *const *); // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  unsigned int *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r14
  __int64 (__fastcall *v40)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // r9
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // eax
  char v56[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v57; // [rsp+38h] [rbp-28h]
  void (__fastcall *v58)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v59; // [rsp+48h] [rbp-18h]
  int v60; // [rsp+50h] [rbp-10h]
  unsigned int v61; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v62; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v63; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 2593LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2594LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 2595LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 2596LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 2597LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 2598LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v62 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v63 = 0LL;
  v20 = v19(a2, &v62, &v63);
  v23 = v20;
  if ( v20 >= 0 )
  {
    v25 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v63 + 8);
    v59 = 0LL;
    v60 = 0;
    v56[0] = 0;
    v27 = v26(v62, &a6);
    v23 = v27;
    if ( v27 >= 0 )
    {
      v33 = a6;
      if ( !a6 )
      {
        v34 = WdLogNewEntry5_WdAssertion(v29, 0LL, v30, v31);
        *(_QWORD *)(v34 + 24) = 2641LL;
        WdLogEvent5_WdAssertion(v34);
        v33 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v56,
        (__int64)v33,
        *(_QWORD *)(v63 + 24),
        v62);
      v61 = -1;
      v25 = v57;
      if ( v57 )
      {
        while ( 1 )
        {
          v39 = *v25;
          v40 = *a4;
          a6 = 0LL;
          v41 = v40(a3, v39, &a6);
          v23 = v41;
          if ( v41 == -1071774919 )
          {
            if ( a6 )
            {
              v46 = WdLogNewEntry5_WdAssertion(v43, v42, v44, v45);
              *(_QWORD *)(v46 + 24) = 2666LL;
              WdLogEvent5_WdAssertion(v46);
            }
          }
          else if ( v41 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v47 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v63 + 16))(v62, v25, &a7);
          v23 = v47;
          if ( v47 < 0 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v49, v48);
            v32[3] = v25;
            v32[4] = v62;
LABEL_36:
            v32[5] = v23;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v56,
            (__int64)a7,
            *(_QWORD *)(v63 + 24),
            v62);
          v25 = v57;
          if ( !v57 )
            goto LABEL_27;
        }
        v50 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v39,
                1LL,
                &v61);
        v23 = v50;
        if ( v50 < 0 )
        {
LABEL_35:
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
          v32[3] = a3;
          v32[4] = v39;
          goto LABEL_36;
        }
        v52 = v61;
        if ( v61 == -1 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v43, v42, 0xFFFFFFFFLL, v51);
          *(_QWORD *)(v53 + 24) = 2698LL;
          WdLogEvent5_WdAssertion(v53);
          v52 = v61;
        }
        LOBYTE(v51) = a5;
        v54 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v39,
                v52,
                v51);
        v23 = v54;
        if ( v54 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
          v32[3] = v39;
          v32[4] = v61;
          v32[5] = a3;
          v32[6] = v23;
          goto LABEL_37;
        }
LABEL_27:
        if ( v61 == -1 )
          goto LABEL_38;
        *v15 = v61;
        LODWORD(v23) = 0;
        *v17 = v39;
      }
      else
      {
LABEL_38:
        LODWORD(v23) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v36, v35, v37, v38) + 24) = a3;
      }
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v32[3] = v62;
      v32[4] = v23;
LABEL_37:
      WdLogEvent5_WdError(v32);
    }
    if ( v56[0] )
      v58(v59, v25);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
  }
  return (unsigned int)v23;
}
