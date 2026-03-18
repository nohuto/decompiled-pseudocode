/*
 * XREFs of ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x180006704
 * Callers:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800064BC (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800C1068 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // r10
  __int64 v5; // r8

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  if ( a2 >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x193u);
  }
  else
  {
    v4 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v5 = a2 + 1;
        *(_QWORD *)(v4 + 8LL * a2++) = *(_QWORD *)(v4 + 8 * v5);
      }
      while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  return v3;
}
