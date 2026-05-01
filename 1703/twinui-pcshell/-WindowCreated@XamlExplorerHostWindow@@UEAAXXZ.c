/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x18012B010
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801292C4 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ @ 0x1801293F8 (-get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHostWindow::WindowCreated(RTL_SRWLOCK *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  void **v5; // r9
  __int64 v6; // rsi
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  void *v10; // rbx
  PVOID Ptr; // rcx
  PVOID v12; // rcx
  PVOID v13; // rcx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+58h] [rbp+10h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h]
  __int64 v19; // [rsp+68h] [rbp+20h]

  wil::srwlock::lock_exclusive(this + 8, &SRWLock);
  v6 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v3, v2, v4, v5);
  v18 = v6;
  v16 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v6)(
         v6,
         &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f,
         &v16);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *))(*(_QWORD *)v16 + 24LL))(v16, this + 7);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = Windows::UI::Core::ICoreWindow::Dispatcher::get(v6);
  v10 = (void *)v9;
  v19 = v9;
  if ( (PVOID)v9 != this[6].Ptr )
  {
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    Ptr = this[6].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[6].Ptr = v10;
  }
  if ( v10 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  v12 = this[5].Ptr;
  if ( v12 )
  {
    (*(void (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)v12 + 24LL))(v12, this);
    v13 = this[5].Ptr;
    if ( v13 )
    {
      this[5].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
