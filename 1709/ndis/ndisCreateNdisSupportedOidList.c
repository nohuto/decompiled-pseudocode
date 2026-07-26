/*
 * XREFs of ndisCreateNdisSupportedOidList @ 0x1C00AD338
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // cl
  int v4; // eax
  unsigned int v5; // eax
  _OWORD *PoolWithTag; // rax
  unsigned int v7; // r8d
  _OWORD *v8; // rcx

  v2 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x13u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1);
  v3 = *(_BYTE *)(a1 + 32);
  v4 = v3 < 6u ? 45 : 81;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    v4 = v3 < 6u ? 46 : 82;
    if ( v3 >= 6u )
      v4 = v3 < 6u ? 50 : 86;
  }
  v5 = 4 * v4;
  *(_DWORD *)(a1 + 3424) = v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x6D61444Eu);
  *(_QWORD *)(a1 + 3416) = PoolWithTag;
  if ( PoolWithTag )
  {
    v7 = 45;
    *PoolWithTag = ndisHandledNdis5Ndis6GenOids;
    PoolWithTag[1] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    PoolWithTag[2] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    PoolWithTag[3] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    PoolWithTag[4] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    PoolWithTag[5] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    PoolWithTag[6] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    PoolWithTag[7] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    PoolWithTag[8] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    PoolWithTag[9] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    PoolWithTag[10] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    *((_DWORD *)PoolWithTag + 44) = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      v8 = (_OWORD *)(*(_QWORD *)(a1 + 3416) + 180LL);
      v7 = 81;
      *v8 = ndisHandledNdis6OnlyGenOids;
      v8[1] = *(_OWORD *)(0x1C0000000LL + 1147040);
      v8[2] = *(_OWORD *)(0x1C0000000LL + 1147056);
      v8[3] = *(_OWORD *)(0x1C0000000LL + 1147072);
      v8[4] = *(_OWORD *)(0x1C0000000LL + 1147088);
      v8[5] = *(_OWORD *)(0x1C0000000LL + 1147104);
      v8[6] = *(_OWORD *)(0x1C0000000LL + 1147120);
      v8[7] = *(_OWORD *)(0x1C0000000LL + 1147136);
      v8[8] = *(_OWORD *)(0x1C0000000LL + 1147152);
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 3416) + 4LL * v7) = (_DWORD)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( *(_BYTE *)(a1 + 32) >= 6u )
        *(_OWORD *)(*(_QWORD *)(a1 + 3416) + 4LL * (v7 + 1)) = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x14u, &WPP_a56134e7174533053ca3ca78f717c7c2_Traceguids, a1, v2);
  return v2;
}
