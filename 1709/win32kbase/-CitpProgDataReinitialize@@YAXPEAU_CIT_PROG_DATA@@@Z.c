/*
 * XREFs of ?CitpProgDataReinitialize@@YAXPEAU_CIT_PROG_DATA@@@Z @ 0x1C01557CC
 * Callers:
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01543D8 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C015521C (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C001C8C0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CitpProgDataReinitialize(struct _CIT_PROG_DATA *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 11, a2, a3);
  CitpProgramIdCleanup((struct _CIT_PROG_DATA *)((char *)a1 + 40), v4, v5);
  if ( (*((_WORD *)a1 + 16))++ == 0xFFFF )
    *((_WORD *)a1 + 16) = 1;
  *((_QWORD *)a1 + 3) = (char *)a1 + 16;
  *((_QWORD *)a1 + 2) = (char *)a1 + 16;
  *((_WORD *)a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  memset((char *)a1 + 40, 0, 0x28uLL);
  *((_DWORD *)a1 + 20) = 0;
  *((_DWORD *)a1 + 21) = 0;
}
