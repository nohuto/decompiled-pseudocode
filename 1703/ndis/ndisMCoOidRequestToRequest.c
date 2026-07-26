/*
 * XREFs of ndisMCoOidRequestToRequest @ 0x1C00472C0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0009F70 (ndisQuerySetMiniportEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqDL @ 0x1C0045C60 (WPP_SF_qqDL.c)
 *     NdisMCoRequestComplete @ 0x1C0109090 (NdisMCoRequestComplete.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *MiniportAdapterHandle, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned int v7; // esi
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rdi
  int v10; // eax
  NDIS_STATUS v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h]
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15; // [rsp+28h] [rbp-20h]

  v3 = *(_DWORD *)(a3 + 32);
  v7 = -1073741823;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v14 = *(_DWORD *)(a3 + 32);
    WPP_SF_qqd(0x43u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, MiniportAdapterHandle, a3, v14);
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
      v10 = *(_DWORD *)(a3 + 56);
      v9[6] |= 0x400u;
      v9[16] = v10;
      *((_QWORD *)v9 + 1) = a3;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *))(MiniportAdapterHandle[473] + 288LL))(
              MiniportAdapterHandle[3],
              a2,
              v9);
      v7 = v11;
      if ( v11 != 259 )
      {
        NdisMCoRequestComplete(v11, MiniportAdapterHandle, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    v15 = v7;
    LODWORD(v13) = v3;
    WPP_SF_qqDL(0x44u, a2, MiniportAdapterHandle, a3, v13, v15);
  }
  return v7;
}
