/*
 * XREFs of ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x180046E00
 * Callers:
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@WNI@EAAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800DE2D0 (-GetDeviceInfo@CHwDisplayRenderTarget@@WNI@EAAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     ?GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x180046520 (-GetDeviceNoRef@CHwDisplayRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceInfo(
        CHwDisplayRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3)
{
  int v4; // ebx
  __int64 (__fastcall *v7)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **); // rax
  int DeviceNoRef; // eax
  int v9; // edi
  struct CD3DDeviceLevel1 *v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v7 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 256LL);
  if ( v7 == CHwDisplayRenderTarget::GetDeviceNoRef )
    DeviceNoRef = CHwDisplayRenderTarget::GetDeviceNoRef(this, &v11);
  else
    DeviceNoRef = v7(this, &v11);
  v9 = DeviceNoRef;
  if ( DeviceNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceNoRef, 0x2E7u);
  }
  else
  {
    *a2 = *(struct _LUID *)((char *)v11 + 728);
    v4 = *((_DWORD *)this + 29);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x186u);
  }
  else if ( a3 )
  {
    *(_DWORD *)a3 = v4;
  }
  return (unsigned int)v9;
}
