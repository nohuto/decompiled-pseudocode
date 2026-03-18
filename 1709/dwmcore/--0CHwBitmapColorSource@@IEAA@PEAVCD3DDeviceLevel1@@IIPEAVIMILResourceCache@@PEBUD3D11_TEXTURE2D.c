/*
 * XREFs of ??0CHwBitmapColorSource@@IEAA@PEAVCD3DDeviceLevel1@@IIPEAVIMILResourceCache@@PEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x180085400
 * Callers:
 *     ??0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z @ 0x1800856EC (--0CHwDeviceBitmapColorSource@@AEAA@PEAVCD3DDeviceLevel1@@IIPEBUD3D11_TEXTURE2D_DESC@@I@Z.c)
 *     ?Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameters@1@_NPEAPEAV1@@Z @ 0x1801B4E58 (-Create@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIMILResourceCache@@AEBUCacheParameter.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

CHwBitmapColorSource *__fastcall CHwBitmapColorSource::CHwBitmapColorSource(
        CHwBitmapColorSource *this,
        struct CD3DDeviceLevel1 *a2,
        int a3,
        int a4,
        struct IMILResourceCache *a5,
        const struct D3D11_TEXTURE2D_DESC *a6)
{
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  UINT MiscFlags; // eax
  CHwBitmapColorSource *result; // rax

  *((_QWORD *)this + 2) = a2;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *(_QWORD *)this = &CHwBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 14) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 1;
  *((_DWORD *)this + 25) = 1;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 36) = a3;
  *((_DWORD *)this + 37) = a4;
  *((_DWORD *)this + 40) = DisplayId::None;
  *((_QWORD *)this + 27) = a5;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 73) = 1065353216;
  *((_DWORD *)this + 74) = 1065353216;
  *((_DWORD *)this + 75) = 1065353216;
  *((_QWORD *)this + 38) = 1065353216LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_DWORD *)this + 80) = 0;
  *((_BYTE *)this + 324) = 0;
  if ( a6 )
  {
    v7 = *(_OWORD *)&a6->Format;
    *((_OWORD *)this + 14) = *(_OWORD *)&a6->Width;
    v8 = *(_QWORD *)&a6->BindFlags;
    MiscFlags = a6->MiscFlags;
    *((_OWORD *)this + 15) = v7;
    *((_QWORD *)this + 32) = v8;
    *((_DWORD *)this + 66) = MiscFlags;
  }
  else
  {
    memset_0((char *)this + 224, 0, 0x2CuLL);
  }
  *((_QWORD *)this + 12) = 1LL;
  result = this;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  return result;
}
