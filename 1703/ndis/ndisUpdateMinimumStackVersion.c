/*
 * XREFs of ndisUpdateMinimumStackVersion @ 0x1C00B5194
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B50E4 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00EAB6C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C00B51E4 (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 *     ndisDisableRsc @ 0x1C00E3340 (ndisDisableRsc.c)
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
LABEL_11:
      v8 = MinimumNdisMajorVersion <= 6u;
      goto LABEL_12;
    }
LABEL_7:
    if ( (unsigned __int8)v7 <= 6u && ((unsigned __int8)v7 != 6 || *(_BYTE *)(v6 + 3157) < 0x1Eu) )
    {
      ndisDisableRsc(v6, v7, 6LL, v5);
      return;
    }
    goto LABEL_11;
  }
LABEL_12:
  if ( v8
    && (MinimumNdisMajorVersion != 6 || MinimumNdisMinorVersion < 0x1Eu)
    && ((unsigned __int8)v7 > 6u || (unsigned __int8)v7 == 6 && *(_BYTE *)(v6 + 3157) >= 0x1Eu) )
  {
    v9 = *(_QWORD *)(v6 + 4120);
    if ( v9 )
      *(_BYTE *)(v9 + 5) = 0;
  }
}
