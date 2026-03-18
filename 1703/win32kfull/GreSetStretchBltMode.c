/*
 * XREFs of GreSetStretchBltMode @ 0x1C00449E4
 * Callers:
 *     BltIcon @ 0x1C00447E0 (BltIcon.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall GreSetStretchBltMode(HDC a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  v8[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    v5 = *(_QWORD *)(v8[0] + 80LL);
    v3 = *(_DWORD *)(v5 + 100);
    *(_DWORD *)(v5 + 100) = a2;
    v6 = *(_QWORD *)(v4 + 80);
    if ( a2 > 4 )
      LOBYTE(a2) = 2;
    *(_BYTE *)(v6 + 75) = a2;
    XDCOBJ::RestoreAttributes((XDCOBJ *)v8);
    _InterlockedDecrement((volatile signed __int32 *)(v8[0] + 12LL));
  }
  return v3;
}
