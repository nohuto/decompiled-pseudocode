/*
 * XREFs of ?GetDeviceInfo@CHwSurfaceRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008F6C4
 * Callers:
 *     ?GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008F9B0 (-GetDeviceInfo@CHwTextureRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008F880 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::GetDeviceInfo(
        CHwSurfaceRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  __int64 (__fastcall *v6)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **); // rax
  signed int DeviceNoRef; // eax
  unsigned int v8; // ebx
  struct CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(__int64 (__fastcall **)(CHwSurfaceRenderTarget *__hidden, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL);
  if ( v6 == CHwSurfaceRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwSurfaceRenderTarget::GetDeviceNoRef(this, &v10);
  else
    DeviceNoRef = v6(this, &v10);
  v8 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DeviceNoRef, 0x2E7u);
  }
  else
  {
    *a2 = *(struct _LUID *)((char *)v10 + 728);
    if ( a3 )
      *(_DWORD *)a3 = *((_DWORD *)this + 29);
  }
  return v8;
}
