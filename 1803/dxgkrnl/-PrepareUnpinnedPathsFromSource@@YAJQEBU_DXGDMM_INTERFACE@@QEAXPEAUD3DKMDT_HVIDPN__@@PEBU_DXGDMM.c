/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01926A4
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C0194220 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C0190C38 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C01938B0 (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
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
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int *v26; // rdi
  __int64 (__fastcall *v27)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rbx
  _QWORD *v35; // rax
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rax
  int v43; // eax
  unsigned int *v44; // rdi
  __int64 i; // rcx
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rdi
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  struct D3DKMDT_HVIDPN__ *v59; // rsi
  int v60; // eax
  __int64 v61; // rcx
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
    v17 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v17 + 24) = 3919LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 3920LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a3 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 3921LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a4 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 3922LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a5 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v21 + 24) = 3923LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v22 + 24) = 3924LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( a7 == -1 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v23 + 24) = 3925LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !a11 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v24 + 24) = 3926LL;
    WdLogEvent5_WdAssertion(v24);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    v25 = 16LL;
    v26 = (unsigned int *)a12;
    while ( v25 )
    {
      *v26++ = -1;
      --v25;
    }
  }
  v27 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v63 = 0LL;
  v28 = 0;
  v29 = v27(a5, a7, &v63);
  v31 = v29;
  if ( v29 == -1071774919 )
  {
    if ( v63 )
    {
      v32 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v32 + 24) = 3957LL;
      WdLogEvent5_WdAssertion(v32);
    }
    v28 = 1;
    v33 = WdLogNewEntry5_WdDmmEvent(v30);
    v34 = a7;
    *(_QWORD *)(v33 + 24) = a5;
    *(_QWORD *)(v33 + 32) = a7;
  }
  else
  {
    if ( v29 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v35[3] = a7;
LABEL_27:
      v35[4] = a5;
      v35[5] = v31;
LABEL_28:
      WdLogEvent5_WdError(v35);
      return (unsigned int)v31;
    }
    v37 = 0LL;
    if ( v63 )
    {
      while ( 1 )
      {
        LODWORD(v64) = -1;
        v38 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))v13 + 1))(
                a5,
                a7,
                v37,
                &v64);
        v40 = v38;
        if ( v38 < 0 )
          break;
        v41 = (unsigned int)v64;
        if ( (_DWORD)v64 == -1 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v39);
          *(_QWORD *)(v42 + 24) = 4000LL;
          WdLogEvent5_WdAssertion(v42);
          v41 = (unsigned int)v64;
        }
        v62[0] = 0;
        v43 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v66 + 9))(a2, v41, v62);
        v40 = v43;
        if ( v43 < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdError(v30);
          v48[3] = a2;
          v48[4] = v40;
          goto LABEL_46;
        }
        if ( !v62[0] )
        {
          v28 = 1;
          v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
          v47[3] = a5;
          v47[4] = a7;
          v47[5] = (unsigned int)v64;
          WdLogEvent5_WdDmmEvent(v47);
          goto LABEL_36;
        }
        v13 = v65;
        if ( ++v37 >= v63 )
          goto LABEL_36;
      }
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v48[3] = v37;
      v48[4] = a7;
      v48[5] = v40;
LABEL_46:
      WdLogEvent5_WdError(v48);
      return (unsigned int)v40;
    }
LABEL_36:
    v33 = WdLogNewEntry5_WdDmmEvent(v30);
    v34 = a7;
    *(_QWORD *)(v33 + 24) = a7;
    *(_QWORD *)(v33 + 32) = a5;
  }
  WdLogEvent5_WdDmmEvent(v33);
  v44 = Src;
  for ( i = 16LL; i; --i )
    *v44++ = -1;
  if ( v28 )
  {
    if ( !a8 )
    {
      v46 = WdLogNewEntry5_WdDmmEvent(0LL);
      *(_QWORD *)(v46 + 24) = v34;
      *(_QWORD *)(v46 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v46);
      return 3223192403LL;
    }
    if ( v63 )
    {
      v49 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v65 + 7))(a5, a7);
      v31 = v49;
      if ( v49 < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v50);
        v35[3] = v34;
        goto LABEL_27;
      }
    }
    v64 = 0LL;
    v51 = AugmentVidPnTopology(v68, v67, a5, v65, a2, v66, a7, a10, &v64, (unsigned int (*)[16])Src);
    v31 = v51;
    if ( v51 == -1071774925 )
    {
      v53 = WdLogNewEntry5_WdDmmEvent(v52);
      *(_QWORD *)(v53 + 24) = a5;
      *(_QWORD *)(v53 + 32) = v34;
      WdLogEvent5_WdDmmEvent(v53);
      return (unsigned int)v31;
    }
    if ( v51 == -1071774886 )
    {
      v54 = WdLogNewEntry5_WdDmmEvent(v52);
      *(_QWORD *)(v54 + 24) = a5;
      *(_QWORD *)(v54 + 32) = v34;
      WdLogEvent5_WdDmmEvent(v54);
      return 3223192410LL;
    }
    if ( v51 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v52);
      v35[3] = v34;
      v35[4] = v31;
      goto LABEL_28;
    }
    v55 = v64;
    if ( !v64 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v52);
      *(_QWORD *)(v56 + 24) = 4113LL;
      WdLogEvent5_WdAssertion(v56);
    }
    v57 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v52);
    v57[3] = a2;
    v57[4] = v55;
    v57[5] = v34;
    v57[6] = v63;
    WdLogEvent5_WdDmmEvent(v57);
    v63 = v55;
  }
  else
  {
    v55 = v63;
  }
  if ( !v55 )
  {
    v58 = WdLogNewEntry5_WdAssertion(i);
    *(_QWORD *)(v58 + 24) = 4123LL;
    WdLogEvent5_WdAssertion(v58);
    v55 = v63;
  }
  if ( a9 )
  {
    v59 = v68;
    v60 = UnpinCofuncModalityOnPathsFromSource(v68, v67, a5, v65, a7, v55);
    v31 = v60;
    if ( v60 < 0 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdError(v61);
      v35[3] = v63;
      v35[4] = v34;
      v35[5] = v59;
      v35[6] = a2;
      v35[7] = v31;
      goto LABEL_28;
    }
    v55 = v63;
  }
  *v69 = v55;
  if ( a12 )
    memmove(a12, Src, 0x40uLL);
  if ( v70 )
    *v70 = v28;
  return 0LL;
}
