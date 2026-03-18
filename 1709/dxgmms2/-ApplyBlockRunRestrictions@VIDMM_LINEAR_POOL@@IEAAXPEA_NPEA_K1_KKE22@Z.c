/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C00501F0
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C004FA50 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00B2274 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(
        VIDMM_LINEAR_POOL *this,
        bool *a2,
        unsigned __int64 *a3,
        VIDMM_LINEAR_POOL **a4,
        unsigned __int64 a5,
        unsigned int a6,
        char a7,
        unsigned __int64 a8,
        VIDMM_LINEAR_POOL *a9)
{
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
      goto LABEL_21;
    if ( a8 > *a3 )
    {
      *a3 = a8;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v17 = WdLogNewEntry5_WdTrace(v16);
        *(_QWORD *)(v17 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v17 + 32) = *a4;
      }
    }
  }
  if ( a9 )
  {
    if ( (unsigned __int64)a9 <= *a3 )
      goto LABEL_21;
    if ( a9 < *a4 )
    {
      *a4 = a9;
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(this);
        v19 = WdLogNewEntry5_WdTrace(v18);
        *(_QWORD *)(v19 + 24) = *a3;
        this = *a4;
        *(_QWORD *)(v19 + 32) = *a4;
      }
    }
  }
  if ( !a7 )
  {
    this = (VIDMM_LINEAR_POOL *)a6;
    v14 = 0LL;
    if ( a6 )
      v14 = ((unsigned __int64)*a4 - a5) % a6;
    v15 = (char *)*a4 - v14 - a5;
    if ( (unsigned __int64)v15 < *a3 )
      goto LABEL_21;
LABEL_14:
    *a3 = (unsigned __int64)v15;
    goto LABEL_8;
  }
  if ( !a6 || (v12 = *a3, this = (VIDMM_LINEAR_POOL *)a6, (v13 = *a3 % a6) == 0) )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
    {
      v20 = WdLogNewEntry5_WdTrace(this);
      *(_QWORD *)(v20 + 24) = *a3;
      *(_QWORD *)(v20 + 32) = *a4;
    }
    *a2 = 0;
    return;
  }
  this = (VIDMM_LINEAR_POOL *)(a6 - v13);
  v15 = (char *)this + v12;
  if ( (VIDMM_LINEAR_POOL *)((char *)this + v12) < *a4 )
    goto LABEL_14;
LABEL_21:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  *a2 = 1;
}
