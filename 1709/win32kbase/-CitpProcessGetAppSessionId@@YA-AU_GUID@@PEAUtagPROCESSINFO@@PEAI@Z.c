/*
 * XREFs of ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0024920
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CitpProcessGetAppSessionId(
        struct _GUID *__return_ptr retstr,
        struct tagPROCESSINFO *a2,
        unsigned int *a3)
{
  LONGLONG TimeQuadPart; // rax
  __int64 v7; // rcx

  retstr->Data1 = *((_DWORD *)a2 + 14);
  retstr->Data2 = gSessionId;
  retstr->Data3 = *((_WORD *)qword_1C0193750 + 58);
  TimeQuadPart = PsGetProcessCreateTimeQuadPart(*(PEPROCESS *)a2);
  v7 = *(_QWORD *)a2;
  *(_QWORD *)retstr->Data4 = TimeQuadPart;
  *a3 = PsGetProcessSequenceNumber(v7);
  return retstr;
}
