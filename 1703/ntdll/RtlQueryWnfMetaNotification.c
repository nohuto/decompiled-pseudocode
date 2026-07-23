/*
 * XREFs of RtlQueryWnfMetaNotification @ 0x180088F70
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryWnfStateNameInformation @ 0x1800A7DD0 (ZwQueryWnfStateNameInformation.c)
 */

NTSTATUS __fastcall RtlQueryWnfMetaNotification(
        PVOID InfoBuffer,
        WNF_STATE_NAME_INFORMATION a2,
        WNF_STATE_NAME a3,
        const void *a4)
{
  WNF_STATE_NAME StateName; // [rsp+30h] [rbp-18h] BYREF

  StateName = a3;
  return ZwQueryWnfStateNameInformation(&StateName, a2, a4, InfoBuffer, 4u);
}
