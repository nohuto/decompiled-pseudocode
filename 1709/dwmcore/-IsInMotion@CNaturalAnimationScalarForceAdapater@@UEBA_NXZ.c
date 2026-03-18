/*
 * XREFs of ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180193D50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsInMotion@CVector3Force@@QEBA_NXZ @ 0x1801936D4 (-IsInMotion@CVector3Force@@QEBA_NXZ.c)
 *     ?GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z @ 0x180193D08 (-GetVector3Force@CNaturalAnimation@@QEBAXPEAPEAVCVector3Force@@@Z.c)
 */

char __fastcall CNaturalAnimationScalarForceAdapater::IsInMotion(CNaturalAnimationScalarForceAdapater *this)
{
  CNaturalAnimation *v2; // rdi
  __int64 v3; // rax
  char v4; // bl
  CVector3Force *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v6);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
    v2 = *(CNaturalAnimation **)(v3 + 8);
  CNaturalAnimation::GetVector3Force(v2, &v6);
  v4 = CVector3Force::IsInMotion(v6);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v6);
  return v4;
}
