/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x18001A40C
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9BAC (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9D04 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180140924 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
  }
  else
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4++;
        *(_QWORD *)(v6 + 8 * v7) = *(_QWORD *)(v6 + 8LL * v4);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  return v3;
}
