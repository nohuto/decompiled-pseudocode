/*
 * XREFs of ndisPnPIrpQueryPnPDeviceState @ 0x1C00C6D04
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C6470 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D100 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v5; // eax

  v5 = *(_DWORD *)(a2 + 124);
  if ( (v5 & 0x1000) != 0 )
  {
    *(_QWORD *)(a3 + 56) |= 2uLL;
    v5 = *(_DWORD *)(a2 + 124);
  }
  if ( (v5 & 0x100) != 0 && (*(_DWORD *)(a2 + 4452) & 4) == 0 )
  {
    if ( (unsigned __int8)byte_1C0099614 >= 2u )
      WPP_SF_q(0x31u, &WPP_0af21d7125ac337aa6d359ed8b88fbb1_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000) != 0 )
      McTemplateK0jqxq(
        a1,
        &QueryPnPDeviceStateFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        114);
    *(_QWORD *)(a3 + 56) |= 4uLL;
  }
  if ( *(_DWORD *)(a2 + 3472) )
    *(_QWORD *)(a3 + 56) |= 0x20uLL;
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
