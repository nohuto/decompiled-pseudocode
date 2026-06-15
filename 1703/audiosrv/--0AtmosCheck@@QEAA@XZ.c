/*
 * XREFs of ??0AtmosCheck@@QEAA@XZ @ 0x18003CD08
 * Callers:
 *     ??$Make@VAtmosCheck@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAtmosCheck@@@12@XZ @ 0x180045F24 (--$Make@VAtmosCheck@@@Details@WRL@Microsoft@@YA-AV-$ComPtr@VAtmosCheck@@@12@XZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@VNil@Details@23@V5623@V5623@V5623@V5623@V5623@V5623@V5623@@WRL@Microsoft@@QEAA@XZ @ 0x1800473B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@VNil@Details@23@V5623@V5623.c)
 */

AtmosCheck *__fastcall AtmosCheck::AtmosCheck(AtmosCheck *this)
{
  AtmosCheck *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>();
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &AtmosCheck::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_DWORD *)this + 30) = 14;
  *((_OWORD *)this + 6) = 0uLL;
  return result;
}
