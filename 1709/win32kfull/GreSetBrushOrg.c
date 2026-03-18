/*
 * XREFs of GreSetBrushOrg @ 0x1C007F6C8
 * Callers:
 *     NtGdiSetBrushOrg @ 0x1C007D4F0 (NtGdiSetBrushOrg.c)
 *     xxxPaintRect @ 0x1C007F5FC (xxxPaintRect.c)
 *     _DrawIconEx @ 0x1C009B010 (_DrawIconEx.c)
 *     MNEraseBackground @ 0x1C0216AA0 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  DC *v7; // rbx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  DC *v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+2Ch] [rbp-Ch]

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock(&v14, a1);
  v7 = v14;
  if ( v14 )
  {
    if ( a4 )
      *a4 = *((_QWORD *)v14 + 17);
    v8 = 1;
    *(_DWORD *)(*((_QWORD *)v7 + 10) + 380LL) = a2;
    *(_DWORD *)(*((_QWORD *)v7 + 10) + 384LL) = a3;
    v9 = *((_DWORD *)v7 + 10);
    *((_DWORD *)v7 + 34) = a2;
    *((_DWORD *)v7 + 35) = a3;
    v10 = v9 & 1;
    if ( v10 )
      v11 = *((_DWORD *)v7 + 360);
    else
      v11 = *((_DWORD *)v7 + 358);
    *((_DWORD *)v7 + 398) = a2 + v11;
    if ( v10 )
      v12 = *((_DWORD *)v7 + 361);
    else
      v12 = *((_DWORD *)v7 + 359);
    *((_DWORD *)v7 + 399) = a3 + v12;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  if ( v7 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
  return v8;
}
