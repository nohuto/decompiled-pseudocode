/*
 * XREFs of ndisMCoOidRequestToRequest @ 0x1C0045690
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C000AE70 (ndisQuerySetMiniportEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqDL @ 0x1C0043EEC (WPP_SF_qqDL.c)
 *     NdisMCoRequestComplete @ 0x1C01140D0 (NdisMCoRequestComplete.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi
  NDIS_STATUS v10; // eax
  __int64 v12; // [rsp+20h] [rbp-28h]
  int v13; // [rsp+20h] [rbp-28h]
  unsigned int v14; // [rsp+28h] [rbp-20h]

  v3 = *(_DWORD *)(a3 + 32);
  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v13 = *(_DWORD *)(a3 + 32);
    WPP_SF_qqd(0x43u, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, MiniportAdapterHandle, a3, v13);
  }
  if ( *(_DWORD *)(a3 + 4) == 12 )
  {
    v7 = -1073741637;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB0uLL);
      v9[8] = *(_DWORD *)(a3 + 4);
      v9[10] = *(_DWORD *)(a3 + 32);
      *((_QWORD *)v9 + 6) = *(_QWORD *)(a3 + 40);
      v9[14] = *(_DWORD *)(a3 + 48);
      v9[15] = *(_DWORD *)(a3 + 52);
      v9[16] = *(_DWORD *)(a3 + 56);
      v9[6] |= 0x400u;
      *((_QWORD *)v9 + 1) = a3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *))(MiniportAdapterHandle[473] + 288LL))(
              MiniportAdapterHandle[3],
              a2,
              v9);
      v7 = v10;
      if ( v10 != 259 )
      {
        NdisMCoRequestComplete(v10, MiniportAdapterHandle, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
  {
    v14 = v7;
    LODWORD(v12) = v3;
    WPP_SF_qqDL(0x44u, a2, MiniportAdapterHandle, a3, v12, v14);
  }
  return v7;
}
