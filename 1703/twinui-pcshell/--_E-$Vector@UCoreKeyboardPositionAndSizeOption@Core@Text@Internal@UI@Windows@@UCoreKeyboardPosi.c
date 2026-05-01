/*
 * XREFs of ??_E?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@?1??OnShellRequestedShow@TabTipAdapter@@UEAAJXZ@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@?1??89@UEAAJXZ@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@MEAAPEAXI@Z @ 0x18016FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall ___E__Vector_UCoreKeyboardPositionAndSizeOption_Core_Text_Internal_UI_Windows__UCoreKeyboardPositionAndSizeOptionEquality__1__OnShellRequestedShow_TabTipAdapter__UEAAJXZ_UCoreKeyboardPositionAndSizeOptionLifetimeTraits__1__89_UEAAJXZ_U__DefaultVectorOptions_UCoreKeyboardPositionAndSizeOption_Core_Text_Internal_UI_Windows___4Collections_Foundation_6__Internal_Collections_Foundation_Windows__MEAAPEAXI_Z(
        _QWORD *Block,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx

  *Block = &off_1801BB4E0;
  Block[1] = off_1801BB4C0;
  *((_DWORD *)Block + 10) = 0;
  *((_DWORD *)Block + 11) = 0;
  *((_DWORD *)Block + 12) = 0;
  ++*((_DWORD *)Block + 22);
  Block[2] = off_1801BB488;
  v4 = (void *)Block[7];
  Block[7] = 0LL;
  if ( v4 )
    free(v4);
  v5 = Block[4];
  if ( v5 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v5));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
