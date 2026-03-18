/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C029472C
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02950A0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     GreCreateDIBitmapReal @ 0x1C0047D58 (GreCreateDIBitmapReal.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00EC988 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00EC9CC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreIcmSetBrushBitmap(HDC a1, HBRUSH a2, struct tagBITMAPINFO *a3, void *a4)
{
  unsigned int v6; // ebx
  DC *v9; // rsi
  unsigned int v10; // edx
  BRUSH *v11; // rdi
  HBITMAP DIBitmapReal; // r8
  DC *v14[2]; // [rsp+70h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-28h] BYREF

  v6 = 0;
  v14[1] = 0LL;
  XDCOBJ::vLock(v14, a1);
  v9 = v14[0];
  if ( v14[0] )
  {
    if ( (*((_DWORD *)v14[0] + 28) & 1) != 0 )
    {
      BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v15, a2);
      v11 = (BRUSH *)v15[0];
      if ( v15[0] )
      {
        if ( (*(_DWORD *)(v15[0] + 48LL) & 0x80u) != 0 )
        {
          DIBitmapReal = (HBITMAP)GreCreateDIBitmapReal(
                                    a1,
                                    v10,
                                    a4,
                                    &a3->bmiHeader.biSize,
                                    0,
                                    0x428u,
                                    0x7FFFFFu,
                                    0LL,
                                    0,
                                    0LL,
                                    1u,
                                    0LL,
                                    0LL);
          if ( DIBitmapReal )
            v6 = BRUSH::bAddIcmDIB(v11, *(void **)(*((_QWORD *)v9 + 10) + 112LL), DIBitmapReal);
        }
      }
      BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v15);
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)v14);
    _InterlockedDecrement((volatile signed __int32 *)v14[0] + 3);
  }
  return v6;
}
