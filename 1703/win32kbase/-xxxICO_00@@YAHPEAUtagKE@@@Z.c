/*
 * XREFs of ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C004E3D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
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
        0x30u,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (__int64)a1 + 16,
        0,
        0,
        0LL);
      xxxKeyEvent(
        0x8030u,
        *(unsigned __int8 *)a1,
        *((_DWORD *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (__int64)a1 + 16,
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
