/*
 * XREFs of ndisGetTaskBytes @ 0x1C0046F80
 * Callers:
 *     ndisPreTaskOffloadQuery @ 0x1C004967C (ndisPreTaskOffloadQuery.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisGetTaskBytes(__int64 a1)
{
  _DWORD *v2; // rbx
  char v3; // dl
  int v4; // r8d
  int v5; // ecx
  unsigned int v6; // ebx

  v2 = (_DWORD *)(*(_QWORD *)(a1 + 4120) + 196LL);
  v3 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_q(0xD2u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1);
    v3 = byte_1C0092612;
  }
  v4 = v2[9] != 0 ? 64 : 28;
  if ( v2[3] || v2[1] || v2[7] || v2[5] )
    v4 = v2[9] != 0 ? 100 : 64;
  v5 = v2[13];
  v6 = v4 + 44;
  if ( !v5 )
    v6 = v4;
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_qD(0xD3u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v6);
  return v6;
}
