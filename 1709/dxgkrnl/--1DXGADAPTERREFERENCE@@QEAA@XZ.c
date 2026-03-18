/*
 * XREFs of ??1DXGADAPTERREFERENCE@@QEAA@XZ @ 0x1C001DFC4
 * Callers:
 *     ?ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z @ 0x1C007AF9C (-ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT@@CAJPEBVDXGTARGETENTRY@@PEAV1@1@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTERREFERENCE::~DXGADAPTERREFERENCE(DXGADAPTER **this)
{
  DXGADAPTER *v1; // rcx

  v1 = *this;
  if ( v1 )
    DXGADAPTER::ReleaseReferenceNoTracking(v1);
}
