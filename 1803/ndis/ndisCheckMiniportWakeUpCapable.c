/*
 * XREFs of ndisCheckMiniportWakeUpCapable @ 0x1C0024C90
 * Callers:
 *     ndisMIndicatePMHardwareCapabilities @ 0x1C004A0F8 (ndisMIndicatePMHardwareCapabilities.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxqq @ 0x1C003D190 (McTemplateK0jqxqq.c)
 */

char __fastcall ndisCheckMiniportWakeUpCapable(__int64 a1)
{
  int v1; // eax
  int v3; // ecx

  v1 = *(_DWORD *)(a1 + 1048);
  v3 = 2;
  if ( ((unsigned int)(v1 - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1040) - 2) <= 2
     || (unsigned int)(*(_DWORD *)(a1 + 1044) - 2) <= 2
     || (*(_BYTE *)(a1 + 1004) & 6) != 0)
    && *(_DWORD *)(a1 + 1268)
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && (*(_DWORD *)(a1 + 1228) & 0x3800) != 0 )
  {
    *(_DWORD *)(a1 + 124) |= 0x4000000u;
    return 1;
  }
  else
  {
    *(_DWORD *)(a1 + 124) &= ~0x4000000u;
    if ( (unsigned __int8)byte_1C0099615 >= 4u )
      WPP_SF_q(123LL, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, a1);
    if ( (Microsoft_Windows_NDISEnableBits & 0x80000) != 0 )
      McTemplateK0jqxqq(
        v3,
        (unsigned int)&InitializeAdapterInfo,
        a1 + 4032,
        a1 + 4032,
        *(_DWORD *)(a1 + 4080),
        *(_QWORD *)(a1 + 4048),
        3,
        0);
    return 0;
  }
}
