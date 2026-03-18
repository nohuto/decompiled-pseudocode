/*
 * XREFs of GreIntersectClipRect @ 0x1C0055340
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C00531E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00548A0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     HmgDecrementExclusiveReferenceCountEx @ 0x1C00555D0 (HmgDecrementExclusiveReferenceCountEx.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00557C8 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C007DFE8 (bCvtPts1.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(struct HOBJ__ *a1, LONG left, LONG a3, LONG right, LONG a5)
{
  DC *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  DC *v14; // [rsp+28h] [rbp-38h] BYREF
  int v15; // [rsp+30h] [rbp-30h]
  int v16; // [rsp+34h] [rbp-2Ch]
  __int64 v17; // [rsp+38h] [rbp-28h] BYREF
  int v18; // [rsp+40h] [rbp-20h]
  int v19; // [rsp+44h] [rbp-1Ch]
  struct _RECTL v20; // [rsp+48h] [rbp-18h] BYREF

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  v8 = v14;
  if ( !v14 )
  {
    EngSetLastError(6u);
    return 0;
  }
  v9 = *((_QWORD *)v14 + 10);
  v18 = *(_DWORD *)(v9 + 68);
  v19 = *(_DWORD *)(v9 + 312) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v17, &v14, 516, 0x80000000);
  v20.left = left;
  v20.top = a3;
  v10 = *(_DWORD *)(v17 + 32);
  v20.right = right;
  v20.bottom = a5;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0x43) != 0x43 )
    {
      bCvtPts1(v17, &v20, 2LL);
      right = v20.right;
      left = v20.left;
    }
    if ( v19 )
    {
      v20.left = left + 1;
      v20.right = right + 1;
    }
    ERECTL::vOrder((ERECTL *)&v20);
    v11 = DC::iCombine(v8, &v20, 1);
    goto LABEL_8;
  }
  if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
    && (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    v11 = DC::iCombine(v8, (struct EXFORMOBJ *)&v17, &v20, 1);
LABEL_8:
    v12 = v11;
    if ( v11 > 1 )
      v12 = 3;
    goto LABEL_10;
  }
  EngSetLastError(0x57u);
  v12 = 0;
LABEL_10:
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v14);
  HmgDecrementExclusiveReferenceCountEx(v14, v16);
  return v12;
}
