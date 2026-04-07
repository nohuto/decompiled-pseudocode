/*
 * XREFs of ?ReleaseResources@CText@@AEAAXXZ @ 0x18001BC7C
 * Callers:
 *     ??_GCText@@EEAAPEAXI@Z @ 0x18001B8B0 (--_GCText@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 */

void __fastcall CText::ReleaseResources(CBaseObject **this)
{
  CBaseObject *v2; // rcx

  CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
  v2 = this[49];
  if ( v2 )
  {
    CBaseObject::Release(v2);
    this[49] = 0LL;
  }
}
