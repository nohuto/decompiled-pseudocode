/*
 * XREFs of NdisMSetBusData @ 0x1C0011AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

ULONG __stdcall NdisMSetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_q(34LL, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, NdisMiniportHandle, Buffer);
  if ( (*((_DWORD *)NdisMiniportHandle + 926) & 0x80u) != 0 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 464);
  if ( v10 )
  {
    v11 = *((_QWORD *)NdisMiniportHandle + 466);
    if ( v11 )
      v9 = v10(v11, WhichSpace, Buffer, Offset, Length);
  }
  if ( (unsigned __int8)byte_1C009960E >= 4u )
    WPP_SF_qD(35LL, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, NdisMiniportHandle, v9);
  return v9;
}
