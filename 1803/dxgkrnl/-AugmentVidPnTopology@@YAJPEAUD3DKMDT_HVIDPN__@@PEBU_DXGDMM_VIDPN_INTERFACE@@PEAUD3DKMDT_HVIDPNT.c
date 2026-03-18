/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C0190C38
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01926A4 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0190ED8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
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
  __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 v37; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v38; // [rsp+28h] [rbp-B0h]
  unsigned __int16 v39; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v40; // [rsp+50h] [rbp-88h] BYREF
  struct D3DKMDT_HVIDPN__ *v41; // [rsp+58h] [rbp-80h]
  unsigned int Src[16]; // [rsp+60h] [rbp-78h] BYREF

  v41 = a1;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 2959LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2960LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 2961LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 2962LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 2963LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 2964LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a7 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 2965LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 2966LL;
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
  v40 = 0LL;
  for ( i = 16LL; i; --i )
    *v23++ = -1;
  v25 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v38, v39, a8, &v40, Src);
  v27 = v25;
  if ( v25 >= 0 )
  {
    if ( !v40 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v30 + 24) = 3029LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v40);
    v35 = v31;
    if ( v31 >= 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v33, v32, v34);
      *(_QWORD *)(v37 + 24) = a7;
      *(_QWORD *)(v37 + 32) = v35;
      WdLogEvent5_WdWarning(v37);
    }
    else if ( !v40 )
    {
      v36 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v36 + 24) = 3044LL;
      WdLogEvent5_WdAssertion(v36);
    }
    *a9 = v40;
    if ( a10 )
      memmove(a10, Src, 0x40uLL);
    return 0LL;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
    v28[3] = v41;
    v28[4] = a7;
    v28[5] = a5;
    v28[6] = v27;
    WdLogEvent5_WdDmmEvent(v28);
    return (unsigned int)v27;
  }
}
