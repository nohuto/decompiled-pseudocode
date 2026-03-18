/*
 * XREFs of GreIntersectClipRect @ 0x1C0040CC0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0026E90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0021740 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0040E3C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C00445F0 (bCvtPts1.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG a3, LONG right, LONG a5)
{
  unsigned int v6; // ebx
  DC *v9; // r15
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  DC *v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  int v16; // [rsp+38h] [rbp-28h]
  int v17; // [rsp+3Ch] [rbp-24h]
  struct _RECTL v18; // [rsp+40h] [rbp-20h] BYREF

  v6 = 0;
  v14[0] = 0LL;
  v14[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v14, a1);
  v9 = v14[0];
  if ( !v14[0] )
  {
    EngSetLastError(6u);
    return v6;
  }
  v10 = *((_QWORD *)v14[0] + 10);
  v16 = *(_DWORD *)(v10 + 68);
  v17 = *(_DWORD *)(v10 + 312) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v15, v14, 516, 0x80000000);
  v18.left = left;
  v18.top = a3;
  v11 = *(_DWORD *)(v15 + 32);
  v18.right = right;
  v18.bottom = a5;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0x43) != 0x43 )
    {
      bCvtPts1(v15, &v18, 2LL);
      right = v18.right;
      left = v18.left;
    }
    if ( v17 )
    {
      v18.left = left + 1;
      v18.right = right + 1;
    }
    ERECTL::vOrder((ERECTL *)&v18);
    v12 = DC::iCombine(v9, &v18, 1);
    goto LABEL_8;
  }
  if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
    && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v12 = DC::iCombine(v9, (struct EXFORMOBJ *)&v15, &v18, 1);
LABEL_8:
    v6 = v12;
    if ( v12 > 1 )
      v6 = 3;
    goto LABEL_10;
  }
  EngSetLastError(0x57u);
LABEL_10:
  XDCOBJ::RestoreAttributes((XDCOBJ *)v14);
  _InterlockedDecrement((volatile signed __int32 *)v14[0] + 3);
  return v6;
}
