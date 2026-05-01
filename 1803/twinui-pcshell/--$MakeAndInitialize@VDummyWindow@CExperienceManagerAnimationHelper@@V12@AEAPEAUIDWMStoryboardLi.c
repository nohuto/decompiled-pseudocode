/*
 * XREFs of ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x180308E10
 * Callers:
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180309134 (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9DA0 (-InternalRelease@-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKX.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ??0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180308EC0 (--0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180309188 (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
        volatile int **a1,
        struct IDWMStoryboardListener **a2)
{
  CExperienceManagerAnimationHelper::DummyWindow *v4; // rax
  int v5; // ebx
  volatile int *v6; // rdi
  volatile int *v7; // rdx
  volatile int *v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CExperienceManagerAnimationHelper::DummyWindow *)operator new(
                                                           0x28uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile int *)CExperienceManagerAnimationHelper::DummyWindow::DummyWindow(v4);
    v9 = v6;
    v10 = 0LL;
    v5 = CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
           (CExperienceManagerAnimationHelper::DummyWindow *)v6,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          (__int64)v6,
          v7);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
