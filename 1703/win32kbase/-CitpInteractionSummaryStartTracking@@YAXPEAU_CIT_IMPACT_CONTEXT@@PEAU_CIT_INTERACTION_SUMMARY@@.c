/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005380C
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00536A0 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  __int16 v2; // ax
  struct _CIT_IMPACT_CONTEXT **v5; // rcx

  v2 = *((_WORD *)a2 + 36);
  if ( (v2 & 2) != 0 )
  {
    memset((char *)a2 + 24, 0, 0x2CuLL);
    *((_DWORD *)a2 + 17) = 0;
    *((_WORD *)a2 + 37) = 0;
    *(_QWORD *)((char *)a2 + 76) = 0LL;
    *(_QWORD *)((char *)a2 + 84) = 0LL;
    *(_QWORD *)((char *)a2 + 92) = 0LL;
    memset(*((void **)a2 + 14), 0, *((_QWORD *)a2 + 15));
  }
  else
  {
    *((_WORD *)a2 + 36) = v2 | 2;
  }
  v5 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 121);
  if ( *v5 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 960) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 960;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)a1 + 121) = a2;
}
