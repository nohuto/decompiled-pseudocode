/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014A8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::Initialize(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_QWORD *)this + 9) = 1065353216LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 30) = 1120403456;
  result = 0LL;
  *(_OWORD *)((char *)this + 84) = xmmword_1C016F138;
  *((_DWORD *)this + 31) = 1065353216;
  return result;
}
