/*
 * XREFs of ndisQueuedUpdatePMCapabilities @ 0x1C00D6890
 * Callers:
 *     <none>
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C00219F4 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0022788 (ndisAddWoLMagicPacket.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     ndisIndicatePMCapabilities @ 0x1C00D4BEC (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  int SetMiniport; // eax
  char v5; // al
  _BYTE v6[248]; // [rsp+30h] [rbp-D0h] BYREF

  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x77u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)MiniportAdapterHandle);
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
        if ( (unsigned __int8)byte_1C0092615 >= 2u )
          WPP_SF_d(0x78u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, SetMiniport);
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
  if ( (unsigned __int8)byte_1C0092615 >= 4u )
    WPP_SF_q(0x79u, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, (__int64)MiniportAdapterHandle);
}
