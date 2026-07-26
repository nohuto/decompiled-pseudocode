/*
 * XREFs of ndisSetRemoveWakeUpPattern @ 0x1C00D78C8
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00D5DE0 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(__int64 a1, _BYTE *a2)
{
  char v4; // r8
  unsigned int v5; // r9d
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // r10d
  unsigned int v11; // ecx

  v4 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_q(0x2Bu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
    v4 = byte_1C0092612;
  }
  v5 = *(_DWORD *)(a1 + 48);
  *a2 = 1;
  if ( v5 >= 0x18 )
  {
    v6 = *(_DWORD **)(a1 + 40);
    v7 = 0;
    v8 = v6[2];
    if ( !v8 || (v9 = v8 + 24, v9 < 0x18) || (v10 = v6[3], v10 < v9) || (v11 = v10 + v6[4], v11 < v10) )
    {
      v7 = -1073676267;
      goto LABEL_15;
    }
    if ( v5 >= v11 )
    {
      *a2 = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 56) = v11;
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 24;
  }
  v7 = -1073676268;
  if ( (unsigned __int8)v4 >= 2u )
  {
    WPP_SF_q(0x2Cu, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
    v4 = byte_1C0092612;
  }
LABEL_15:
  if ( (unsigned __int8)v4 >= 4u )
    WPP_SF_q(0x2Du, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, a1);
  return v7;
}
