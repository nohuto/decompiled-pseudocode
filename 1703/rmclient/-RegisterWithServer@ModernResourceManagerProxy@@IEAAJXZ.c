/*
 * XREFs of ?RegisterWithServer@ModernResourceManagerProxy@@IEAAJXZ @ 0x180003AC0
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800030C0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@Z @ 0x180003BD0 (-GetMemoryUsageLevel@ModernResourceManagerProxy@@QEAAJPEAW4AppMemoryUsageLevel@System@Windows@@@.c)
 *     ?GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z @ 0x180003C88 (-GetMemoryUsageLimit@ModernResourceManagerProxy@@QEAAJPEA_K@Z.c)
 *     ?RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_PAYLOAD@@@ZP6AX_K2@Z@Z @ 0x180003D40 (-RegisterCommitMemoryCallback@ModernResourceManagerProxy@@QEAAJP6AXPEAU_RM_COMMIT_LEVEL_CHANGE_P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceManagerProxy::RegisterWithServer(ModernResourceManagerProxy *this)
{
  int Pointer; // ebx
  int v4; // eax
  int v5; // [rsp+40h] [rbp-18h]

  if ( *((_QWORD *)this + 7) )
    return 0;
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo,
                            0,
                            0LL,
                            *((_QWORD *)this + 2),
                            (char *)this + 40,
                            (char *)this + 48).Pointer;
  if ( Pointer >= 0 )
  {
    v4 = RtlSubscribeWnfStateChangeNotification(
           (char *)this + 56,
           *((_QWORD *)this + 5),
           0LL,
           ModernResourceManagerProxy::CommitMemoryLevelChangeCallback,
           this,
           0LL,
           0,
           0,
           Pointer);
    if ( v4 >= 0 )
    {
      v4 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 64,
             *((_QWORD *)this + 6),
             0LL,
             ModernResourceManagerProxy::CommitMemoryLimitChangeCallback,
             this,
             0LL,
             0,
             0,
             v5);
      if ( v4 >= 0 )
        return 0;
    }
    Pointer = v4 | 0x10000000;
  }
  if ( *((_QWORD *)this + 7) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 7) = 0LL;
  }
  if ( *((_QWORD *)this + 8) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 8) = 0LL;
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  return (unsigned int)Pointer;
}
