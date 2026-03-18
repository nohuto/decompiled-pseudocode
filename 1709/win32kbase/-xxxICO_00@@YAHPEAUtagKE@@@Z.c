/*
 * XREFs of ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C0012150
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 */

__int64 __fastcall xxxICO_00(struct tagKE *a1)
{
  __int16 v2; // cx
  __int16 v4; // ax

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xE4 )
  {
    if ( v2 >= 0 )
    {
      xxxKeyEvent(
        (CAsyncKeyEventMonitor *)0x30,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (unsigned __int16 *)a1 + 8,
        0,
        0,
        0LL);
      xxxKeyEvent(
        (CAsyncKeyEventMonitor *)0x8030,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (unsigned __int16 *)a1 + 8,
        0,
        0,
        0LL);
      v4 = 304;
    }
    else
    {
      v4 = -32464;
    }
    *((_WORD *)a1 + 1) = v4;
  }
  return 1LL;
}
