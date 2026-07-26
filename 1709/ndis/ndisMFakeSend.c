/*
 * XREFs of ndisMFakeSend @ 0x1C005F560
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeSend(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x4Fu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1);
  v3 = -1073741823;
  if ( v1 )
    v3 = *(_DWORD *)(v1 + 540);
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) < 6u && (v3 & 0xC0230000) == 0xC0230000 )
    v3 = (unsigned __int16)v3 | 0xC0010000;
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x50u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1);
  return v3;
}
