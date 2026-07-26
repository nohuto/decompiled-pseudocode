/*
 * XREFs of ndisMFakeWanSend @ 0x1C0060260
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x50u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1);
  v2 = -1073741823;
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x51u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1);
  return v2;
}
