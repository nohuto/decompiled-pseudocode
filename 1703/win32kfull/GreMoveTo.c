/*
 * XREFs of GreMoveTo @ 0x1C027E758
 * Callers:
 *     NtGdiMoveTo @ 0x1C028E500 (NtGdiMoveTo.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // ebx
  DC *v8; // r10
  DC *v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  v5 = 0;
  v10[1] = 0LL;
  XDCOBJ::vLock(v10, a1);
  v8 = v10[0];
  if ( !v10[0] )
    goto LABEL_13;
  if ( (*((_DWORD *)v10[0] + 9) & 0x10000) != 0 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)v10);
    _InterlockedDecrement((volatile signed __int32 *)v10[0] + 3);
LABEL_13:
    EngSetLastError(6u);
    return v5;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v10[0] + 10) + 8LL) & 0x100) != 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 1026);
      if ( !v11[0] )
      {
        XDCOBJ::RestoreAttributes((XDCOBJ *)v10);
        _InterlockedDecrement((volatile signed __int32 *)v10[0] + 3);
        return v5;
      }
      EXFORMOBJ::bXform(
        (EXFORMOBJ *)v11,
        (struct _POINTFIX *)(*((_QWORD *)v10[0] + 10) + 84LL),
        (struct _POINTL *)(*((_QWORD *)v10[0] + 10) + 76LL),
        1uLL);
      v8 = v10[0];
    }
    *a4 = *(_QWORD *)(*((_QWORD *)v8 + 10) + 76LL);
  }
  *(_DWORD *)(*((_QWORD *)v8 + 10) + 76LL) = a2;
  *(_DWORD *)(*((_QWORD *)v10[0] + 10) + 80LL) = a3;
  *(_DWORD *)(*((_QWORD *)v10[0] + 10) + 8LL) |= 0x200u;
  *(_DWORD *)(*((_QWORD *)v10[0] + 10) + 8LL) &= ~0x100u;
  if ( (*((_DWORD *)v10[0] + 44) & 1) == 0 )
    *((_DWORD *)v10[0] + 54) = 0;
  XDCOBJ::RestoreAttributes((XDCOBJ *)v10);
  v5 = 1;
  _InterlockedDecrement((volatile signed __int32 *)v10[0] + 3);
  return v5;
}
