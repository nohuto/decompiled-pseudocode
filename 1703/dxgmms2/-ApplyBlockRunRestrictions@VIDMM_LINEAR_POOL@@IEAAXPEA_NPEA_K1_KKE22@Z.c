/*
 * XREFs of ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C004BD64
 * Callers:
 *     ?FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BLOCK@@2PEA_K3@Z @ 0x1C004B5A0 (-FindBlockRun@VIDMM_LINEAR_POOL@@IEAAJ_KKE00W4_VIDMM_BLOCK_RUN_CONSTRAINT@@PEAPEAU_VIDMM_POOL_BL.c)
 *     ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00A9944 (-GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z.c)
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
  _BYTE *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  char *v16; // rax
  bool v17; // zf
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !a8 )
    goto LABEL_2;
  if ( a8 < (unsigned __int64)*a4 )
  {
    if ( a8 > *a3 )
    {
      *a3 = a8;
      v12 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
      if ( !g_IsInternalReleaseOrDbg )
      {
LABEL_3:
        if ( a9 )
        {
          if ( (unsigned __int64)a9 <= *a3 )
            goto LABEL_23;
          if ( a9 < *a4 )
          {
            *a4 = a9;
            if ( *v12 )
            {
              WdLogNewEntry5_WdTrace(this);
              v12 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
              if ( g_IsInternalReleaseOrDbg )
              {
                v20 = WdLogNewEntry5_WdTrace(this);
                v12 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
                *(_QWORD *)(v20 + 24) = *a3;
                this = *a4;
                *(_QWORD *)(v20 + 32) = *a4;
              }
            }
          }
        }
        if ( a7 )
        {
          if ( !a6 || (v13 = *a3, this = (VIDMM_LINEAR_POOL *)a6, (v14 = *a3 % a6) == 0) )
          {
LABEL_9:
            if ( *v12 )
            {
              v21 = WdLogNewEntry5_WdTrace(this);
              *(_QWORD *)(v21 + 24) = *a3;
              *(_QWORD *)(v21 + 32) = *a4;
            }
            *a2 = 0;
            return;
          }
          this = (VIDMM_LINEAR_POOL *)(a6 - v14);
          v16 = (char *)this + v13;
          if ( (VIDMM_LINEAR_POOL *)((char *)this + v13) >= *a4 )
            goto LABEL_23;
LABEL_15:
          *a3 = (unsigned __int64)v16;
          goto LABEL_9;
        }
        this = (VIDMM_LINEAR_POOL *)a6;
        v15 = 0LL;
        if ( a6 )
          v15 = ((unsigned __int64)*a4 - a5) % a6;
        v16 = (char *)*a4 - v15 - a5;
        if ( (unsigned __int64)v16 >= *a3 )
          goto LABEL_15;
LABEL_23:
        v17 = *v12 == 0;
        goto LABEL_24;
      }
      WdLogNewEntry5_WdTrace(this);
      v19 = WdLogNewEntry5_WdTrace(v18);
      *(_QWORD *)(v19 + 24) = *a3;
      this = *a4;
      *(_QWORD *)(v19 + 32) = *a4;
    }
LABEL_2:
    v12 = *(_BYTE **)&g_IsInternalReleaseOrDbg;
    goto LABEL_3;
  }
  v17 = g_IsInternalReleaseOrDbg == 0;
LABEL_24:
  if ( !v17 )
    WdLogNewEntry5_WdTrace(this);
  *a2 = 1;
}
