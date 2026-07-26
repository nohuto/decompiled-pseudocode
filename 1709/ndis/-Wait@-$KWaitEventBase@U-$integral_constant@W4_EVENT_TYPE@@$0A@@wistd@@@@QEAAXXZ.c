/*
 * XREFs of ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EBBD4
 * Callers:
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00AB460 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00C63E8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00FB3C8 (-ReferenceWdi@@YA_NXZ.c)
 *     NetPacketDeregisterClient @ 0x1C00FBF20 (NetPacketDeregisterClient.c)
 *     NetPacketExtensionFree @ 0x1C00FC1C0 (NetPacketExtensionFree.c)
 *     NetPacketExtensionWaitForReady @ 0x1C00FC1F0 (NetPacketExtensionWaitForReady.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
