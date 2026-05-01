/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x18012AE80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180129360 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce___ @ 0x18012B194 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(XamlExplorerHostWindow *this)
{
  void *v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  XamlExplorerHostWindow *v10; // [rsp+68h] [rbp+10h]
  __int64 v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 8, &SRWLock);
  if ( *((_QWORD *)this + 6) )
  {
    v10 = this;
    (*(void (__fastcall **)(XamlExplorerHostWindow *))(*(_QWORD *)this + 8LL))(this);
    v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v11 = (__int64)v2;
    v8[0] = this;
    v8[1] = this;
    (*(void (__fastcall **)(XamlExplorerHostWindow *))(*(_QWORD *)this + 8LL))(this);
    v3 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_c684876424e85aad1b0ea528e88729ce___(v2, v8);
    v11 = v3;
    v4 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 6), 0LL, v3);
    v5 = v4;
    v12 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v5);
    (*(void (__fastcall **)(XamlExplorerHostWindow *, __int64))(*(_QWORD *)this + 16LL))(this, v5);
    v6 = 0;
  }
  else
  {
    v6 = -2147019873;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v6;
}
