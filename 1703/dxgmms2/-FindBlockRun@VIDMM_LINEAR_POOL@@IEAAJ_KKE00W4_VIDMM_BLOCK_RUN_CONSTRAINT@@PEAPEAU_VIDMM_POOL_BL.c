/*
 * XREFs of ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C004B5A0
 * Callers:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C004BFC8 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C004BD64 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::FindBlockRun(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 *a9,
        unsigned __int64 *a10,
        unsigned __int64 *a11)
{
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rbx
  __int64 v18; // r15
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // r14
  _QWORD *v21; // rbp
  _QWORD *v22; // rdi
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r12
  __int64 v25; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  bool v36; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v37; // [rsp+54h] [rbp-54h]
  unsigned __int64 v38; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v39; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+68h] [rbp-40h]
  _QWORD *v41; // [rsp+70h] [rbp-38h]

  v12 = a1;
  v13 = 0LL;
  *a8 = 0LL;
  v14 = (_QWORD *)(v12 + 40);
  *a9 = 0LL;
  *a10 = 0LL;
  *a11 = 0LL;
  if ( (_QWORD *)*v14 == v14 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(0LL);
    return 3223191808LL;
  }
  v40 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v37 = (a3 + 4095) & 0xFFFFF000;
  if ( a4 )
    v15 = (_QWORD *)*v14;
  else
    v15 = *(_QWORD **)(v12 + 48);
  if ( v15 == v14 )
    return 3223191808LL;
  while ( 1 )
  {
    v16 = *(v15 - 3);
    v17 = v15 - 3;
    v18 = (__int64)(v15 - 3);
    v19 = v16 + *(v15 - 2);
    v38 = v16;
    v39 = v19;
    if ( a7 )
      break;
    if ( a4 )
      v15 = (_QWORD *)*v15;
    else
      v15 = (_QWORD *)v15[1];
    if ( *((_BYTE *)v17 + 56) == 2 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v17;
        goto LABEL_36;
      }
      goto LABEL_13;
    }
    if ( !g_IsInternalReleaseOrDbg )
      goto LABEL_10;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v17;
LABEL_15:
    v12 = a1;
LABEL_10:
    if ( v15 == v14 )
      return 3223191808LL;
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v29 = WdLogNewEntry5_WdTrace(v13);
    v12 = a1;
    *(_QWORD *)(v29 + 24) = v17;
  }
  if ( a4 )
  {
    v15 = (_QWORD *)*v15;
    if ( v15 == v14 )
      goto LABEL_36;
    while ( 1 )
    {
      v13 = v15 - 3;
      v41 = v15 - 3;
      if ( *(v15 - 3) != v19 )
        goto LABEL_36;
      if ( a7 == 2 || *((_BYTE *)v13 + 56) == 2 )
        goto LABEL_56;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v13[2]) )
        break;
LABEL_44:
      v15 = (_QWORD *)*v15;
      if ( g_IsInternalReleaseOrDbg )
      {
        v30 = WdLogNewEntry5_WdTrace(v13);
        v13 = v41;
        *(_QWORD *)(v30 + 24) = v41;
      }
      v12 = a1;
      if ( v15 == v14 )
        goto LABEL_36;
    }
    v13 = v41;
LABEL_56:
    v19 += v13[1];
    v18 = (__int64)v13;
    v39 = v19;
    goto LABEL_44;
  }
  v15 = (_QWORD *)v15[1];
  if ( v15 == v14 )
    goto LABEL_35;
  do
  {
    v13 = v15 - 3;
    v27 = *(v15 - 3) + *(v15 - 2);
    v41 = v15 - 3;
    if ( v27 != v16 )
      break;
    if ( a7 == 2 || *((_BYTE *)v13 + 56) == 2 )
      goto LABEL_58;
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v12 + 32))(v13[2]) )
    {
      v13 = v41;
LABEL_58:
      v16 -= v13[1];
      v18 = (__int64)v13;
    }
    v15 = (_QWORD *)v15[1];
    if ( g_IsInternalReleaseOrDbg )
    {
      v31 = WdLogNewEntry5_WdTrace(v13);
      v13 = v41;
      *(_QWORD *)(v31 + 24) = v41;
    }
    v12 = a1;
  }
  while ( v15 != v14 );
  v38 = v16;
LABEL_35:
  v28 = (__int64)v17;
  v17 = (_QWORD *)v18;
  v18 = v28;
LABEL_36:
  if ( g_IsInternalReleaseOrDbg )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
    v32[3] = v19 - v16;
    v32[4] = v17;
    v32[5] = v18;
    v33 = WdLogNewEntry5_WdTrace(v19 - v16);
    *(_QWORD *)(v33 + 24) = v16;
    *(_QWORD *)(v33 + 32) = v19;
  }
LABEL_13:
  if ( v19 - v16 >= v40 )
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v13);
    VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions((VIDMM_LINEAR_POOL *)v13, &v36, &v38, &v39, v40, v37, a4, a5, a6);
    if ( !v36 )
    {
      v16 = v38;
      v19 = v39;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_14:
  if ( v19 - v16 < v40 )
    goto LABEL_15;
  v20 = v16 + v40;
  if ( g_IsInternalReleaseOrDbg )
  {
    v34 = WdLogNewEntry5_WdTrace(v13);
    *(_QWORD *)(v34 + 24) = v16;
    *(_QWORD *)(v34 + 32) = v20;
  }
  v21 = *(_QWORD **)(v18 + 24);
  v22 = v17 + 3;
  if ( v17 + 3 == v21 )
  {
LABEL_26:
    if ( g_IsInternalReleaseOrDbg )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v13);
      v35[3] = v17;
      v35[4] = v18;
      v35[5] = v16;
      v35[6] = v20;
    }
    goto LABEL_28;
  }
  while ( 2 )
  {
    v23 = *(v22 - 3);
    v24 = v22 - 3;
    v25 = *(v22 - 2);
    v22 = (_QWORD *)*v22;
    v13 = (_QWORD *)(v23 + v25);
    if ( (unsigned __int64)v13 <= v16 )
    {
      v17 = v22 - 3;
      if ( g_IsInternalReleaseOrDbg )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v24;
LABEL_25:
      if ( v22 == v21 )
        goto LABEL_26;
      continue;
    }
    break;
  }
  if ( v23 < v20 )
    goto LABEL_25;
  v18 = v24[4] - 24LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13) + 24) = v24;
    goto LABEL_26;
  }
LABEL_28:
  *a8 = v17;
  *a9 = v18;
  *a10 = v16;
  *a11 = v20;
  return 0LL;
}
