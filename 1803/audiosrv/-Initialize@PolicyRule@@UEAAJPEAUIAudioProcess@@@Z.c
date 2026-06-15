/*
 * XREFs of ?Initialize@PolicyRule@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800FC450
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall PolicyRule::Initialize(PolicyRule *this, struct IUnknown *a2)
{
  struct IUnknown **v2; // rcx

  v2 = (struct IUnknown **)((char *)this + 24);
  if ( *v2 != a2 )
    ATL::AtlComPtrAssign(v2, a2);
  return 0LL;
}
