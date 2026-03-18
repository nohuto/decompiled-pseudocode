/*
 * XREFs of ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C002481C
 * Callers:
 *     CitBackgroundMouseInput @ 0x1C0018248 (CitBackgroundMouseInput.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00244A0 (-CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C008C5CC (-CitpSetViewEngagementInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0091950 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0155AC8 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessGetAppSessionId@@YA?AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z @ 0x1C0024920 (-CitpProcessGetAppSessionId@@YA-AU_GUID@@PEAUtagPROCESSINFO@@PEAI@Z.c)
 *     ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008B484 (-CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C008E2E8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z @ 0x1C015510C (-CitpProcessEnsureProgData@@YAPEAU_CIT_PROG_DATA@@PEAUtagPROCESSINFO@@@Z.c)
 */

struct _CIT_INTERACTION_SUMMARY *__fastcall CitpInteractionSummaryEnsure(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct tagPROCESSINFO **a2,
        __int64 a3)
{
  struct _CIT_INTERACTION_SUMMARY *v3; // rbx
  struct _CIT_PROG_DATA *v6; // rdi
  struct _CIT_INTERACTION_SUMMARY **v7; // r14
  char v8; // al
  struct _CIT_PROG_DATA *v10; // rax
  struct _GUID v11; // [rsp+20h] [rbp-28h] BYREF
  struct _CIT_INTERACTION_SUMMARY *v12; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( (dword_1C0193730 & 1) == 0 )
    return v3;
  v6 = 0LL;
  if ( (dword_1C0193730 & 2) == 0 )
  {
    v7 = a2 + 2;
    goto LABEL_4;
  }
  v10 = CitpProcessEnsureProgData(a2[1]);
  v6 = v10;
  if ( !v10 )
    return v3;
  v7 = (struct _CIT_INTERACTION_SUMMARY **)((char *)v10 + 88);
LABEL_4:
  v3 = *v7;
  if ( *v7 )
  {
    if ( ((*((unsigned __int16 *)v3 + 40) >> 2) & 0x1FFF) == dword_1C0193748 )
      goto LABEL_6;
    CitpInteractionSummaryDelete(v7, (__int64)a2, a3);
  }
  CitpInteractionSummaryAllocate(&v12);
  v3 = v12;
  if ( v12 )
  {
    if ( v6 )
    {
      *((_WORD *)v12 + 40) |= 1u;
      *((_QWORD *)v3 + 3) = v6;
    }
    else
    {
      *((_QWORD *)v12 + 3) = a2;
    }
    *v7 = v3;
LABEL_6:
    if ( v3 )
    {
      if ( *(struct _CIT_INTERACTION_SUMMARY **)v3 == v3 )
        CitpInteractionSummaryStartTracking(a1, v3);
      *((_QWORD *)v3 + 2) |= (unsigned __int64)*a2;
      *(struct _GUID *)((char *)v3 + 60) = *CitpProcessGetAppSessionId(&v11, a2[1], (unsigned int *)v3 + 19);
      v8 = *((_BYTE *)a2 + 91);
      if ( (v8 & 1) == 0 )
      {
        *((_BYTE *)a2 + 91) = v8 | 1;
        CitpStatIncrement((unsigned __int16 *)v3 + 41, 1);
      }
    }
    return v3;
  }
  return 0LL;
}
