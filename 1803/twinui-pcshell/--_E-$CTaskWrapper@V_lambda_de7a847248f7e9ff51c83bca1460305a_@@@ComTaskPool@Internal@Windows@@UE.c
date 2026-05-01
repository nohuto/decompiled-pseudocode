/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_de7a847248f7e9ff51c83bca1460305a_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800547E0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x180016210 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___ @ 0x18003A420 (Windows--Internal--ComTaskPool--QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z @ 0x18003AE00 (--_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_de7a847248f7e9ff51c83bca1460305a_>::`vector deleting destructor'(
        _QWORD *a1,
        volatile int *a2)
{
  char v2; // di
  volatile signed __int64 *v4; // r10
  signed __int64 v5; // rax
  unsigned int v6; // ecx
  signed __int64 v7; // rtt
  ClientWindowReadyForPresentationEventArgs *(__fastcall *v8)(ClientWindowReadyForPresentationEventArgs *, char); // rax
  __int64 (*v9)(); // rax
  __int64 v10; // rcx

  v2 = (char)a2;
  v4 = (volatile signed __int64 *)a1[4];
  if ( v4 )
  {
    a1[4] = 0LL;
    v5 = *((_QWORD *)v4 + 7);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 == 0x7FFFFFFF )
        goto LABEL_16;
      v6 = v5 - 1;
      v7 = v5;
      v5 = _InterlockedCompareExchange64(v4 + 7, v5 - 1, v5);
      if ( v7 == v5 )
        goto LABEL_8;
    }
    v6 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(2 * v5 + 16), a2);
LABEL_8:
    if ( !v6 )
    {
      v8 = *(ClientWindowReadyForPresentationEventArgs *(__fastcall **)(ClientWindowReadyForPresentationEventArgs *, char))(*v4 + 56);
      if ( v8 == ClientWindowReadyForPresentationEventArgs::`vector deleting destructor' )
        ClientWindowReadyForPresentationEventArgs::`vector deleting destructor'(
          (ClientWindowReadyForPresentationEventArgs *)v4,
          1);
      else
        v8((ClientWindowReadyForPresentationEventArgs *)v4, 1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v9 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v9 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v9)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
LABEL_16:
  v10 = a1[3];
  if ( v10 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
