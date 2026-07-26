/*
 * XREFs of ndisGetTaskBytes @ 0x1C0045348
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C0047CD8 (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetTaskBytes(__int64 a1)
{
  _DWORD *v2; // rbx
  int v3; // r8d
  int v4; // ecx
  unsigned int v5; // ebx

  v2 = (_DWORD *)(*(_QWORD *)(a1 + 4120) + 196LL);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0xE1u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1);
  v3 = v2[9] != 0 ? 64 : 28;
  if ( v2[3] || v2[1] || v2[7] || v2[5] )
    v3 = v2[9] != 0 ? 100 : 64;
  v4 = v2[13];
  v5 = v3 + 44;
  if ( !v4 )
    v5 = v3;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qD(0xE2u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v5);
  return v5;
}
