/*
 * XREFs of ?PrepareSysMemBufferAsSourcePixels@CBitmapOfDeviceBitmaps@@AEAAJXZ @ 0x1801E97C4
 * Callers:
 *     ?Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1801E95D0 (-Lock@CBitmapOfDeviceBitmaps@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::PrepareSysMemBufferAsSourcePixels(CBitmapOfDeviceBitmaps *this)
{
  unsigned __int8 PixelFormatSize; // al
  int v3; // ebx
  unsigned int v4; // ecx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  void **v7; // rsi
  LPVOID v8; // rax
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  bool IsEmpty; // al
  __int64 v14; // rdx
  int v15; // r9d
  unsigned int v17; // [rsp+20h] [rbp-18h]

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( (PixelFormatSize & 7) != 0 )
  {
    v3 = -2003292288;
    v17 = 1295;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v17);
    return (unsigned int)v3;
  }
  v4 = PixelFormatSize >> 3;
  v5 = v4 * (unsigned __int64)*((unsigned int *)this + 42);
  *((_DWORD *)this + 76) = v4;
  if ( v5 <= 0xFFFFFFFF )
  {
    v6 = (unsigned int)v5 * (unsigned __int64)*((unsigned int *)this + 43);
    *((_DWORD *)this + 75) = v5;
    if ( v6 <= 0xFFFFFFFF )
    {
      *((_DWORD *)this + 74) = v6;
      v7 = (void **)((char *)this + 288);
      v3 = 0;
      if ( this == (CBitmapOfDeviceBitmaps *)-288LL || !(_DWORD)v6 )
      {
        v3 = -2147024809;
      }
      else
      {
        v8 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v6);
        *v7 = v8;
        if ( !v8 )
          v3 = -2147024882;
      }
      if ( v3 < 0 )
      {
        v17 = 1313;
        goto LABEL_18;
      }
      memset_0(*v7, 0, *((unsigned int *)this + 74));
      v9 = *((unsigned int *)this + 84);
      if ( (_DWORD)v9 )
      {
        v10 = 96 * v9;
        do
        {
          v11 = *((_QWORD *)this + 39);
          v12 = v10 - 96;
          *(_DWORD *)(v12 + v11 + 68) = 0;
          *(_DWORD *)(v12 + v11 + 64) = 0;
          *(_DWORD *)(v12 + v11 + 60) = 0;
          *(_DWORD *)(v12 + v11 + 56) = 0;
          *(_DWORD *)(v12 + v11 + 84) = 0;
          *(_DWORD *)(v12 + v11 + 80) = 0;
          *(_DWORD *)(v12 + v11 + 76) = 0;
          *(_DWORD *)(v12 + v11 + 72) = 0;
          IsEmpty = TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(v12 + v11 + 24));
          *(_BYTE *)(v10 + v14 + 88) = !IsEmpty;
        }
        while ( v15 != 1 );
      }
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x51Du);
    }
  }
  else
  {
    v3 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x51Bu);
  }
  return (unsigned int)v3;
}
