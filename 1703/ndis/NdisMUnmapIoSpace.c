/*
 * XREFs of NdisMUnmapIoSpace @ 0x1C00C0500
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisMUnmapIoSpace(NDIS_HANDLE MiniportAdapterHandle, PVOID VirtualAddress, UINT Length)
{
  SIZE_T v3; // rdi

  v3 = Length;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Au, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle);
  MmUnmapIoSpace(VirtualAddress, v3);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x1Bu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)MiniportAdapterHandle);
}
