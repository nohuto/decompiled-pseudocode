/*
 * XREFs of ndisMFakeSend @ 0x1C0060020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x52u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1);
  v3 = -1073741823;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 540);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
    v3 = (unsigned __int16)v3 | 0xC0010000;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_q(0x53u, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, v1);
  return v3;
}
