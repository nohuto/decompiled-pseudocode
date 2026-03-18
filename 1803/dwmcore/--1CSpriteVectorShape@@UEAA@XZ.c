/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1801A45F0
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x18016ED20 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  struct CResource *v1; // rdx
  char *v3; // rcx

  v1 = (struct CResource *)*((_QWORD *)this + 11);
  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  CResource::UnRegisterNotifierInternal(this, v1);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 12));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  v3 = (char *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    std::_Deallocate(v3, (__int64)(*((_QWORD *)this + 20) - (_QWORD)v3) >> 2, 4uLL);
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 14);
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  CResource::~CResource(this);
}
