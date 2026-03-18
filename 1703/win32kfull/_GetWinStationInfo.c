/*
 * XREFs of _GetWinStationInfo @ 0x1C01EE7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v5; // rdx

  if ( (((((unsigned __int128)-(__int128)(unsigned __int64)PsGetCurrentProcessWow64Process(a1, a2, a3, a4) >> 64) & 0xFFFFFFFD)
       + 3) & (unsigned int)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v5 = (_BYTE *)a1;
  if ( a1 >= W32UserProbeAddress )
    v5 = (_BYTE *)W32UserProbeAddress;
  *v5 = *v5;
  v5[39] = v5[39];
  *(_OWORD *)a1 = gWinStationInfo;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)&gWinStationInfo + 1);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&gWinStationInfo + 4);
  return 1LL;
}
