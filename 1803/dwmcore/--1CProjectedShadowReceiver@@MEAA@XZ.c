/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x1801A112C
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1801A1210 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAllShadows@CProjectedShadowReceiver@@QEAAXXZ @ 0x1801A19E4 (-RemoveAllShadows@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(struct CResource **this)
{
  struct CResource *v2; // rcx
  char *v3; // rdi
  char *v4; // rsi
  __int64 v5; // rcx

  *this = (struct CResource *)&CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::RemoveAllShadows((CProjectedShadowReceiver *)this);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  this[7] = 0LL;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
  v2 = this[14];
  if ( v2 )
  {
    this[14] = 0LL;
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(this + 13);
  v3 = (char *)this[8];
  if ( v3 )
  {
    v4 = (char *)this[9];
    if ( v3 != v4 )
    {
      do
      {
        v5 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 )
        {
          *(_QWORD *)v3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v3 += 8;
      }
      while ( v3 != v4 );
      v3 = (char *)this[8];
    }
    std::_Deallocate(v3, (this[10] - (struct CResource *)v3) >> 3, 8uLL);
    this[8] = 0LL;
    this[9] = 0LL;
    this[10] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
