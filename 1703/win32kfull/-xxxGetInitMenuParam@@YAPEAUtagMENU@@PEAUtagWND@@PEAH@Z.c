/*
 * XREFs of ?xxxGetInitMenuParam@@YAPEAUtagMENU@@PEAUtagWND@@PEAH@Z @ 0x1C01EAA60
 * Callers:
 *     xxxMNStartMenu @ 0x1C01EB49C (xxxMNStartMenu.c)
 * Callees:
 *     <none>
 */

struct tagMENU *__fastcall xxxGetInitMenuParam(struct tagWND *a1, int *a2, __int64 a3, __int64 a4)
{
  char v4; // al
  __int64 v5; // rax

  v4 = *((_BYTE *)a1 + 71);
  if ( (v4 & 0x20) != 0 || (v4 & 0xC0) == 0x40 || (v5 = *((_QWORD *)a1 + 26)) == 0 || !*(_DWORD *)(v5 + 68) )
  {
    if ( a2 )
      *a2 = 1;
    return (struct tagMENU *)xxxGetSysMenu((__int64)a1, 0LL, a3, a4);
  }
  else
  {
    if ( a2 )
      *a2 = 0;
    return (struct tagMENU *)*((_QWORD *)a1 + 26);
  }
}
