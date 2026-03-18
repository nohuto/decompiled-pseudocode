/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1801B89A0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x1801B82C0 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x1801BA440 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x1801A83C0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  CD3DDeviceLevel1 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 5);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 120LL))(v2) )
  {
    v3 = *(_QWORD *)this;
    v6 = 0LL;
    (*(void (__fastcall **)(CHwFullScreenRenderTarget *, _QWORD, CD3DDeviceLevel1 **))(v3 + 360))(this, 0LL, &v6);
    ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this - 24);
  v6 = 0LL;
  (*(void (__fastcall **)(char *, CD3DDeviceLevel1 **))(v5 + 216))((char *)this - 192, &v6);
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this - 1);
  if ( v6 )
    CD3DDeviceLevel1::ReleaseResourcesForDisplayChange(v6);
}
