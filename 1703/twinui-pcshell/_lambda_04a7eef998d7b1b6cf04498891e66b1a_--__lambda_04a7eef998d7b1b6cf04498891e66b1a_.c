/*
 * XREFs of _lambda_04a7eef998d7b1b6cf04498891e66b1a_::__lambda_04a7eef998d7b1b6cf04498891e66b1a_ @ 0x180012A0C
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$3 @ 0x180198601 (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$3.c)
 *     _CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a____::_1_::dtor$0 @ 0x180198B41 (_CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a____--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 */

__int64 __fastcall lambda_04a7eef998d7b1b6cf04498891e66b1a_::__lambda_04a7eef998d7b1b6cf04498891e66b1a_(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
