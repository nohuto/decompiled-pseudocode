/*
 * XREFs of ?ReleaseAnimationHandle@CAnimationResource@@QEAAXXZ @ 0x1800A7278
 * Callers:
 *     ?AddCubic@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A6F00 (-AddCubic@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationResource@@UEAAJNN@Z @ 0x1800A6FB0 (-AddRepeat@CAnimationResource@@UEAAJNN@Z.c)
 *     ?AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z @ 0x1800A7050 (-AddSinusoidal@CAnimationResource@@UEAAJNMMMM@Z.c)
 *     ?End@CAnimationResource@@UEAAJNM@Z @ 0x1800A7130 (-End@CAnimationResource@@UEAAJNM@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
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
