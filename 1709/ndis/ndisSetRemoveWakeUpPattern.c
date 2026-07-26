/*
 * XREFs of ndisSetRemoveWakeUpPattern @ 0x1C00E1D14
 * Callers:
 *     ndisOidPreRemoveWakeUpPattern @ 0x1C00E0270 (ndisOidPreRemoveWakeUpPattern.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetRemoveWakeUpPattern(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // r8d
  _DWORD *v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // r9d
  unsigned int v10; // ecx

  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x2Bu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
  v4 = *(_DWORD *)(a1 + 48);
  *a2 = 1;
  if ( v4 >= 0x18 )
  {
    v5 = *(_DWORD **)(a1 + 40);
    v6 = 0;
    v7 = v5[2];
    if ( !v7 || (v8 = v7 + 24, v8 < 0x18) || (v9 = v5[3], v9 < v8) || (v10 = v9 + v5[4], v10 < v9) )
    {
      v6 = -1073676267;
      goto LABEL_15;
    }
    if ( v4 >= v10 )
    {
      *a2 = 0;
      goto LABEL_15;
    }
    *(_DWORD *)(a1 + 56) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 56) = 24;
  }
  v6 = -1073676268;
  if ( (unsigned __int8)byte_1C0098752 >= 2u )
    WPP_SF_q(0x2Cu, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
LABEL_15:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x2Du, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, a1);
  return v6;
}
