/*
 * XREFs of HvlBugCheckCallbackRoutine @ 0x1401EA780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HvlBugCheckCallbackRoutine(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _OWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  if ( qword_14036A708 )
  {
    if ( (*((_DWORD *)qword_14036A708 + 1) & 1) != 0 )
    {
      ReasonSpecificData[1] = HvlCrashdumpGuid;
      *((_QWORD *)ReasonSpecificData + 4) = qword_14036A708;
      *((_DWORD *)ReasonSpecificData + 10) = dword_14036A718 << 12;
    }
  }
}
