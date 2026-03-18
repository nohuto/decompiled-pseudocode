/*
 * XREFs of DpiCorrectPowerAction @ 0x1C003A738
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C003A7D0 (DpiPdoDispatchPower.c)
 *     DpiFdoHandleSystemPower @ 0x1C01F0CCC (DpiFdoHandleSystemPower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01F8B44 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCorrectPowerAction(__int64 a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 v7; // rax

  v3 = a3;
  if ( a3 == 3 )
  {
    if ( a2 >= 2 )
    {
      if ( a2 <= 4 )
      {
        v3 = 2;
      }
      else if ( a2 != 5 )
      {
        goto LABEL_5;
      }
      v7 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v7 + 24) = a1;
      WdLogEvent5_WdEvent(v7);
      return v3;
    }
LABEL_5:
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = a1;
    WdLogEvent5_WdError(v5);
  }
  return v3;
}
