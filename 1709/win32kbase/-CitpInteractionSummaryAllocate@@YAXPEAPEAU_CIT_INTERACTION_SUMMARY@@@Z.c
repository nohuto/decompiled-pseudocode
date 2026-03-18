/*
 * XREFs of ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008E2E8
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     ?CitAllocZero@@YAPEAX_K@Z @ 0x1C008E368 (-CitAllocZero@@YAPEAX_K@Z.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0155048 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

void __fastcall CitpInteractionSummaryAllocate(struct _CIT_INTERACTION_SUMMARY **a1)
{
  __int16 v1; // bx
  __int64 v3; // rdi
  _QWORD *v4; // rax
  __int16 v5; // bx

  v1 = dword_1C0193748;
  v3 = (unsigned __int16)dword_1C0193748;
  v4 = CitAllocZero((unsigned __int16)dword_1C0193748);
  if ( v4 )
  {
    v4[1] = v4;
    *v4 = v4;
    v5 = (*((_WORD *)v4 + 40) ^ (4 * v1)) & 0x7FFC;
    *a1 = (struct _CIT_INTERACTION_SUMMARY *)v4;
    *((_WORD *)v4 + 40) ^= v5;
    v4[17] = v4 + 19;
    v4[18] = v3 - 152;
  }
  else
  {
    CitpLogFailureWorker(-1073741670, 0LL, 0xCE5u);
  }
}
