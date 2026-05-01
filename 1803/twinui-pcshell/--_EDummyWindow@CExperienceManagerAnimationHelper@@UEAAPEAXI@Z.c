/*
 * XREFs of ??_EDummyWindow@CExperienceManagerAnimationHelper@@UEAAPEAXI@Z @ 0x180308F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CExperienceManagerAnimationHelper::DummyWindow *__fastcall CExperienceManagerAnimationHelper::DummyWindow::`vector deleting destructor'(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, volatile int *); // rax

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    v5 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v4,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      ((void (__fastcall *)(__int64))v5)(v4);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
