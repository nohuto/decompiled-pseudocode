/*
 * XREFs of IsHotKey @ 0x1C00FA3CC
 * Callers:
 *     IsUninterceptable @ 0x1C00F9DFC (IsUninterceptable.c)
 *     xxxDoHotKeyStuff @ 0x1C00F9E80 (xxxDoHotKeyStuff.c)
 *     EditionIsHotKey @ 0x1C01C6FA0 (EditionIsHotKey.c)
 * Callees:
 *     GetDesktopView @ 0x1C008E7D0 (GetDesktopView.c)
 */

struct tagHOTKEY * near *__fastcall IsHotKey(int a1, int a2)
{
  struct tagHOTKEY * near *i; // rbx
  struct tagHOTKEY *v4; // rsi
  __int64 v5; // rbp
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  for ( i = (&gphkHashTable)[a2 & 0x7F]; ; i = (struct tagHOTKEY * near *)i[5] )
  {
    if ( !i )
      return i;
    if ( *((unsigned __int16 *)i + 12) == a1 && *((_DWORD *)i + 7) == a2 && (*((_WORD *)i + 13) & 0x100) == 0 )
      break;
  }
  v4 = *i;
  if ( (*((_DWORD *)*i + 116) & 0xC) != 0 )
    return i;
  v5 = *((_QWORD *)v4 + 50);
  if ( GetDesktopView(v5, grpdeskRitInput) )
  {
    if ( ((_BYTE)i[3] & 0xB) == 0 )
    {
      if ( gpqForeground )
      {
        if ( (unsigned int)(a2 - 173) > 6 )
        {
          v6 = *(_QWORD *)(gpqForeground + 420LL);
          v7 = *(_QWORD *)(v5 + 832);
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v7 <= (unsigned int)v6 )
            {
              if ( (_DWORD)v7 != (_DWORD)v6
                || (v8 = HIDWORD(v7), v9 = HIDWORD(v6), (_DWORD)v8 != (_DWORD)v9)
                && (_DWORD)v8 != -1
                && (_DWORD)v9 != -1 )
              {
                EtwTraceUIPIInputError(v4, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 420LL), 7);
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
