/*
 * XREFs of ?AddDataSource@BamoDataProviderProxyImpl@BamoImpl@@QEAAJI@Z @ 0x18016C298
 * Callers:
 *     ?Thunk_AddDataSource_5@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18016C960 (-Thunk_AddDataSource_5@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801532EC (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1801538C4 (-GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::AddDataSource(
        BamoImpl::BamoDataProviderProxyImpl *this,
        unsigned int a2)
{
  __int64 v2; // r8
  __int64 v4; // rdx
  Microsoft::BamoImpl::BamoConnectionImpl *v5; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v7; // rdi
  char *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  v4 = *((_QWORD *)this + 2);
  v5 = *(Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(v4 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BamoConnectionImpl::GetItem(v5, *(unsigned int *)(v4 + 36), v2);
  v7 = Item;
  if ( Item )
    v8 = (char *)Item - 16;
  else
    v8 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v15, v5);
  v9 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16, v8);
  v12 = v15;
  v13 = v9;
  if ( v15 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v15 + 96));
    *(_DWORD *)(v12 + 136) = GetCurrentThreadId();
  }
  if ( v7 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v7, v10, v11);
  return v13;
}
