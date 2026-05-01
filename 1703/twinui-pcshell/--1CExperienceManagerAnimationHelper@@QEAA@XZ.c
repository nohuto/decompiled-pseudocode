/*
 * XREFs of ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x18018C008
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x180091150 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z @ 0x1800B63E0 (--_ECVirtualTouchpadExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECortanaDesktopExperienceView@@UEAAPEAXI@Z @ 0x1800C9030 (--_ECortanaDesktopExperienceView@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UITaskbarLayoutParserTest@@UIPWSLayo.c)
 */

void __fastcall CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper(
        CExperienceManagerAnimationHelper *this)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    DestroyWindow(*(HWND *)(v2 + 24));
  v3 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,IPWSLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v3);
  }
}
