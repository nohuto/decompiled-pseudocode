/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008B484
 * Callers:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C001B4FC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  __int16 v2; // ax
  struct _CIT_IMPACT_CONTEXT **v5; // rcx

  v2 = *((_WORD *)a2 + 40);
  if ( (v2 & 2) != 0 )
  {
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
    *(_QWORD *)((char *)a2 + 82) = 0LL;
    *(_DWORD *)((char *)a2 + 90) = 0;
    *((_QWORD *)a2 + 14) = 0LL;
    *((_QWORD *)a2 + 15) = 0LL;
    *((_QWORD *)a2 + 16) = 0LL;
    memset(*((void **)a2 + 17), 0, *((_QWORD *)a2 + 18));
    *((_DWORD *)a2 + 24) &= 0xFF000000;
    *((_DWORD *)a2 + 26) &= 0xFF000000;
  }
  else
  {
    *((_WORD *)a2 + 40) = v2 | 2;
  }
  if ( (*((_BYTE *)a2 + 80) & 1) == 0 )
    *((_QWORD *)a2 + 2) = **((_QWORD **)a2 + 3);
  v5 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 97);
  if ( *v5 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 768) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 768;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)a1 + 97) = a2;
}
