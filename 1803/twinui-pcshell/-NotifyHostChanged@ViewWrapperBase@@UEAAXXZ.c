/*
 * XREFs of ?NotifyHostChanged@ViewWrapperBase@@UEAAXXZ @ 0x1800529A0
 * Callers:
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4_____lambda_10764c1d64f4a25c831c35f7f52c83d4___ @ 0x18000E494 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_10764c1d64f4a.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ViewWrapperBase::NotifyHostChanged(ViewWrapperBase *this)
{
  char *v1; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  signed int v6; // edi
  volatile int *v7; // rdx
  void (__fastcall *v8)(_QWORD *); // rax
  char *v9; // [rsp+28h] [rbp-20h] BYREF
  char *v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp+18h]

  v1 = (char *)this - 8;
  if ( this != (ViewWrapperBase *)8 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 8LL))((char *)this - 8);
  v9 = v1;
  v10 = v1;
  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_10764c1d64f4a25c831c35f7f52c83d4_____lambda_10764c1d64f4a25c831c35f7f52c83d4___(
         &v12,
         &v9);
  v3 = (_QWORD *)*v2;
  v14 = (_QWORD *)*v2;
  *v2 = 0LL;
  v4 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CurrentThreadId = GetCurrentThreadId();
  v6 = v3 == 0LL ? 0x8007000E : 0;
  if ( v3 )
  {
    v13 = 0LL;
    v6 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0, 0, CurrentThreadId);
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v13);
    v8 = *(void (__fastcall **)(_QWORD *))(*v3 + 16LL);
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        v3,
        v7);
    else
      v8(v3);
  }
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x365,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v6,
      -2);
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 16LL))(v10);
}
