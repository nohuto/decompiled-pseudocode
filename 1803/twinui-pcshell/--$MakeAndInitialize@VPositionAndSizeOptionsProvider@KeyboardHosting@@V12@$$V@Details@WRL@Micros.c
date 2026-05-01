/*
 * XREFs of ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x18025088C
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x180252930 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x180249C78 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x180251610 (--0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(
        volatile int **a1)
{
  unsigned int v2; // ebx
  volatile int *v3; // rax
  volatile int *v4; // rax
  volatile int *v5; // r10
  volatile int *v7; // [rsp+40h] [rbp+8h] BYREF
  volatile int *v8; // [rsp+48h] [rbp+10h]
  volatile int *v9; // [rsp+50h] [rbp+18h]

  v2 = 0;
  *a1 = 0LL;
  v3 = (volatile int *)operator new(0xD8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  v8 = v3;
  if ( v3 )
  {
    v9 = v3;
    v4 = (volatile int *)KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider((KeyboardHosting::PositionAndSizeOptionsProvider *)v3);
    v5 = v4;
    v7 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
