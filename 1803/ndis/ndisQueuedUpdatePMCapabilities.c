/*
 * XREFs of ndisQueuedUpdatePMCapabilities @ 0x1C00E24D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     ndisUpdatePMCurrentCapabilities @ 0x1C0022864 (ndisUpdatePMCurrentCapabilities.c)
 *     ndisAddWoLMagicPacket @ 0x1C0024054 (ndisAddWoLMagicPacket.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     ndisIndicatePMCapabilities @ 0x1C00E0EEC (ndisIndicatePMCapabilities.c)
 */

void __fastcall ndisQueuedUpdatePMCapabilities(PVOID P, char *MiniportAdapterHandle)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int SetMiniport; // eax
  char v7; // al
  _BYTE v8[248]; // [rsp+30h] [rbp-D0h] BYREF

  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x77u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)MiniportAdapterHandle);
  if ( ndisUpdatePMCurrentCapabilities((__int64)MiniportAdapterHandle) )
  {
    ndisIndicatePMCapabilities(MiniportAdapterHandle);
    if ( (*(_DWORD *)(*((_QWORD *)MiniportAdapterHandle + 473) + 120LL) & 8) != 0 )
    {
      memset(v8, 0, sizeof(v8));
      *(_DWORD *)&v8[8] = 0;
      *(_DWORD *)&v8[88] |= 0x100008u;
      *(_QWORD *)&v8[104] = &ndisIntReqGeneric;
      *(_DWORD *)v8 = 15466902;
      *(_QWORD *)&v8[40] = MiniportAdapterHandle + 1120;
      *(_DWORD *)&v8[32] = -50265847;
      *(_DWORD *)&v8[4] = 1;
      *(_DWORD *)&v8[48] = 20;
      SetMiniport = ndisQuerySetMiniport(MiniportAdapterHandle, 0LL, (struct _NDIS_OID_REQUEST *)v8, 0LL, 0LL);
      if ( SetMiniport )
      {
        if ( (unsigned __int8)byte_1C0099615 >= 2u )
          WPP_SF_d(0x78u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, SetMiniport);
      }
    }
    v7 = MiniportAdapterHandle[32];
    if ( ((unsigned __int8)v7 > 6u || v7 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x14u)
      && (*((_DWORD *)MiniportAdapterHandle + 281) & 2) != 0 )
    {
      ndisAddWoLMagicPacket((KSPIN_LOCK *)MiniportAdapterHandle);
    }
  }
  ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x10u, v4, v5);
  ExFreePoolWithTag(P, 0);
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_q(0x79u, &WPP_d12fdc15689b3d7ca51f3c07eaaf9a95_Traceguids, (__int64)MiniportAdapterHandle);
}
