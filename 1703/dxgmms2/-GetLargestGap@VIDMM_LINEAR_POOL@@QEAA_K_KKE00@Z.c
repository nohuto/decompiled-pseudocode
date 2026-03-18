/*
 * XREFs of ?GetLargestGap@VIDMM_LINEAR_POOL@@QEAA_K_KKE00@Z @ 0x1C00A9944
 * Callers:
 *     ?GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z @ 0x1C00A1C3C (-GetLargestGap@VIDMM_SEGMENT@@QEAA_KPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@E@Z.c)
 * Callees:
 *     ?ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z @ 0x1C004BD64 (-ApplyBlockRunRestrictions@VIDMM_LINEAR_POOL@@IEAAXPEA_NPEA_K1_KKE22@Z.c)
 */

unsigned __int64 __fastcall VIDMM_LINEAR_POOL::GetLargestGap(
        VIDMM_LINEAR_POOL *this,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5,
        VIDMM_LINEAR_POOL *a6)
{
  char *v6; // r14
  char *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 *v13; // rsi
  unsigned __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-8h] BYREF
  bool v17; // [rsp+90h] [rbp+30h] BYREF

  v16 = 0LL;
  v6 = (char *)this + 40;
  v7 = (char *)*((_QWORD *)this + 5);
  v8 = 0LL;
  v9 = 0LL;
  while ( 1 )
  {
    v15 = v8;
    if ( v7 == v6 )
      break;
    v13 = (unsigned __int64 *)(v7 - 24);
    v7 = *(char **)v7;
    if ( *v13 != v8 )
    {
      VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, (VIDMM_LINEAR_POOL **)&v15, a2, a3, a4, a5, a6);
      if ( !v17 && v9 <= v15 - v16 )
        v9 = v15 - v16;
      v8 = *v13;
      v16 = *v13;
    }
    v8 += v13[1];
  }
  VIDMM_LINEAR_POOL::ApplyBlockRunRestrictions(this, &v17, &v16, (VIDMM_LINEAR_POOL **)&v15, a2, a3, a4, a5, a6);
  if ( !v17 && v9 <= v15 - v16 )
    return v15 - v16;
  return v9;
}
