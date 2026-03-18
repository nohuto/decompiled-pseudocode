/*
 * XREFs of IsHotKey @ 0x1C00EFEC0
 * Callers:
 *     IsUninterceptable @ 0x1C00EF944 (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00EF9D0 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01C4C40 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C001B650 (GetDesktopView.c)
 */

__int64 *__fastcall IsHotKey(int a1, int a2)
{
  __int64 *i; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax

  for ( i = (__int64 *)*((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + (a2 & 0x7F)); ; i = (__int64 *)i[5] )
  {
    if ( !i )
      return i;
    if ( *((unsigned __int16 *)i + 12) == a1 && *((_DWORD *)i + 7) == a2 )
      break;
  }
  v4 = *i;
  if ( (*(_DWORD *)(*i + 440) & 0xC) != 0 )
    return i;
  v5 = *(_QWORD *)(v4 + 376);
  if ( GetDesktopView(v5, grpdeskRitInput) )
  {
    if ( (i[3] & 0xB) == 0 )
    {
      if ( gpqForeground )
      {
        if ( (unsigned int)(a2 - 173) > 6 )
        {
          v6 = *(_QWORD *)(gpqForeground + 380LL);
          v7 = *(_QWORD *)(v5 + 824);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v7 <= (unsigned int)v6 )
            {
              if ( (_DWORD)v7 != (_DWORD)v6
                || (v9 = HIDWORD(v7), v10 = HIDWORD(v6), (_DWORD)v9 != (_DWORD)v10)
                && (_DWORD)v9 != -1
                && (_DWORD)v10 != -1 )
              {
                EtwTraceUIPIInputError(v4, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 7);
                return 0LL;
              }
            }
          }
        }
      }
    }
    return i;
  }
  return 0LL;
}
