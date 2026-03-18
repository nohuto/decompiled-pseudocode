/*
 * XREFs of PopBlackBoxBugcheckCallback @ 0x14022A3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopBlackBoxBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  ReasonSpecificData[1] = *(_OWORD *)Record[-1].Component;
  *((_DWORD *)ReasonSpecificData + 10) = Record[1].CallbackRoutine;
  if ( Record[1].CallbackRoutine )
    *((_QWORD *)ReasonSpecificData + 4) = Record[1].Entry.Blink;
  else
    *((_QWORD *)ReasonSpecificData + 4) = 0LL;
}
