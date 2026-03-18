/*
 * XREFs of HvlAddPagesCallbackRoutine @ 0x14022C6F0
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetPageList @ 0x14022EC2C (HvlpGetPageList.c)
 *     HvlpStartPageListIteration @ 0x14022EF18 (HvlpStartPageListIteration.c)
 */

void __fastcall HvlAddPagesCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  int PageList; // eax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  ReasonSpecificData[3] = 0LL;
  *((_DWORD *)ReasonSpecificData + 2) = 0;
  if ( qword_1403C9BC8 && (*((_DWORD *)qword_1403C9BC8 + 1) & 1) != 0 && HvlpFallbackScratchPage )
  {
    if ( !*ReasonSpecificData )
    {
      *ReasonSpecificData = &HvlpCrashdumpIterationState;
      HvlpCrashdumpIterationState = 1;
      HvlpStartPageListIteration(1LL);
    }
    PageList = HvlpGetPageList(1LL, v6, &v7);
    if ( v7 )
    {
      ReasonSpecificData[3] = v7;
      ReasonSpecificData[2] = v6[0];
      *((_DWORD *)ReasonSpecificData + 2) = 2;
    }
    if ( PageList == 261 )
    {
      *((_DWORD *)ReasonSpecificData + 2) |= 0x80000000;
    }
    else
    {
      qword_1403C9AE8 = 0LL;
      HvlpIteratorCrashdump = 0;
      HvlpCrashdumpIterationState = 0;
      *ReasonSpecificData = 0LL;
    }
  }
}
