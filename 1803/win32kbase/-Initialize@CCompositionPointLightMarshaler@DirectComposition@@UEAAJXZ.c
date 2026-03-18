/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C01566F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::Initialize(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_QWORD *)this + 10) = 1065353216LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 32) = 1120403456;
  result = 0LL;
  *(_OWORD *)((char *)this + 92) = xmmword_1C01849C0;
  *((_BYTE *)this + 72) = 1;
  *((_DWORD *)this + 33) = 1065353216;
  return result;
}
