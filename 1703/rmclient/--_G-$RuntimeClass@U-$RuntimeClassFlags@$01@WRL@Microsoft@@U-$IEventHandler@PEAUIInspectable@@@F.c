/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AF30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ @ 0x1800018C8 (-InternalRelease@-$ComPtr@UIRestrictedErrorInfo@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18000728C (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  *((_DWORD *)Block + 9) = -1073741823;
  Microsoft::WRL::ComPtr<IRestrictedErrorInfo>::InternalRelease((__int64 *)Block + 3);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
