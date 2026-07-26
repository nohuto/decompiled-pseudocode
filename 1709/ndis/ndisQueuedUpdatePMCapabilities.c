/*
 * XREFs of ndisQueuedUpdatePMCapabilities @ 0x1C00E0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0002ACC (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0002DD0 (ndisAddWoLMagicPacket.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C0009A28 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 *     ndisIndicatePMCapabilities @ 0x1C00DF3F0 (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  int SetMiniport; // eax
  char v5; // al
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF

  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x77u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisUpdatePMCurrentCapabilities((__int64)MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (*(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 473) + 120LL) & 8) != 0 )
    {
      memset(v6, 0, sizeof(v6));
      *(_DWORD *)&v6[8] = 0;
      *(_QWORD *)&v6[104] = &ndisIntReqGeneric;
      *(_DWORD *)&v6[88] |= 0x100008u;
      *(_DWORD *)v6 = 15466902;
      *(_DWORD *)&v6[32] = -50265847;
      *(_DWORD *)&v6[4] = 1;
      *(_QWORD *)&v6[40] = MiniportAdapterHandle + 1120;
      *(_DWORD *)&v6[48] = 20;
      SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v6, 0LL, 0LL);
      if ( SetMiniport )
      {
        if ( (unsigned __int8)byte_1C0098755 >= 2u )
          WPP_SF_d(0x78u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, SetMiniport);
      }
    }
    v5 = MiniportAdapterHandle[32];
    if ( ((unsigned __int8)v5 > 6u || v5 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u)
      && (*((_DWORD *)MiniportAdapterHandle + 281) & 2) != 0 )
    {
      ndisAddWoLMagicPacket((KSPIN_LOCK *)MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x10u);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0098755 >= 4u )
    WPP_SF_q(0x79u, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, (__int64)MiniportAdapterHandle);
}
