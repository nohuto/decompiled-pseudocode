/*
 * XREFs of ??$make_unique_nothrow@UNDIS_BIND_FILTER_LINK@@$$V@wil@@YA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@XZ @ 0x1C001DE40
 * Callers:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C00BBB14 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00C2AB8 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

NDIS_BIND_LINK_BASE **__fastcall wil::make_unique_nothrow<NDIS_BIND_FILTER_LINK,>(NDIS_BIND_LINK_BASE **a1)
{
  NDIS_BIND_LINK_BASE *PoolWithTag; // rax
  NDIS_BIND_LINK_BASE *v3; // rbx

  PoolWithTag = (NDIS_BIND_LINK_BASE *)ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x4C6C4642u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x60uLL);
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE(v3);
    v3[1].BindState.Miniport = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
