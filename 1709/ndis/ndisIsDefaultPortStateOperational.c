/*
 * XREFs of ndisIsDefaultPortStateOperational @ 0x1C001E5FC
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C0008250 (ndisIfSetInterfaceState.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(_DWORD *a1)
{
  char v2; // di

  v2 = 0;
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_q(44LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1);
  if ( (a1[30] & 0x10000) != 0
    && (a1[834] != 1 || ((a1[836] - 1) & 0xFFFFFFFD) == 0)
    && (a1[835] != 1 || ((a1[837] - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( (unsigned __int8)byte_1C009875E >= 4u )
    WPP_SF_q(45LL, &WPP_496de192e5de378341c8fe36eb970aad_Traceguids, a1);
  return v2;
}
