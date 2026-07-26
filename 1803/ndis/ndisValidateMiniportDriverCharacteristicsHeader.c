/*
 * XREFs of ndisValidateMiniportDriverCharacteristicsHeader @ 0x1C00C2188
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_DDDDDDDD @ 0x1C0050A50 (WPP_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C00FC02C (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int Data2_low; // esi
  __int64 v7; // rbx
  unsigned int v10; // edi
  const DEVPROPKEY *v11; // rax

  Data2_low = 0;
  v7 = a1;
  LOBYTE(a1) = *(_BYTE *)(a1 + 4);
  v10 = 152;
  *a5 = 0;
  if ( __PAIR16__(*(_BYTE *)(v7 + 5), a1) == 20742 && (unsigned __int16)(*(_WORD *)(v7 + 2) - 152) <= 7u )
  {
    *a3 = 6;
    *a4 = 70;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_dd(0x1Fu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, 6, 81);
    if ( a2 )
      NdisTraceLoggingLogoFailure(a1, a2, *(unsigned __int16 *)(v7 + 2));
  }
  else
  {
    *a3 = (unsigned __int8)a1;
    *a4 = *(unsigned __int8 *)(v7 + 5);
  }
  v11 = (const DEVPROPKEY *)&unk_1C0083050;
  while ( (*a4 | (*a3 << 16)) != v11->fmtid.Data1 )
  {
    v11 = (const DEVPROPKEY *)((char *)v11 + 8);
    if ( v11 == &DEVPKEY_Device_InstanceId )
      goto LABEL_8;
  }
  Data2_low = LOBYTE(v11->fmtid.Data2);
LABEL_8:
  switch ( Data2_low )
  {
    case 1u:
      v10 = 136;
      goto LABEL_12;
    case 2u:
LABEL_10:
      if ( *(_BYTE *)v7 != 0x8A || *(unsigned __int8 *)(v7 + 1) < Data2_low )
      {
LABEL_25:
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_DDDDDDDD(0x21u, *(unsigned __int8 *)(v7 + 1), 138, Data2_low);
        return 3221291013LL;
      }
LABEL_12:
      if ( *(unsigned __int16 *)(v7 + 2) >= v10 )
      {
        *a5 = v10;
        return 0LL;
      }
      goto LABEL_25;
    case 3u:
      v10 = 160;
      goto LABEL_10;
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    WPP_SF_dd(
      0x20u,
      &WPP_7638764ccf46397224acdca5d7787036_Traceguids,
      *(unsigned __int8 *)(v7 + 4),
      *(unsigned __int8 *)(v7 + 5));
  return 3221291012LL;
}
