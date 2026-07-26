/*
 * XREFs of ndisIovAllocateVF @ 0x1C00F1D8C
 * Callers:
 *     ndisOidPreIovAllocateVF @ 0x1C00F2800 (ndisOidPreIovAllocateVF.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00126D8 (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C0020ACC (ndisGetOidSourceHandle.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

char __fastcall ndisIovAllocateVF(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // r12
  char v4; // si
  __int64 v5; // rax
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // r13
  __int64 v9; // rsi
  __int64 *SwitchBySwitchId; // rax
  __int64 *v11; // r14
  char *PoolWithTag; // rax
  char *v13; // rbp
  __int64 v14; // rcx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm1

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 1;
  v5 = v1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    WPP_SF_q(0x1Fu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3);
    v5 = *(_QWORD *)(a1 + 32);
  }
  *(_DWORD *)(v5 + 64) = 1632;
  v6 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v8 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v9 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v9 + 1626) != 0xFFFF
      || *(_DWORD *)(v9 + 1628) != -1
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v9 + 8)), (v11 = SwitchBySwitchId) == 0LL)
      || *((_DWORD *)SwitchBySwitchId + 18) == *((_DWORD *)SwitchBySwitchId + 158) )
    {
      v6 = -1073741811;
LABEL_9:
      *(_DWORD *)(a1 + 40) = v6;
      v4 = 1;
      goto LABEL_17;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6C0uLL, 0x6F69444Eu);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_9;
    }
    memset(PoolWithTag, 0, 0x6C0uLL);
    *((_DWORD *)v13 + 18) = 1;
    *((_QWORD *)v13 + 6) = v3;
    v14 = 12LL;
    *((_QWORD *)v13 + 7) = v8;
    *((_QWORD *)v13 + 8) = v11;
    *((_QWORD *)v13 + 11) = v13 + 80;
    *((_QWORD *)v13 + 10) = v13 + 80;
    v15 = v13 + 96;
    do
    {
      *v15 = *(_OWORD *)v9;
      v15[1] = *(_OWORD *)(v9 + 16);
      v15[2] = *(_OWORD *)(v9 + 32);
      v15[3] = *(_OWORD *)(v9 + 48);
      v15[4] = *(_OWORD *)(v9 + 64);
      v15[5] = *(_OWORD *)(v9 + 80);
      v15[6] = *(_OWORD *)(v9 + 96);
      v15 += 8;
      v16 = *(_OWORD *)(v9 + 112);
      v9 += 128LL;
      *(v15 - 1) = v16;
      --v14;
    }
    while ( v14 );
    *v15 = *(_OWORD *)v9;
    v15[1] = *(_OWORD *)(v9 + 16);
    v15[2] = *(_OWORD *)(v9 + 32);
    v15[3] = *(_OWORD *)(v9 + 48);
    v15[4] = *(_OWORD *)(v9 + 64);
    v17 = *(_OWORD *)(v9 + 80);
    v4 = 0;
    v15[5] = v17;
    *(_QWORD *)(v1 + 144) = v13;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v6 = -1073741637;
  }
LABEL_17:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x20u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v6);
  return v4;
}
