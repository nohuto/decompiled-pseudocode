/*
 * XREFs of RtlSetSystemBootStatus @ 0x1800839D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800839FC @ 0x1800839FC (sub_1800839FC.c)
 */

NTSTATUS __cdecl RtlSetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  RTL_BSD_ITEM_TYPE v5; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]

  v7 = DataLength;
  v5 = BootStatusInformationClass;
  v6 = DataBuffer;
  return sub_1800839FC(32LL, &v5);
}
