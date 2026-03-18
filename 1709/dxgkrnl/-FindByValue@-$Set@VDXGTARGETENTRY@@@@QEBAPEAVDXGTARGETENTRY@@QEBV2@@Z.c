/*
 * XREFs of ?FindByValue@?$Set@VDXGTARGETENTRY@@@@QEBAPEAVDXGTARGETENTRY@@QEBV2@@Z @ 0x1C002D310
 * Callers:
 *     ?Add@?$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z @ 0x1C002D0F8 (-Add@-$Set@VDXGTARGETENTRY@@@@QEAAEQEAVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsByValue@?$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z @ 0x1C002D2F4 (-ContainsByValue@-$Set@VDXGTARGETENTRY@@@@QEAAEQEBVDXGTARGETENTRY@@@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C01D95C0 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 *     ?Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ @ 0x1C01D99B4 (-Invalidate@DXGDISPLAYMANAGEROBJECT@@QEAAXXZ.c)
 *     ?ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1C01D9BE4 (-ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z.c)
 *     ?TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z @ 0x1C01D9D3C (-TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAV1@@Z.c)
 * Callees:
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1C01D93EC (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall Set<DXGTARGETENTRY>::FindByValue(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2;
  if ( v2 == a1 + 24 )
    return 0LL;
  v4 = v2 - 8;
  while ( v4 )
  {
    if ( !(unsigned __int8)DXGTARGETENTRY::operator!=(v4, v3) )
      break;
    v7 = *(_QWORD *)(v4 + 8);
    v4 = v7 - 8;
    if ( v7 == v6 + 24 )
      v4 = v5;
  }
  return v4;
}
