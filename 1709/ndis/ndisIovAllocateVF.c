/*
 * XREFs of ndisIovAllocateVF @ 0x1C00EF16C
 * Callers:
 *     ndisOidPreIovAllocateVF @ 0x1C00EFBE0 (ndisOidPreIovAllocateVF.c)
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C0001A2C (ndisIovFindSwitchBySwitchId.c)
 *     ndisGetOidSourceHandle @ 0x1C00031DC (ndisGetOidSourceHandle.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

char __fastcall ndisIovAllocateVF(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // r14
  char v4; // r12
  char *v5; // rsi
  _BYTE *OidSourceHandle; // rax
  _BYTE *v7; // r15
  __int64 v8; // rdi
  __int64 *SwitchBySwitchId; // rax
  __int64 *v10; // rbp
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 1;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_q(0x1Fu, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 64LL) = 1632;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v7 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v8 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v8 + 1626) == 0xFFFF
      && *(_DWORD *)(v8 + 1628) == -1
      && (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v8 + 8)), (v10 = SwitchBySwitchId) != 0LL)
      && *((_DWORD *)SwitchBySwitchId + 18) != *((_DWORD *)SwitchBySwitchId + 158) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6C0uLL, 0x6F69444Eu);
      v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x6C0uLL);
        *((_DWORD *)v5 + 18) = 1;
        *((_QWORD *)v5 + 6) = v3;
        v12 = 12LL;
        *((_QWORD *)v5 + 7) = v7;
        *((_QWORD *)v5 + 8) = v10;
        *((_QWORD *)v5 + 11) = v5 + 80;
        *((_QWORD *)v5 + 10) = v5 + 80;
        v13 = v5 + 96;
        do
        {
          *v13 = *(_OWORD *)v8;
          v13[1] = *(_OWORD *)(v8 + 16);
          v13[2] = *(_OWORD *)(v8 + 32);
          v13[3] = *(_OWORD *)(v8 + 48);
          v13[4] = *(_OWORD *)(v8 + 64);
          v13[5] = *(_OWORD *)(v8 + 80);
          v13[6] = *(_OWORD *)(v8 + 96);
          v13 += 8;
          v14 = *(_OWORD *)(v8 + 112);
          v8 += 128LL;
          *(v13 - 1) = v14;
          --v12;
        }
        while ( v12 );
        *v13 = *(_OWORD *)v8;
        v13[1] = *(_OWORD *)(v8 + 16);
        v13[2] = *(_OWORD *)(v8 + 32);
        v13[3] = *(_OWORD *)(v8 + 48);
        v13[4] = *(_OWORD *)(v8 + 64);
        v13[5] = *(_OWORD *)(v8 + 80);
        *(_QWORD *)(v1 + 144) = v5;
        *(_DWORD *)(a1 + 40) = 0;
        v4 = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741670;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  if ( *(_DWORD *)(a1 + 40) && v5 )
    ExFreePoolWithTag(v5, 0);
  if ( (unsigned __int8)byte_1C0098761 >= 4u )
    WPP_SF_qD(0x20u, &WPP_5ff1401217a93c6fc594d1a65b549c1f_Traceguids, v3, *(_DWORD *)(a1 + 40));
  return v4;
}
