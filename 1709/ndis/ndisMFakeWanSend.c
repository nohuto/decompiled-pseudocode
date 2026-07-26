/*
 * XREFs of ndisMFakeWanSend @ 0x1C005F700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMFakeWanSend(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x4Du, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1);
  v2 = -1073741823;
  if ( v1 )
    v2 = *(_DWORD *)(v1 + 540);
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x4Eu, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, v1);
  return v2;
}
