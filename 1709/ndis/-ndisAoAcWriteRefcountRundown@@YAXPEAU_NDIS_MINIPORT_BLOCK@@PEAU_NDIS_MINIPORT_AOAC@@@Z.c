/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072C74
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072E00 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C00482C8 (McTemplateK0xq.c)
 *     McTemplateK0jqx @ 0x1C00652B8 (McTemplateK0jqx.c)
 *     McTemplateK0xqq @ 0x1C0074F24 (McTemplateK0xqq.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  unsigned int v4; // edi
  int *ComponentRefCounts; // rsi
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0jqx(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value);
  v4 = 0;
  ComponentRefCounts = a2->ComponentRefCounts;
  do
  {
    v6 = (unsigned int)*ComponentRefCounts;
    if ( (int)v6 > 0 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0xqq(v6, (_DWORD)a2, (_DWORD)a1 + 4032, a1->NetLuid.Value, v4, *ComponentRefCounts);
    ++v4;
    ++ComponentRefCounts;
  }
  while ( v4 < 0x11 );
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v7) = a2->StopFlags.Value;
    McTemplateK0xq(v6, &NicActiveRefRundownEnd, &a1->InterfaceGuid, a1->NetLuid.Value, v7);
  }
}
