/*
 * XREFs of ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x1800C5DA0
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800889B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CProcessAttribution>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
