/*
 * XREFs of GreSetBrushOrg @ 0x1C0029144
 * Callers:
 *     NtGdiSetBrushOrg @ 0x1C0028940 (NtGdiSetBrushOrg.c)
 *     xxxPaintRect @ 0x1C0029078 (xxxPaintRect.c)
 *     _DrawIconEx @ 0x1C0044444 (_DrawIconEx.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     MNEraseBackground @ 0x1C0215B44 (MNEraseBackground.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreSetBrushOrg(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+2Ch] [rbp-Ch]

  v14 = 0LL;
  v15 = 0;
  v16 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v14, a1);
  v7 = v14;
  if ( v14 )
  {
    if ( a4 )
      *a4 = *(_QWORD *)(v14 + 136);
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 380LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v7 + 80) + 384LL) = a3;
    v9 = *(_DWORD *)(v7 + 40);
    *(_DWORD *)(v7 + 136) = a2;
    *(_DWORD *)(v7 + 140) = a3;
    v10 = v9 & 1;
    if ( v10 )
      v11 = *(_DWORD *)(v7 + 1440);
    else
      v11 = *(_DWORD *)(v7 + 1432);
    *(_DWORD *)(v7 + 1592) = a2 + v11;
    if ( v10 )
      v12 = *(_DWORD *)(v7 + 1444);
    else
      v12 = *(_DWORD *)(v7 + 1436);
    *(_DWORD *)(v7 + 1596) = a3 + v12;
  }
  else
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v14);
  return v8;
}
