/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C018D70C
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00A7D84 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C018D9AC (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 */

__int64 __fastcall AugmentVidPnTopology(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        void *a5,
        const struct _DXGDMM_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int64 *const a9,
        unsigned int (*a10)[16])
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int *v22; // rdi
  unsigned int *v23; // rdi
  __int64 i; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdi
  _QWORD *v31; // rax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v42; // [rsp+28h] [rbp-B0h]
  unsigned __int16 v43; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v44; // [rsp+50h] [rbp-88h] BYREF
  struct D3DKMDT_HVIDPN__ *v45; // [rsp+58h] [rbp-80h]
  unsigned int Src[16]; // [rsp+60h] [rbp-78h] BYREF

  v45 = a1;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 2999LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 3000LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 3001LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 3002LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 3003LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 3004LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a7 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 3005LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 3006LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    v21 = 16LL;
    v22 = (unsigned int *)a10;
    while ( v21 )
    {
      *v22++ = -1;
      --v21;
    }
  }
  v23 = Src;
  v44 = 0LL;
  for ( i = 16LL; i; --i )
    *v23++ = -1;
  v25 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v42, v43, a8, &v44, Src);
  v30 = v25;
  if ( v25 >= 0 )
  {
    if ( !v44 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      *(_QWORD *)(v33 + 24) = 3069LL;
      WdLogEvent5_WdAssertion(v33);
    }
    v34 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v44);
    v39 = v34;
    if ( v34 >= 0 )
    {
      v41 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
      *(_QWORD *)(v41 + 24) = a7;
      *(_QWORD *)(v41 + 32) = v39;
      WdLogEvent5_WdWarning(v41);
    }
    else if ( !v44 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
      *(_QWORD *)(v40 + 24) = 3084LL;
      WdLogEvent5_WdAssertion(v40);
    }
    *a9 = v44;
    if ( a10 )
      memmove(a10, Src, 0x40uLL);
    return 0LL;
  }
  else
  {
    v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v27, v26, v28, v29);
    v31[3] = v45;
    v31[4] = a7;
    v31[5] = a5;
    v31[6] = v30;
    WdLogEvent5_WdDmmEvent(v31);
    return (unsigned int)v30;
  }
}
