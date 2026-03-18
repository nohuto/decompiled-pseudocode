/*
 * XREFs of ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180078190
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@WNI@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800DE010 (-GetDeviceInfo@CHwTextureRenderTarget@@WNI@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180078A70 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetDeviceInfo(
        CHwTextureRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  __int64 (__fastcall *v6)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  unsigned int v8; // ebx
  struct CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL);
  if ( v6 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v10);
  else
    DeviceNoRef = v6(this, &v10);
  v8 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceNoRef, 0x2E7u);
  }
  else
  {
    *a2 = *(struct _LUID *)((char *)v10 + 728);
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)this + 29);
  }
  return v8;
}
