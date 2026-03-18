/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0053810
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C00541C0 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0053F64 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v12; // r9
  _QWORD *v13; // rdi
  _QWORD *v14; // r14
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // r15
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r14
  _QWORD *v22; // rbp
  _QWORD *v23; // rdi
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r12
  __int64 v26; // rcx
  _QWORD *v28; // r13
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // r13
  int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  bool v38; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-44h]
  unsigned __int64 v40; // [rsp+58h] [rbp-40h]
  unsigned __int64 v41; // [rsp+60h] [rbp-38h] BYREF
  unsigned __int64 v42; // [rsp+68h] [rbp-30h] BYREF

  v12 = a1;
  v13 = *(_QWORD **)(a1 + 40);
  v14 = (_QWORD *)(a1 + 40);
  *a8 = 0LL;
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( v13 == (_QWORD *)(a1 + 40) )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(0LL);
    return 3223191808LL;
  }
  v15 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v39 = (a3 + 4095) & 0xFFFFF000;
  v40 = v15;
  if ( !a4 )
    v13 = *(_QWORD **)(a1 + 48);
  if ( v13 == v14 )
    return 3223191808LL;
  v16 = a7;
  while ( 1 )
  {
    v17 = *(v13 - 3);
    v18 = v13 - 3;
    v19 = (__int64)(v13 - 3);
    v20 = v17 + *(v13 - 2);
    v41 = v17;
    v42 = v20;
    if ( (_DWORD)v16 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        v30 = WdLogNewEntry5_WdTrace(v16);
        v16 = a7;
        v12 = a1;
        *(_QWORD *)(v30 + 24) = v18;
      }
      if ( a4 )
      {
        v13 = (_QWORD *)*v13;
        if ( v13 != v14 )
        {
          do
          {
            v31 = v13 - 3;
            if ( *(v13 - 3) != v20 )
              break;
            if ( (_DWORD)v16 != 2 && *((_BYTE *)v31 + 56) != 2 )
            {
              v32 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 32))(v31[2]);
              v16 = a7;
              v12 = a1;
              if ( !v32 )
                continue;
            }
            v20 += v31[1];
            v19 = (__int64)(v13 - 3);
            v42 = v20;
            v13 = (_QWORD *)*v13;
            if ( g_IsInternalReleaseOrDbg )
            {
              v33 = WdLogNewEntry5_WdTrace(v16);
              v16 = a7;
              v12 = a1;
              *(_QWORD *)(v33 + 24) = v31;
            }
          }
          while ( v13 != v14 );
          v15 = v40;
        }
      }
      else
      {
        v13 = (_QWORD *)v13[1];
        if ( v13 != v14 )
        {
          do
          {
            v28 = v13 - 3;
            if ( *(v13 - 2) + *(v13 - 3) != v17 )
              break;
            if ( (_DWORD)v16 == 2
              || *((_BYTE *)v28 + 56) == 2
              || (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v28[2]) )
            {
              v17 -= v28[1];
              v19 = (__int64)(v13 - 3);
            }
            v13 = (_QWORD *)v13[1];
            if ( g_IsInternalReleaseOrDbg )
              *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v28;
            v16 = a7;
            v12 = a1;
          }
          while ( v13 != v14 );
          v15 = v40;
          v41 = v17;
        }
        v29 = (__int64)v18;
        v18 = (_QWORD *)v19;
        v19 = v29;
      }
      goto LABEL_37;
    }
    v13 = (_QWORD *)(a4 ? *v13 : v13[1]);
    if ( *((_BYTE *)v18 + 56) == 2 )
      break;
    if ( g_IsInternalReleaseOrDbg )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v18;
      goto LABEL_16;
    }
LABEL_11:
    if ( v13 == v14 )
      return 3223191808LL;
  }
  if ( !g_IsInternalReleaseOrDbg )
    goto LABEL_14;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v18;
LABEL_37:
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
    v34[3] = v20 - v17;
    v34[4] = v18;
    v34[5] = v19;
    v35 = WdLogNewEntry5_WdTrace(v20 - v17);
    *(_QWORD *)(v35 + 24) = v17;
    *(_QWORD *)(v35 + 32) = v20;
  }
LABEL_14:
  if ( v20 - v17 >= v15 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v16);
    VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions((VIDMM_LINEAR_POOL *)v16, &v38, &v41, &v42, v15, v39, a4, a5, a6);
    if ( v38 )
      goto LABEL_16;
    v17 = v41;
    v20 = v42;
  }
  if ( v20 - v17 < v15 )
  {
LABEL_16:
    v16 = a7;
    v12 = a1;
    goto LABEL_11;
  }
  v21 = v17 + v15;
  if ( g_IsInternalReleaseOrDbg )
  {
    v36 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v36 + 24) = v17;
    *(_QWORD *)(v36 + 32) = v21;
  }
  v22 = *(_QWORD **)(v19 + 24);
  v23 = v18 + 3;
  if ( v18 + 3 == v22 )
  {
LABEL_27:
    if ( g_IsInternalReleaseOrDbg )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdTrace(v16);
      v37[3] = v18;
      v37[4] = v19;
      v37[5] = v17;
      v37[6] = v21;
    }
    goto LABEL_29;
  }
  while ( 2 )
  {
    v24 = *(v23 - 3);
    v25 = v23 - 3;
    v26 = *(v23 - 2);
    v23 = (_QWORD *)*v23;
    v16 = v24 + v26;
    if ( v16 <= v17 )
    {
      v18 = v23 - 3;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v25;
LABEL_26:
      if ( v23 == v22 )
        goto LABEL_27;
      continue;
    }
    break;
  }
  if ( v24 < v21 )
    goto LABEL_26;
  v19 = v25[4] - 24LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16) + 24) = v25;
    goto LABEL_27;
  }
LABEL_29:
  *a8 = v18;
  *a9 = v19;
  *a10 = v17;
  *a11 = v21;
  return 0LL;
}
