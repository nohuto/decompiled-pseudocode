/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x18016C0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x180172B84 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  MessageProxyReconnectAdapter *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 41);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 32) )
    {
      v4 = *(_QWORD *)(v2 + 32);
      if ( v4 )
      {
        *(_QWORD *)(v2 + 32) = 0LL;
        (*(void (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)v4 + 16LL))(v4, a2);
      }
    }
    v5 = *(MessageProxyReconnectAdapter **)(v2 + 40);
    if ( v5 )
      MessageProxyReconnectAdapter::Dispose(v5);
    v6 = *(_QWORD *)(v2 + 40);
    if ( v6 )
    {
      *(_QWORD *)(v2 + 40) = 0LL;
      (*(void (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)v6 + 16LL))(v6, a2);
    }
    v7 = *((_QWORD *)this + 41);
    if ( v7 )
    {
      *((_QWORD *)this + 41) = 0LL;
      (*(void (__fastcall **)(__int64, struct IProfferService *))(*(_QWORD *)v7 + 16LL))(v7, a2);
    }
  }
  return 0LL;
}
