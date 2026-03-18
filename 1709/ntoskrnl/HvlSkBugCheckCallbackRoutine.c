/*
 * XREFs of HvlSkBugCheckCallbackRoutine @ 0x1401EFCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlSkBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_1403866A8 )
  {
    ReasonSpecificData[1] = HvlSkCrashdumpGuid;
    *((_QWORD *)ReasonSpecificData + 4) = qword_1403866A8;
    *((_DWORD *)ReasonSpecificData + 10) = dword_1403866B8 << 12;
  }
}
