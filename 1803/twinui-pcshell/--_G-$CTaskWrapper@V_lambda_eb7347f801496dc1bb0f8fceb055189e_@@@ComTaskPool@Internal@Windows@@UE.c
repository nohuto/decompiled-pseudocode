/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_eb7347f801496dc1bb0f8fceb055189e_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180295550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180010B90 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_ @ 0x180295454 (_lambda_eb7347f801496dc1bb0f8fceb055189e_--__lambda_eb7347f801496dc1bb0f8fceb055189e_.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_eb7347f801496dc1bb0f8fceb055189e_>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v4; // rcx

  lambda_eb7347f801496dc1bb0f8fceb055189e_::__lambda_eb7347f801496dc1bb0f8fceb055189e_((__int64 *)(a1 + 16));
  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v4);
  return a1;
}
