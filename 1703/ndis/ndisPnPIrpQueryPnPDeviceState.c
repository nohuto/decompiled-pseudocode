/*
 * XREFs of ndisPnPIrpQueryPnPDeviceState @ 0x1C00BE568
 * Callers:
 *     ndisPnPDispatch @ 0x1C00ACD70 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     Template_jqxq @ 0x1C003F728 (Template_jqxq.c)
 */

__int64 __fastcall ndisPnPIrpQueryPnPDeviceState(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  if ( (*(_DWORD *)(a2 + 124) & 0x1000) != 0 )
    *(_QWORD *)(a3 + 56) |= 2uLL;
  if ( (*(_DWORD *)(a2 + 124) & 0x100) != 0 && (*(_DWORD *)(a2 + 4452) & 4) == 0 )
  {
    if ( (unsigned __int8)byte_1C0092614 >= 2u )
      WPP_SF_q(0x31u, &WPP_7f404e1ae4803d6fc8eef9c80d758293_Traceguids, a2);
    if ( (Microsoft_Windows_NDISEnableBits & 0x200000) != 0 )
      Template_jqxq(
        a1,
        &QueryPnPDeviceStateFailed,
        (const GUID *)(a2 + 4032),
        a2 + 4032,
        *(_DWORD *)(a2 + 4080),
        *(_QWORD *)(a2 + 4048),
        107);
    *(_QWORD *)(a3 + 56) |= 4uLL;
  }
  if ( *(_DWORD *)(a2 + 3472) )
    *(_QWORD *)(a3 + 56) |= 0x20uLL;
  *(_DWORD *)(a3 + 48) = 0;
  *a5 = 1;
  return 0LL;
}
