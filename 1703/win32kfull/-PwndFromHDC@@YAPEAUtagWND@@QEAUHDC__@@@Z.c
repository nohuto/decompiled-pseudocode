/*
 * XREFs of ?PwndFromHDC@@YAPEAUtagWND@@QEAUHDC__@@@Z @ 0x1C0048DE4
 * Callers:
 *     _WindowFromDC @ 0x1C0048E30 (_WindowFromDC.c)
 *     UserGetHwnd @ 0x1C01C2D20 (UserGetHwnd.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall PwndFromHDC(__int64 *a1)
{
  __int64 v1; // r9
  __int64 **i; // r8

  v1 = 0LL;
  for ( i = *(__int64 ***)(gpDispInfo + 16LL); i; i = (__int64 **)*i )
  {
    if ( i[1] == a1 )
    {
      if ( ((_DWORD)i[8] & 0x80C01000) == 0x1000 )
        return (struct tagWND *)i[2];
      return (struct tagWND *)v1;
    }
  }
  return (struct tagWND *)v1;
}
