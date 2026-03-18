/*
 * XREFs of ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0290E4C
 * Callers:
 *     NtGdiIcmBrushInfo @ 0x1C02917E0 (NtGdiIcmBrushInfo.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002C1E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreCreateDIBitmapReal @ 0x1C009A300 (GreCreateDIBitmapReal.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00F98A8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00F98EC (--1BRUSHSELOBJ@@QEAA@XZ.c)
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
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  }
  return v6;
}
