/*
 * XREFs of ndisMFakeSend @ 0x1C005F7B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // dl
  unsigned int v4; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  v3 = byte_1C009260A;
  if ( (unsigned __int8)byte_1C009260A >= 4u )
  {
    WPP_SF_q(0x4Eu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v1);
    v3 = byte_1C009260A;
  }
  v4 = -1073741823;
  if ( v1 )
    v4 = *(_DWORD *)(v1 + 540);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v4 & 0xC0230000) == 0xC0230000 )
    v4 = (unsigned __int16)v4 | 0xC0010000;
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_q(0x4Fu, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, v1);
  return v4;
}
