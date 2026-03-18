/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x180049210
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1800D6200 (-GetDeviceInfo@CHwTextureRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180049D10 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        CHwTextureRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        struct _GUID *a4)
{
  __int64 (__fastcall *v8)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v10; // ebx
  struct CD3DDeviceLevel1 *v11; // rcx
  struct CD3DDeviceLevel1 *v13; // [rsp+50h] [rbp+8h] BYREF

  v8 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 208LL);
  if ( v8 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v13);
  else
    DeviceNoRef = v8(this, &v13);
  v10 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DeviceNoRef, 0x34Bu);
  }
  else
  {
    v11 = v13;
    *a2 = *(struct _LUID *)((char *)v13 + 712);
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)this + 29);
    if ( a4 )
      *a4 = *(struct _GUID *)((char *)v11 + 1128);
  }
  return v10;
}
