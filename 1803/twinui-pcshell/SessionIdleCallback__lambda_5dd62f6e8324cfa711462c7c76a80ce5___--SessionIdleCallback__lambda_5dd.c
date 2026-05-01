/*
 * XREFs of SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___ @ 0x1803097CC
 * Callers:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&___ptr64_ @ 0x180309744 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____l.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  void (*v6)(void); // rax

  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveSessionIdleNotification>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = off_18034B8B8;
  v4 = *a2;
  *(_QWORD *)(a1 + 16) = *a2;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(_QWORD *)(a1 + 24) = a2[1];
  v5 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v5,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      v6();
  }
  return a1;
}
