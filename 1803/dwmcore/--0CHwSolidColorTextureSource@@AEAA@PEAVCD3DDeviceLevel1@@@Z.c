/*
 * XREFs of ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801E9F04
 * Callers:
 *     ?Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1801EA02C (-Create@CHwSolidColorTextureSource@@SAJPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1801E7104 (-SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@.c)
 */

CHwSolidColorTextureSource *__fastcall CHwSolidColorTextureSource::CHwSolidColorTextureSource(
        CHwSolidColorTextureSource *this,
        struct CD3DDeviceLevel1 *a2)
{
  __int64 v2; // rcx
  int v3; // r10d
  int v4; // r11d
  CHwSolidColorTextureSource *result; // rax
  __int64 v6; // r9

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CHwSolidColorTextureSource::`vftable';
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_BYTE *)this + 120) = 0;
  CHwTexturedColorSource::SetFilterMode((__int64)this, 1, 0LL);
  *(_DWORD *)(v2 + 96) = v3;
  *(_DWORD *)(v2 + 28) = v4 + 3;
  result = (CHwSolidColorTextureSource *)v2;
  *(_DWORD *)(v2 + 32) = v4 + 3;
  *(_DWORD *)(v2 + 100) = v3;
  *(_QWORD *)(v2 + 44) = v6;
  *(_DWORD *)(v2 + 52) = v4;
  *(_QWORD *)(v2 + 56) = v6;
  *(_DWORD *)(v2 + 64) = v4;
  return result;
}
