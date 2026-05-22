/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E150
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180020440 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDis_ea_180020440.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800204C0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDis_ea_1800204C0.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180020550 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDis_ea_180020550.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
