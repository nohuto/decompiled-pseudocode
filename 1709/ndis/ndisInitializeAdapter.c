/*
 * XREFs of ndisInitializeAdapter @ 0x1C00C0828
 * Callers:
 *     ndisPnPStartDevice @ 0x1C00C0924 (ndisPnPStartDevice.c)
 * Callees:
 *     ndisCloseULongRef @ 0x1C0001948 (ndisCloseULongRef.c)
 *     ndisLogMiniportEvent @ 0x1C00111C8 (ndisLogMiniportEvent.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qZddD @ 0x1C0050440 (WPP_SF_qZddD.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00AB714 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 */

__int64 __fastcall ndisInitializeAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // rsi^4
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v11; // [rsp+20h] [rbp-28h]

  v4 = HIDWORD(a4);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x18u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a2);
  ndisReferencePackage((__int64)&dword_1C0097378);
  HIDWORD(v11) = v4;
  v7 = MEMORY[0xFFFFF78000000014];
  v8 = ndisMInitializeAdapter(a1, a2, *(_QWORD *)(a2 + 4024));
  v9 = (MEMORY[0xFFFFF78000000014] - v7) / 10000;
  *(_DWORD *)(a2 + 1624) = v9;
  if ( (ndisFlags & 1) != 0 )
    DbgPrint("NDIS: Init time (%wZ) %ld ms\n", *(_QWORD *)(a2 + 3880), (unsigned int)v9);
  if ( (unsigned __int8)byte_1C0098750 >= 4u )
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
  MmUnlockPagableImageSection(qword_1C0097388);
  _InterlockedDecrement(&dword_1C0097378);
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x1Au, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a2);
  return v8;
}
