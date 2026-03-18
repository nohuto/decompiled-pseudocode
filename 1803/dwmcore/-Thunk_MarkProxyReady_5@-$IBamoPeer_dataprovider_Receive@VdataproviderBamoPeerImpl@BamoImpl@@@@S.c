/*
 * XREFs of ?Thunk_MarkProxyReady_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154BC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1801538C4 (-GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_MarkProxyReady_5(
        __int64 a1,
        unsigned int **a2)
{
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  Item = Microsoft::BamoImpl::BamoConnectionImpl::GetItem(
           *(Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(a1 + 24) + 24LL),
           *(unsigned int *)(a1 + 36),
           **a2);
  v3 = *(_QWORD *)Item;
  *((_BYTE *)Item + 28) = 1;
  v4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConversationItem *))(v3 + 48))(Item);
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v8,
    *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 24LL) + 24LL));
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
  v6 = v8;
  if ( v8 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 96));
    *(_DWORD *)(v6 + 136) = GetCurrentThreadId();
  }
  return 0LL;
}
