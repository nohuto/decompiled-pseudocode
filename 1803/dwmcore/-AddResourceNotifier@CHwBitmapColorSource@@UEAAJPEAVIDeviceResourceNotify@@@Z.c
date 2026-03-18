/*
 * XREFs of ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800CE030
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800CC3EC (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::AddResourceNotifier(
        CHwBitmapColorSource *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // r10
  unsigned int v3; // eax
  unsigned int v4; // edx
  int v5; // ebx
  int v7; // eax
  struct IDeviceResourceNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v8 = a2;
    v3 = *(_DWORD *)(v2 + 96);
    v4 = v3 + 1;
    v5 = v3 + 1 < v3 ? 0x80070216 : 0;
    if ( v3 + 1 < v3 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( v4 > *(_DWORD *)(v2 + 92) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 72, 8u, 1, &v8);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 72) + 8LL * v3) = v8;
      *(_DWORD *)(v2 + 96) = v4;
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xFF5u);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0xFF9u);
  }
  return (unsigned int)v5;
}
