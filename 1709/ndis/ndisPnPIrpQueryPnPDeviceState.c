/*
 * XREFs of ndisPnPIrpQueryPnPDeviceState @ 0x1C00C15B0
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C0CB0 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003BDB8 (McTemplateK0jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    *(_QWORD *)(a3 + 56) |= 2uLL;
  if ( (*(_DWORD *)(a2 + 124) & 0x100) != 0 && (*(_DWORD *)(a2 + 4452) & 4) == 0 )
  {
    if ( (unsigned __int8)byte_1C0098754 >= 2u )
      WPP_SF_q(0x31u, &WPP_c43bece8f9e83cce6c35b7786f97099d_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000) != 0 )
      McTemplateK0jqxq(
        a1,
        &QueryPnPDeviceStateFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        110);
    *(_QWORD *)(a3 + 56) |= 4uLL;
  }
  if ( *(_DWORD *)(a2 + 3472) )
    *(_QWORD *)(a3 + 56) |= 0x20uLL;
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
