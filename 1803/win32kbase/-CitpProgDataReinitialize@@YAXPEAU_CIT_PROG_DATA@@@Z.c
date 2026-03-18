/*
 * XREFs of ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C0163F7C
 * Callers:
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C016074C (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C016398C (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C006A178 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C006A1B4 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall CitpProgDataReinitialize(struct _CIT_PROG_DATA *a1)
{
  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 11);
  CitpProgramIdCleanup((struct _CIT_PROG_DATA *)((char *)a1 + 40));
  if ( (*((_WORD *)a1 + 16))++ == 0xFFFF )
    ++*((_WORD *)a1 + 16);
  *((_QWORD *)a1 + 3) = (char *)a1 + 16;
  *((_QWORD *)a1 + 2) = (char *)a1 + 16;
  *((_WORD *)a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  memset((char *)a1 + 40, 0, 0x28uLL);
  *((_DWORD *)a1 + 20) = 0;
  *((_DWORD *)a1 + 21) = 0;
}
