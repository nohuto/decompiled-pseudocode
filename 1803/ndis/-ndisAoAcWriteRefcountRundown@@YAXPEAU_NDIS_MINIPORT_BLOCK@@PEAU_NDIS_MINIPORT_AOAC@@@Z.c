/*
 * XREFs of ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00734E4
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0073678 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     McTemplateK0xq @ 0x1C0049664 (McTemplateK0xq.c)
 *     McTemplateK0jqx @ 0x1C0065DD8 (McTemplateK0jqx.c)
 *     McTemplateK0xqq @ 0x1C0075778 (McTemplateK0xqq.c)
 */

void __fastcall ndisAoAcWriteRefcountRundown(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_AOAC *a2)
{
  _GUID *p_InterfaceGuid; // rbx
  unsigned int v5; // esi
  int *ComponentRefCounts; // r14
  __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-18h]

  p_InterfaceGuid = &a1->InterfaceGuid;
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
    McTemplateK0jqx(
      (__int64)a1,
      &NicActiveRefRundownBegin,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      a1->IfIndex,
      a1->NetLuid.Value);
  v5 = 0;
  ComponentRefCounts = a2->ComponentRefCounts;
  do
  {
    v7 = (unsigned int)*ComponentRefCounts;
    if ( (int)v7 > 0 && (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0xqq(v7, (_DWORD)a2, (_DWORD)a1 + 4032, a1->NetLuid.Value, v5, *ComponentRefCounts);
    ++v5;
    ++ComponentRefCounts;
  }
  while ( v5 < 0x11 );
  if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
  {
    LODWORD(v8) = a2->StopFlags.Value;
    McTemplateK0xq(v7, &NicActiveRefRundownEnd, p_InterfaceGuid, a1->NetLuid.Value, v8);
  }
}
