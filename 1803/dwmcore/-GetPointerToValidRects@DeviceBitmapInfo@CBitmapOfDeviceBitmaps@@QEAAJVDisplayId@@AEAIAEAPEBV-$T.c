/*
 * XREFs of ?GetPointerToValidRects@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E9080
 * Callers:
 *     ?GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E9124 (-GetPointerToValidRectsForSurface@CBitmapOfDeviceBitmaps@@QEAAJPEAXVDisplayId@@AEAIAEAPEBV-$TMil.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ @ 0x1801E8D3C (-EnsureRgnData@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJXZ.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::DeviceBitmapInfo::GetPointerToValidRects(
        CBitmapOfDeviceBitmaps::DeviceBitmapInfo *this,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  unsigned int *v10; // r8
  _QWORD *v11; // r9
  int v12; // eax

  v7 = 0;
  if ( !DisplayId::IsSpecific((CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)((char *)this + 4)) || *v9 == (_DWORD)v8 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v12 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::EnsureRgnData(this, v8, v10);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x879u);
      }
      else
      {
        *a4 = *((_QWORD *)this + 6) + 32LL;
        *a3 = *(_DWORD *)(*((_QWORD *)this + 6) + 8LL);
      }
    }
    else
    {
      *v11 = (char *)this + 24;
      *v10 = 1;
    }
  }
  else
  {
    *v10 = 0;
    *v11 = 0LL;
  }
  return v7;
}
