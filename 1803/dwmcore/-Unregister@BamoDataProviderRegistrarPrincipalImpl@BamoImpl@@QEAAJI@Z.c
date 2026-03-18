/*
 * XREFs of ?Unregister@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x18016935C
 * Callers:
 *     ?Thunk_Unregister_5@?$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180169350 (-Thunk_Unregister_5@-$IDataProviderRegistrarPrincipal_Receive@VBamoDataProviderRegistrarPrincipa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z @ 0x180152E0C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801532EC (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x1801538C4 (-GetItem@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154E44 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::Unregister(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        unsigned int a2)
{
  _QWORD *v4; // rbx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  Microsoft::BamoImpl::BamoConnectionImpl *v9; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v11; // rdi
  char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_QWORD *)*((_QWORD *)this + 4);
  v5 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL);
  while ( v4 && *(_DWORD *)(v4[5] + 36LL) != v5 )
    v4 = (_QWORD *)v4[6];
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 24LL))(v4);
  v7 = v4[5];
  v8 = v6;
  v9 = *(Microsoft::BamoImpl::BamoConnectionImpl **)(*(_QWORD *)(v7 + 24) + 24LL);
  Item = Microsoft::BamoImpl::BamoConnectionImpl::GetItem(v9, *(unsigned int *)(v7 + 36), a2);
  v11 = Item;
  if ( Item )
    v12 = (char *)Item - 16;
  else
    v12 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v19, v9);
  v13 = (*(__int64 (__fastcall **)(char *, __int64, char *))(*((_QWORD *)this - 2) + 80LL))((char *)this - 16, v8, v12);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\bamo\\dataprovider.bamo.details.inl",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v16 = v19;
  if ( v19 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 96));
    *(_DWORD *)(v16 + 136) = GetCurrentThreadId();
  }
  if ( v11 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v11, v14, v15);
  return 0LL;
}
