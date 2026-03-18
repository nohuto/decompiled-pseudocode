/*
 * XREFs of ?CitpProgramIdCopy@@YAJPEAU_CIT_PROGRAM_ID@@PEBU1@@Z @ 0x1C0155838
 * Callers:
 *     ?CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z @ 0x1C015521C (-CitpProgDataEnsure@@YAPEAU_CIT_PROG_DATA@@PEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_PROGRAM_ID@@@Z.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C001C8C0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z @ 0x1C008495C (-CitpStringDuplicate@@YAJPEAPEAGPEBG_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitpProgramIdCopy(struct _CIT_PROGRAM_ID *a1, const struct _CIT_PROGRAM_ID *a2)
{
  const unsigned __int16 *v4; // rdx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  size_t v9; // rdi
  size_t v10; // r8
  const unsigned __int16 *v11; // rdx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  *((_OWORD *)a1 + 1) = *((_OWORD *)a2 + 1);
  *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  v4 = *(const unsigned __int16 **)a2;
  if ( v4 )
  {
    v9 = -1LL;
    v10 = -1LL;
    do
      ++v10;
    while ( v4[v10] );
    v5 = CitpStringDuplicate((unsigned __int16 **)a1, v4, v10);
    if ( v5 >= 0 )
    {
      v11 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
      if ( !v11 )
        return 0;
      do
        ++v9;
      while ( v11[v9] );
      v5 = CitpStringDuplicate((unsigned __int16 **)a1 + 1, v11, v9);
      if ( v5 >= 0 )
        return 0;
    }
  }
  else
  {
    v5 = -1073741637;
    CitpLogFailureWorker(3221225659LL, 0LL, 1848);
  }
  CitpProgramIdCleanup(a1, v6, v7);
  return (unsigned int)v5;
}
