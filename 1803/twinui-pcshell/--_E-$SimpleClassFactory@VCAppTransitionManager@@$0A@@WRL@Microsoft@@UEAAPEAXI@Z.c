/*
 * XREFs of ??_E?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802C3E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ @ 0x180010B90 (--1-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>::`vector deleting destructor'(
        __int64 a1)
{
  void *v2; // rcx
  char v3; // dl

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::~ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>(a1);
  if ( (v3 & 1) != 0 )
    operator delete(v2);
  return a1;
}
