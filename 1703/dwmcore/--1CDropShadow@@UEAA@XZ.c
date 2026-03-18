/*
 * XREFs of ??1CDropShadow@@UEAA@XZ @ 0x180170970
 * Callers:
 *     ??_GCDropShadow@@UEAAPEAXI@Z @ 0x180170A00 (--_GCDropShadow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x180005BBC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ @ 0x180171E98 (-ReleaseFastShadowIfInUse@CDropShadow@@AEAAXXZ.c)
 */

void __fastcall CDropShadow::~CDropShadow(CDropShadow *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CDropShadow::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CDropShadow::`vftable'{for `IVisualListenerInfoProvider'};
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  CDropShadow::ReleaseFastShadowIfInUse(this);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    *((_QWORD *)this + 21) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 18);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
  CResource::~CResource(this);
}
