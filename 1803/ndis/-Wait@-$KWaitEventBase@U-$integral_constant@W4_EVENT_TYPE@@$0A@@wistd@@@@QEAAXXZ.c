/*
 * XREFs of ?Wait@?$KWaitEventBase@U?$integral_constant@W4_EVENT_TYPE@@$0A@@wistd@@@@QEAAXXZ @ 0x1C00EE788
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B05B0 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00B2C20 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C00FDEF0 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall KWaitEventBase<wistd::integral_constant<enum _EVENT_TYPE,0>>::Wait(void *a1)
{
  return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
}
