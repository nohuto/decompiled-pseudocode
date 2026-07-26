/*
 * XREFs of ndisUpdateMinimumStackVersion @ 0x1C00BDDB8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00F4134 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00BDE4C (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ndisDisableRsc @ 0x1C00ED360 (ndisDisableRsc.c)
 */

void __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // di
  unsigned __int8 MinimumNdisMinorVersion; // bl
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rdx
  bool v8; // cc
  __int64 v9; // rax

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  LOBYTE(v7) = *(_BYTE *)(v6 + 3156);
  if ( MinimumNdisMajorVersion == (_BYTE)v7 && MinimumNdisMinorVersion == *(_BYTE *)(v6 + 3157) )
    return;
  LOBYTE(v5) = 30;
  v8 = MinimumNdisMajorVersion <= 6u;
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_7;
  if ( MinimumNdisMajorVersion == 6 )
  {
    if ( MinimumNdisMinorVersion < 0x1Eu )
    {
LABEL_10:
      v8 = MinimumNdisMajorVersion <= 6u;
      goto LABEL_11;
    }
LABEL_7:
    if ( (unsigned __int8)v7 <= 6u && ((unsigned __int8)v7 != 6 || *(_BYTE *)(v6 + 3157) < 0x1Eu) )
    {
      ndisDisableRsc(v6, v7, 6LL, v5);
      return;
    }
    goto LABEL_10;
  }
LABEL_11:
  if ( v8
    && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu)
    && ((unsigned __int8)v7 > 6u || (unsigned __int8)v7 == 6 && *(_BYTE *)(v6 + 3157) >= 0x1Eu) )
  {
    v9 = *(_QWORD *)(v6 + 4120);
    if ( v9 )
      *(_BYTE *)(v9 + 5) = 0;
  }
}
