/*
 * XREFs of ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18015A81C
 * Callers:
 *     ??$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@PEAVCortanaSharedExperienceManager@@P85@EAAJI_K_J@Z@Details@WRL@Microsoft@@YAJPEAPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@$$QEAPEAVCortanaSharedExperienceManager@@$$QEAP87@EAAJI_K_J@Z@Z @ 0x18015A5FC (--$MakeAndInitialize@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@V1234@P.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800F5DFC (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     wistd::function_long___cdecl(unsigned_int_unsigned___int64___int64)_::operator___lambda_548464be655e837fe70a6c635a8d08fa___ @ 0x180159BF4 (wistd--function_long___cdecl(unsigned_int_unsigned___int64___int64)_--operator___lambda_548464be.c)
 *     ??$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager@@PEAVWeakRef@01@@Z @ 0x180159D80 (--$AsWeak@VCortanaSharedExperienceManager@@@WRL@Microsoft@@YAJPEAVCortanaSharedExperienceManager.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler::RuntimeClassInitialize<CortanaSharedExperienceManager>(
        __int64 a1,
        CTaskContinuityActivitiesExperienceManager *a2,
        __int128 *a3)
{
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  volatile int *v9; // rdx
  void (*v10)(void); // rax
  __int64 v11; // rcx
  void (*v12)(void); // rax
  __int64 *v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v16; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = (__int64 *)-2LL;
  v18 = 0LL;
  v14[0] = &v18;
  v6 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v14);
  v7 = Microsoft::WRL::AsWeak<CortanaSharedExperienceManager>(a2, v6);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15[0] = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v15[1] = (__int64)a2;
    v16 = *a3;
    wistd::function_long___cdecl_unsigned_int_unsigned___int64___int64__::operator___lambda_548464be655e837fe70a6c635a8d08fa___(
      a1 + 40,
      (__int64)v15);
    if ( v15[0] )
    {
      v10 = *(void (**)(void))(*(_QWORD *)v15[0] + 16LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          v15[0],
          v9);
      else
        v10();
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\handlers.h",
      (const char *)(unsigned int)v7);
  }
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
    if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v11,
        v9);
    else
      v12();
  }
  return v8;
}
