/*
 * XREFs of CitSetInfo @ 0x1C00242D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C00244A0 (-CitpSetCompositionInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C008C5CC (-CitpSetViewEngagementInfo@@YA_KPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0091950 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0155A4C (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0155AC8 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 */

unsigned __int64 __fastcall CitSetInfo(__int64 a1, union _CIT_SI_INFO *a2)
{
  unsigned __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  union _CIT_SI_INFO *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v3 = a1;
  if ( !qword_1C0193750 )
    return -1073741641LL;
  if ( (unsigned __int8)a1 == 2LL )
    return CitpSetCompositionInfo((union _CIT_SI_INFOFLAGS *)&v3, (union _CIT_SI_INFO *)&v4);
  if ( (unsigned __int64)(unsigned __int8)a1 - 3 <= 1 )
  {
    LODWORD(result) = CitpSetAudioInfo((union _CIT_SI_INFOFLAGS *)&v3, a2);
    return (int)result;
  }
  if ( (unsigned __int8)a1 == 5LL )
    return CitpSetViewEngagementInfo((union _CIT_SI_INFOFLAGS *)5, (union _CIT_SI_INFO *)&v4);
  if ( (unsigned __int8)a1 == 1LL )
  {
    if ( (_WORD)a2 == 64 )
      LODWORD(result) = CitpSetSpeechRecognitionInfo((union _CIT_SI_INFOFLAGS *)&v3, (union _CIT_SI_INFO *)&v4);
    else
      LODWORD(result) = CitpSetOtherInputInfo((union _CIT_SI_INFOFLAGS *)1, (union _CIT_SI_INFO *)&v4);
    return (int)result;
  }
  return -1073741821LL;
}
