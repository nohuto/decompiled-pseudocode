/*
 * XREFs of ndisInitializeAdapter @ 0x1C00C6B08
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00C6974 (ndisPnPStartDevice.c)
 * Callees:
 *     ndisCloseULongRef @ 0x1C00125F4 (ndisCloseULongRef.c)
 *     ndisLogMiniportEvent @ 0x1C001A1D4 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qZddD @ 0x1C0050DA0 (WPP_SF_qZddD.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00B1FFC (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 */

__int64 __fastcall ndisInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // rsi^4
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v4 = HIDWORD(a4);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x18u, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a2);
  ndisReferencePackage((__int64)&dword_1C0098070);
  HIDWORD(v11) = v4;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(a1, a2, *(_QWORD *)(a2 + 4024));
  v9 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  *(_DWORD *)(a2 + 1624) = v9;
  if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", *(_QWORD *)(a2 + 3880), (unsigned int)v9);
  if ( (unsigned __int8)byte_1C0099610 >= 4u )
  {
    LODWORD(v11) = *(unsigned __int8 *)(a2 + 32);
    WPP_SF_qZddD(
      *(unsigned __int8 *)(a2 + 32),
      v9,
      a2,
      *(const wchar_t **)(a2 + 3880),
      v11,
      *(unsigned __int8 *)(a2 + 33),
      v8);
  }
  if ( v8 )
  {
    ndisCloseULongRef((PKSPIN_LOCK)(a2 + 4464));
    ndisMCleanupMiniportBlockOnStop(a2);
  }
  else
  {
    ndisLogMiniportEvent(a2, 0x33u);
  }
  MmUnlockPagableImageSection(qword_1C0098080);
  _InterlockedDecrement(&dword_1C0098070);
  if ( (unsigned __int8)byte_1C0099614 >= 4u )
    WPP_SF_q(0x1Au, &WPP_f15752027639342d7f4a984ed5eb2bc7_Traceguids, a2);
  return v8;
}
