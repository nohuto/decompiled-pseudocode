/*
 * XREFs of RtlGetSystemBootStatus @ 0x140627A20
 * Callers:
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140611E5C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
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
  return RtlpSystemBootStatusRequest(0x1Fu, (__int64)&v5, 1u, ReturnLength);
}
