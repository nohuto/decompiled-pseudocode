/*
 * XREFs of ?WindowCreated@XamlExplorerHostWindow@@UEAAXXZ @ 0x1801553F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ @ 0x1801536F4 (-GetForCurrentThread@CoreWindow@Core@UI@Windows@@SAPE$AAV1234@XZ.c)
 *     ?get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ @ 0x180153828 (-get@Dispatcher@ICoreWindow@Core@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@345@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall XamlExplorerHostWindow::WindowCreated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void **v6; // r9
  __int64 v7; // rsi
  __int64 (__fastcall **v8)(__int64, GUID *, __int64 *); // rbx
  __int64 *v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  void *v13; // rbx
  PVOID Ptr; // rcx
  PVOID v15; // rcx
  PVOID v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v20; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h]
  __int64 v22; // [rsp+78h] [rbp+20h]

  v2 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  v20 = v2;
  v7 = Windows::UI::Core::CoreWindow::GetForCurrentThread(v4, v3, v5, v6);
  v21 = v7;
  v19 = 0LL;
  v8 = *(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
  v10 = (*v8)(v7, &GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f, v9);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, RTL_SRWLOCK *))(*(_QWORD *)v19 + 24LL))(v19, this + 9);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v12 = Windows::UI::Core::ICoreWindow::Dispatcher::get(v7);
  v13 = (void *)v12;
  v22 = v12;
  if ( (PVOID)v12 != this[8].Ptr )
  {
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    Ptr = this[8].Ptr;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    this[8].Ptr = v13;
  }
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  v15 = this[7].Ptr;
  if ( v15 )
  {
    (*(void (__fastcall **)(PVOID, RTL_SRWLOCK *))(*(_QWORD *)v15 + 24LL))(v15, this);
    v16 = this[7].Ptr;
    if ( v16 )
    {
      this[7].Ptr = 0LL;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
