/*
 * XREFs of ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x18000E3EC
 * Callers:
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x18000E6F0 (-End@CAnimationResource@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x18000E770 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A07E0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A0880 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationResource::ReleaseAnimationHandle(CAnimationResource *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
}
