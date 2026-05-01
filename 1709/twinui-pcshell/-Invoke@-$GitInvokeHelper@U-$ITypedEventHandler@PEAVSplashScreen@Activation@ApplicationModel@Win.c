/*
 * XREFs of ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@4@PEAUIInspectable@@@Z @ 0x180073230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr,2>::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v10 = 0LL;
  v7 = *(unsigned int *)(a1 + 64);
  if ( (_DWORD)v7 )
  {
    v8 = *(_DWORD *)(a1 + 68);
    if ( v8 < 0 )
      goto LABEL_7;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)qword_1802BAD70 + 40LL))(
           qword_1802BAD70,
           v7,
           &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
           &v10);
    v6 = v10;
  }
  else
  {
    v8 = -2147024809;
  }
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2, a3);
    v6 = v10;
  }
LABEL_7:
  if ( v6 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)v8;
}
