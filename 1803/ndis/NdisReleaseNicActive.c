/*
 * XREFs of NdisReleaseNicActive @ 0x1C0075920
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C00B33A4 (ndisCleanUpForProtocol.c)
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C00094D8 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072D50 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 */

void __fastcall NdisReleaseNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  unsigned __int8 IsTempRefNeededAfterDeref; // r12
  int v4; // r14d
  int v7; // r15d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v9; // r13
  int active; // eax
  __int64 v11; // rcx
  enum _NDIS_PM_COMPONENT_ID v12; // [rsp+20h] [rbp-48h]
  int v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+30h] [rbp-38h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  IsTempRefNeededAfterDeref = 0;
  v4 = 0;
  v7 = 0;
  AoAc = v2->AoAc;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_qD(0x35u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, a1, a2);
  if ( ndisValidComponentId(a2) && v2->AoAc )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    if ( *(_DWORD *)(a1 + 944) && AoAc->ActiveRef > 0 )
    {
      active = ndisAoAcActiveRefSubtract(AoAc, a2, 1);
      v7 = --*(_DWORD *)(a1 + 944);
      v4 = active;
      IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    }
    KeReleaseSpinLock(&AoAc->Lock, v9);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    {
      v14 = v4;
      v13 = v7;
      v12 = a2;
      McTemplateK0xqqq(v11, &NicActiveReleased, &v2->InterfaceGuid, v2->NetLuid.Value, v12, v13, v14);
    }
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(v2, AoAc->DerefTimeoutMilliseconds);
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_dd(0x36u, &WPP_bf529ec5834d316bdbb03bafc086ab40_Traceguids, v4, v7);
  }
}
