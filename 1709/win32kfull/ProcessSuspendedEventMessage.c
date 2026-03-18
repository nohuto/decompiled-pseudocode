/*
 * XREFs of ProcessSuspendedEventMessage @ 0x1C01164A0
 * Callers:
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     _ScheduleDispatchNotification @ 0x1C00A0450 (_ScheduleDispatchNotification.c)
 * Callees:
 *     ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1C0116584 (-FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z.c)
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C013FD4C (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedEventMessage(
        __int64 a1,
        int a2,
        HWND *a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned int v9; // r11d
  int v10; // r10d
  HWND v11; // rsi
  struct tagQMSG *v12; // rbx
  struct tagQMSG *QMsgForCoalesce; // rax
  unsigned int v14; // edx
  unsigned int v15; // r10d

  if ( a2 != 9 )
    return 1LL;
  v9 = 1;
  if ( a4 >= 0x400 )
    v10 = 1;
  else
    v10 = ((unsigned __int16)MessageTable[a4] >> 10) & 7;
  if ( !v10 )
    return 0LL;
  if ( v10 != 1 )
  {
    if ( a3 )
      v11 = *a3;
    else
      v11 = 0LL;
    v12 = 0LL;
    while ( 1 )
    {
      QMsgForCoalesce = FindQMsgForCoalesce((struct tagMLIST *)(*(_QWORD *)(a1 + 408) + 24LL), a4, v11, v12);
      v12 = QMsgForCoalesce;
      if ( !QMsgForCoalesce )
        break;
      if ( *((_DWORD *)QMsgForCoalesce + 24) == 9
        && *((_QWORD *)QMsgForCoalesce + 13) == a1
        && !(unsigned int)ProcessComplexCoalescence(
                            v15,
                            v14,
                            a5,
                            a6,
                            (unsigned __int64 *)QMsgForCoalesce + 4,
                            (__int64 *)QMsgForCoalesce + 5) )
      {
        return 0LL;
      }
    }
  }
  return v9;
}
