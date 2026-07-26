/*
 * XREFs of ndisUpdateMinimumStackVersion @ 0x1C00BE954
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BC30C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F6D18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00BE9A4 (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ndisDisableRsc @ 0x1C00F0090 (ndisDisableRsc.c)
 */

void __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // di
  unsigned __int8 MinimumNdisMinorVersion; // bl
  __int64 v5; // r8
  __int64 v6; // r11
  unsigned __int8 v7; // cl
  bool v8; // cc
  __int64 v9; // rax

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  v7 = *(_BYTE *)(v6 + 3156);
  if ( MinimumNdisMajorVersion == v7 && MinimumNdisMinorVersion == *(_BYTE *)(v6 + 3157) )
    return;
  LOBYTE(v5) = 30;
  v8 = MinimumNdisMajorVersion <= 6u;
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_7;
  if ( MinimumNdisMajorVersion == 6 )
  {
    if ( MinimumNdisMinorVersion < 0x1Eu )
    {
LABEL_11:
      v8 = MinimumNdisMajorVersion <= 6u;
      goto LABEL_12;
    }
LABEL_7:
    if ( v7 <= 6u && (v7 != 6 || *(_BYTE *)(v6 + 3157) < 0x1Eu) )
    {
      ndisDisableRsc(v6, 6LL, v5);
      return;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v8
    && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu)
    && (v7 > 6u || v7 == 6 && *(_BYTE *)(v6 + 3157) >= 0x1Eu) )
  {
    v9 = *(_QWORD *)(v6 + 4120);
    if ( v9 )
      *(_BYTE *)(v9 + 5) = 0;
  }
}
