/*
 * XREFs of ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@G@Z @ 0x1C0161F10
 * Callers:
 *     CitProcessCallout @ 0x1C003BA50 (CitProcessCallout.c)
 * Callees:
 *     <none>
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryGetOutstanding(struct _CIT_PROCESS *a1)
{
  struct _CIT_INTERACTION_SUMMARY *result; // rax
  __int16 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( (qword_1C01A1694 & 1) == 0 )
    return 0LL;
  if ( (qword_1C01A1694 & 2) != 0 )
  {
    v3 = *((_WORD *)a1 + 13);
    if ( !v3 )
      return 0LL;
    v4 = *((unsigned __int16 *)a1 + 12);
    if ( (unsigned int)v4 >= *((_DWORD *)qword_1C01A16B0 + 14) )
      return 0LL;
    v5 = *(_QWORD *)qword_1C01A16B0 + 96 * v4;
    if ( *(_WORD *)(v5 + 32) != v3 || *(_QWORD *)(v5 + 56) != *((_QWORD *)a1 + 6) )
      return 0LL;
    result = *(struct _CIT_INTERACTION_SUMMARY **)(v5 + 88);
  }
  else
  {
    result = (struct _CIT_INTERACTION_SUMMARY *)*((_QWORD *)a1 + 2);
  }
  if ( !result || *(struct _CIT_INTERACTION_SUMMARY **)result == result )
    return 0LL;
  *((_WORD *)result + 49) |= 0x10u;
  return result;
}
