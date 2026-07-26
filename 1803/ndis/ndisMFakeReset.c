/*
 * XREFs of ndisMFakeReset @ 0x1C005FF90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_q(0x58u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 540);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
      v3 = (unsigned __int16)v3 | 0xC0010000;
  }
  else
  {
    v3 = -1073741823;
  }
  if ( (unsigned __int8)byte_1C0099618 >= 4u )
    WPP_SF_q(0x59u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
  return v3;
}
