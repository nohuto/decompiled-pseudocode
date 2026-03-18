/*
 * XREFs of ?AddResourceNotifier@CHwBitmapColorSource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180044CD0
 * Callers:
 *     ?SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSource@@@Z @ 0x1800B22E0 (-SetDeviceBitmapColorSource@CBitmapOfDeviceBitmaps@@QEAAJIVDisplayId@@PEAVCHwDeviceBitmapColorSo.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::AddResourceNotifier(
        CHwBitmapColorSource *this,
        struct IDeviceResourceNotify *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // ebx
  int v7; // eax
  struct IDeviceResourceNotify *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    v8 = a2;
    v3 = *(unsigned int *)(v2 + 104);
    v4 = v3 + 1;
    if ( (int)v3 + 1 >= (unsigned int)v3 )
      LODWORD(a2) = v3 + 1;
    v5 = v4 < (unsigned int)v3 ? 0x80070216 : 0;
    if ( v4 < (unsigned int)v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB5u);
    }
    else if ( (unsigned int)a2 > *(_DWORD *)(v2 + 100) )
    {
      v7 = DynArrayImpl<0>::AddMultipleAndSet(v2 + 80, 8LL, 1LL, &v8);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 80) + 8 * v3) = v8;
      *(_DWORD *)(v2 + 104) = (_DWORD)a2;
    }
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1006u);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x100Au);
  }
  return (unsigned int)v5;
}
