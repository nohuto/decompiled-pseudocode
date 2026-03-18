/*
 * XREFs of ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C0024974
 * Callers:
 *     OutputDuplPresent @ 0x1C01CD6F8 (OutputDuplPresent.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v2; // rcx

  v2 = *this;
  if ( v2 )
    DXGADAPTER::ReleaseReferenceNoTracking(v2);
  *this = 0LL;
}
