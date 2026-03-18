/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00536A0
 * Callers:
 *     CitSetInfo @ 0x1C0004C60 (CitSetInfo.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052944 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0052034 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C005379C (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C005380C (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0053EB8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C0154654 (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2)
{
  struct _CIT_INTERACTION_SUMMARY *v2; // rbx
  struct _CIT_PROG_DATA *v5; // rdi
  struct tagPROCESSINFO **v6; // r14
  char v7; // al
  struct _CIT_PROG_DATA *v9; // rax
  struct _GUID v10; // [rsp+20h] [rbp-28h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  if ( (qword_1C018E8A0 & 1) == 0 )
    return v2;
  v5 = 0LL;
  if ( (qword_1C018E8A0 & 2) == 0 )
  {
    v6 = a2;
    goto LABEL_4;
  }
  v9 = CitpProcessEnsureProgData(*a2);
  v5 = v9;
  if ( !v9 )
    return v2;
  v6 = (struct tagPROCESSINFO **)v9;
LABEL_4:
  v2 = v6[10];
  if ( v2 )
  {
    if ( ((*((unsigned __int16 *)v2 + 36) >> 2) & 0x1FFF) == *(_DWORD *)((char *)&qword_1C018E8BA + 6) )
      goto LABEL_6;
    CitpInteractionSummaryDelete(v6 + 10);
  }
  CitpInteractionSummaryAllocate(&v11);
  v2 = v11;
  if ( v11 )
  {
    if ( v5 )
    {
      *((_WORD *)v11 + 36) |= 1u;
      *((_QWORD *)v2 + 2) = v5;
    }
    else
    {
      *((_QWORD *)v11 + 2) = a2;
    }
    v6[10] = v2;
LABEL_6:
    if ( v2 )
    {
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v2 == v2 )
        CitpInteractionSummaryStartTracking(a1, v2);
      *(struct _GUID *)((char *)v2 + 52) = *CitpProcessGetAppSessionId(&v10, *a2, (unsigned int *)v2 + 17);
      v7 = *((_BYTE *)a2 + 75);
      if ( (v7 & 1) == 0 )
      {
        *((_BYTE *)a2 + 75) = v7 | 1;
        CitpStatIncrement((unsigned __int16 *)v2 + 37, 1);
      }
    }
    return v2;
  }
  return 0LL;
}
