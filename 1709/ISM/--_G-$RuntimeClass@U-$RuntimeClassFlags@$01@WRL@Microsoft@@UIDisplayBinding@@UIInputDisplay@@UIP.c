/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDisplayBinding@@UIInputDisplay@@UIPropertyChangedListener@Input@@UIInputDisplayOrientationListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800201D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDisplayBinding,IInputDisplay,Input::IPropertyChangedListener,IInputDisplayOrientationListener>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[9] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
