/*
 * XREFs of ??0CacheContextParameters@CHwBitmapColorSource@@QEAA@PEBUCContextState@@PEAVCMILBrushBitmap@@W4DXGI_FORMAT@@_NW4ColorSpace@@VDisplayId@@@Z @ 0x1800C0118
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwBitmapColorSource::CacheContextParameters::CacheContextParameters(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int a4,
        char a5,
        int a6,
        int a7)
{
  char v7; // al

  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_QWORD *)(a1 + 60) = 1065353216LL;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)a1 = a3;
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 200);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 180);
  *(_BYTE *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  *(_DWORD *)(a1 + 28) = a7;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 32) = a3[64];
  *(_DWORD *)(a1 + 36) = a3[28];
  *(_DWORD *)(a1 + 40) = a3[50];
  v7 = -(a3[64] & 2);
  if ( ((unsigned __int64)(a3 + 55) & -(__int64)((a3[64] & 2) != 0)) != 0 )
  {
    *(_OWORD *)(a1 + 48) = *(_OWORD *)((unsigned __int64)(a3 + 55) & -(__int64)((a3[64] & 2) != 0));
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(((unsigned __int64)(a3 + 55) & -(__int64)(v7 != 0)) + 0x10);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(((unsigned __int64)(a3 + 55) & -(__int64)(v7 != 0)) + 0x20);
    *(_BYTE *)(a1 + 44) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 44) = 0;
  }
  return a1;
}
