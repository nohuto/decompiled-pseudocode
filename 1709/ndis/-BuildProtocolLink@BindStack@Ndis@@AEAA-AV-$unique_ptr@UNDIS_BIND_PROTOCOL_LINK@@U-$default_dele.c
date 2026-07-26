/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00DA234
 * Callers:
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00FAC90 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     ??0NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00DA0F0 (--0NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00DA190 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(__int64 a1, _QWORD *a2, volatile signed __int32 **a3)
{
  char *PoolWithTag; // rax
  char *v6; // rbx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x4C745042u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x58uLL);
    NDIS_BIND_LINK_BASE::NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)v6);
    *((_QWORD *)v6 + 10) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    if ( v6 + 80 != (char *)a3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset((volatile signed __int32 **)v6 + 10, *a3);
    *a2 = v6;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
