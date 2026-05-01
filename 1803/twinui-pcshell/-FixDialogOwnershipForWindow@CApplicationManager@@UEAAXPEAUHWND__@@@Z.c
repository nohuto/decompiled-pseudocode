/*
 * XREFs of ?FixDialogOwnershipForWindow@CApplicationManager@@UEAAXPEAUHWND__@@@Z @ 0x1800436E0
 * Callers:
 *     _lambda_0d74f069fa796de4b01adcedcd59308d_::operator() @ 0x18000EA38 (_lambda_0d74f069fa796de4b01adcedcd59308d_--operator().c)
 *     _lambda_8e77f3627fbb508724cf2b62e627d849_::operator() @ 0x180010D50 (_lambda_8e77f3627fbb508724cf2b62e627d849_--operator().c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComPoolTask@23@@Z @ 0x1800462B0 (-s_QueuePoolTask@ComTaskPool@Internal@Windows@@CAJW4TaskApartment@23@W4TaskOptions@23@KPEAUIComP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplicationManager::FixDialogOwnershipForWindow(CApplicationManager *this, HWND a2)
{
  __int64 v3; // rdi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  DWORD CurrentThreadId; // eax
  signed int v8; // esi
  volatile int *v9; // rdx
  void (__fastcall *v10)(_QWORD *); // rax
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = -2;
  v3 = *((_QWORD *)this + 67);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    v4 = 0LL;
    v5 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v5);
      *v6 = off_18031B910;
      v6[2] = a2;
      v6[3] = v3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      v4 = v6;
    }
    CurrentThreadId = GetCurrentThreadId();
    v8 = v4 == 0LL ? 0x8007000E : 0;
    if ( v4 )
    {
      v8 = Windows::Internal::ComTaskPool::s_QueuePoolTask(0LL, 0LL, CurrentThreadId, v4, -2LL);
      v10 = *(void (__fastcall **)(_QWORD *))(*v4 + 16LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
          v4,
          v9);
      else
        v10(v4);
    }
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEE0,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v8,
        v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
