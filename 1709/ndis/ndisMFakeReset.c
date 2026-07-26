/*
 * XREFs of ndisMFakeReset @ 0x1C005F4D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeReset(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  if ( (unsigned __int8)byte_1C0098758 >= 4u )
    WPP_SF_q(0x55u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0098758 >= 4u )
    WPP_SF_q(0x56u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  return v3;
}
