/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801C84B0
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801C99C0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VViewWrapperBase@@UILegacyViewWrapper.c)
 *     ??_ELegacyViewWrapper@@UEAAPEAXI@Z @ 0x1801C9B70 (--_ELegacyViewWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 544);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  ViewWrapperBase::~ViewWrapperBase((ViewWrapperBase *)(a1 + 8), a2);
}
