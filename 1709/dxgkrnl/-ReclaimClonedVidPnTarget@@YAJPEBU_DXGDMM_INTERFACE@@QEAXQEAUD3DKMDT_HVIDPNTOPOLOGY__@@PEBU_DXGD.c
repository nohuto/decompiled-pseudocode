/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C01A2EE4
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C01A2120 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000A240 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
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
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int *v24; // rdi
  __int64 (__fastcall *v25)(__int64, unsigned int *const *); // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 (__fastcall *v34)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rax
  int v44; // eax
  char v46[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v47; // [rsp+38h] [rbp-28h]
  void (__fastcall *v48)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v49; // [rsp+48h] [rbp-18h]
  int v50; // [rsp+50h] [rbp-10h]
  unsigned int v51; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v52; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v53; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 2574LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 2575LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 2576LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2577LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 2578LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 2579LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v52 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v53 = 0LL;
  v20 = v19(a2, &v52, &v53);
  v22 = v20;
  if ( v20 >= 0 )
  {
    v24 = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v25 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v53 + 8);
    v49 = 0LL;
    v50 = 0;
    v46[0] = 0;
    v26 = v25(v52, &a6);
    v22 = v26;
    if ( v26 >= 0 )
    {
      v29 = a6;
      if ( !a6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v30 + 24) = 2622LL;
        WdLogEvent5_WdAssertion(v30);
        v29 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v46,
        (__int64)v29,
        *(_QWORD *)(v53 + 24),
        v52);
      v51 = -1;
      v24 = v47;
      if ( v47 )
      {
        while ( 1 )
        {
          v33 = *v24;
          v34 = *a4;
          a6 = 0LL;
          v35 = v34(a3, v33, &a6);
          v22 = v35;
          if ( v35 == -1071774919 )
          {
            if ( a6 )
            {
              v37 = WdLogNewEntry5_WdAssertion(v36);
              *(_QWORD *)(v37 + 24) = 2647LL;
              WdLogEvent5_WdAssertion(v37);
            }
          }
          else if ( v35 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v38 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v53 + 16))(v52, v24, &a7);
          v22 = v38;
          if ( v38 < 0 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v39);
            v28[3] = v24;
            v28[4] = v52;
LABEL_36:
            v28[5] = v22;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v46,
            (__int64)a7,
            *(_QWORD *)(v53 + 24),
            v52);
          v24 = v47;
          if ( !v47 )
            goto LABEL_27;
        }
        v40 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v33,
                1LL,
                &v51);
        v22 = v40;
        if ( v40 < 0 )
        {
LABEL_35:
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v36);
          v28[3] = a3;
          v28[4] = v33;
          goto LABEL_36;
        }
        v42 = v51;
        if ( v51 == -1 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v36);
          *(_QWORD *)(v43 + 24) = 2679LL;
          WdLogEvent5_WdAssertion(v43);
          v42 = v51;
        }
        LOBYTE(v41) = a5;
        v44 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v33,
                v42,
                v41);
        v22 = v44;
        if ( v44 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v28[3] = v33;
          v28[4] = v51;
          v28[5] = a3;
          v28[6] = v22;
          goto LABEL_37;
        }
LABEL_27:
        if ( v51 == -1 )
          goto LABEL_38;
        *v15 = v51;
        LODWORD(v22) = 0;
        *v17 = v33;
      }
      else
      {
LABEL_38:
        LODWORD(v22) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31) + 24) = a3;
      }
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v28[3] = v52;
      v28[4] = v22;
LABEL_37:
      WdLogEvent5_WdError(v28);
    }
    if ( v46[0] )
      v48(v49, v24);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v22;
    WdLogEvent5_WdError(v23);
  }
  return (unsigned int)v22;
}
