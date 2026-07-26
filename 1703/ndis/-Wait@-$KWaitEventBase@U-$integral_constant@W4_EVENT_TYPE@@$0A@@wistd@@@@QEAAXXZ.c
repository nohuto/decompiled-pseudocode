/*
 * XREFs of ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00E1D24
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00A75C8 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00BF714 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00F1EE8 (-ReferenceWdi@@YA_NXZ.c)
 *     NetPacketDeregisterClient @ 0x1C00F2A30 (NetPacketDeregisterClient.c)
 *     NetPacketExtensionFree @ 0x1C00F2CD0 (NetPacketExtensionFree.c)
 *     NetPacketExtensionWaitForReady @ 0x1C00F2D00 (NetPacketExtensionWaitForReady.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
