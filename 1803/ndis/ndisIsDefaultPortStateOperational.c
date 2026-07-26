/*
 * XREFs of ndisIsDefaultPortStateOperational @ 0x1C0017008
 * Callers:
 *     ndisIfSetInterfaceState @ 0x1C0018DFC (ndisIfSetInterfaceState.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

char __fastcall ndisIsDefaultPortStateOperational(_DWORD *a1)
{
  char v2; // di

  v2 = 0;
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(44LL, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1);
  if ( (a1[30] & 0x10000) != 0
    && (a1[834] != 1 || ((a1[836] - 1) & 0xFFFFFFFD) == 0)
    && (a1[835] != 1 || ((a1[837] - 1) & 0xFFFFFFFD) == 0) )
  {
    v2 = 1;
  }
  if ( (unsigned __int8)byte_1C009961E >= 4u )
    WPP_SF_q(45LL, &WPP_0b808382ed603acc29a2d994791a3522_Traceguids, a1);
  return v2;
}
