/*
 * XREFs of ??1CRenderTarget@@MEAA@XZ @ 0x180042294
 * Callers:
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x18000D6E8 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800D7918 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180156D98 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??_ECRemoteAppRenderTarget@@MEAAPEAXI@Z @ 0x18015C3C0 (--_ECRemoteAppRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801FD9AC (--1CHolographicInteropTarget@@MEAA@XZ.c)
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800423A0 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTarget::~CRenderTarget(struct CResource **this)
{
  struct CResource *v2; // rcx
  struct CResource *v3; // rcx

  CRenderTarget::SetVisualTree((CRenderTarget *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
  this[16] = 0LL;
  v2 = this[17];
  if ( v2 )
  {
    (*(void (__fastcall **)(struct CResource *, char *))(*(_QWORD *)v2 + 32LL))(v2, (char *)this + 80);
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)this[17] + 16LL))(this[17]);
  }
  v3 = this[14];
  if ( v3 )
    CMILCOMBase::InternalRelease((struct CResource *)((char *)v3 + 16));
  *this = (struct CResource *)&CNotificationResource::`vftable';
  CResource::~CResource((CResource *)this);
}
