/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C0053F64
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C0053810 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00BAC34 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
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
  unsigned __int64 v12; // rdx
  VIDMM_LINEAR_POOL *v13; // r8
  unsigned __int64 v14; // r8
  char *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a8 )
  {
    if ( a8 >= (unsigned __int64)*a4 )
      goto LABEL_22;
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
      goto LABEL_22;
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
  v12 = 0LL;
  if ( a7 )
  {
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v12 = *a3 % a6;
    }
    else
    {
      this = 0LL;
    }
    if ( !v12 )
      goto LABEL_9;
    this = (VIDMM_LINEAR_POOL *)((char *)this - v12);
    v15 = (char *)this + *a3;
    if ( v15 < (char *)*a4 )
    {
      *a3 = (unsigned __int64)v15;
      goto LABEL_9;
    }
  }
  else
  {
    v13 = *a4;
    if ( a6 )
    {
      this = (VIDMM_LINEAR_POOL *)a6;
      v12 = ((unsigned __int64)v13 - a5) % a6;
    }
    v14 = (unsigned __int64)v13 - v12 - a5;
    if ( v14 >= *a3 )
    {
      *a3 = v14;
LABEL_9:
      if ( g_IsInternalReleaseOrDbg )
      {
        v20 = WdLogNewEntry5_WdTrace(this);
        *(_QWORD *)(v20 + 24) = *a3;
        *(_QWORD *)(v20 + 32) = *a4;
      }
      *a2 = 0;
      return;
    }
  }
LABEL_22:
  if ( g_IsInternalReleaseOrDbg )
    WdLogNewEntry5_WdTrace(this);
  *a2 = 1;
}
