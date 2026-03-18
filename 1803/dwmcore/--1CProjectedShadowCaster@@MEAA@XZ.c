/*
 * XREFs of ??1CProjectedShadowCaster@@MEAA@XZ @ 0x18019F964
 * Callers:
 *     ??_GCProjectedShadowCaster@@MEAAPEAXI@Z @ 0x18019FA80 (--_GCProjectedShadowCaster@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAllShadows@CProjectedShadowCaster@@QEAAXXZ @ 0x1801A0B80 (-RemoveAllShadows@CProjectedShadowCaster@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowCaster::~CProjectedShadowCaster(struct CResource **this)
{
  struct CResource *v2; // rcx
  struct CResource *v3; // rcx
  char *v4; // rdi
  char *v5; // rsi
  __int64 v6; // rcx

  *this = (struct CResource *)&CProjectedShadowCaster::`vftable';
  CProjectedShadowCaster::RemoveAllShadows((CProjectedShadowCaster *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[14]);
  v2 = this[18];
  if ( v2 )
  {
    this[18] = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(this + 17);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(this + 16);
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(this + 15);
  v3 = this[13];
  if ( v3 )
  {
    this[13] = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (char *)this[8];
  if ( v4 )
  {
    v5 = (char *)this[9];
    if ( v4 != v5 )
    {
      do
      {
        v6 = *(_QWORD *)v4;
        if ( *(_QWORD *)v4 )
        {
          *(_QWORD *)v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v4 += 8;
      }
      while ( v4 != v5 );
      v4 = (char *)this[8];
    }
    std::_Deallocate(v4, (this[10] - (struct CResource *)v4) >> 3, 8uLL);
    this[8] = 0LL;
    this[9] = 0LL;
    this[10] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
