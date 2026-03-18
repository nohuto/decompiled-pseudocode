/*
 * XREFs of ?Initialize@CCompositionDistantLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C014A230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionDistantLightMarshaler::Initialize(
        DirectComposition::CCompositionDistantLightMarshaler *this)
{
  __int64 result; // rax

  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 26) = -1082130432;
  result = 0LL;
  *((_DWORD *)this + 27) = 1065353216;
  *(_OWORD *)((char *)this + 72) = xmmword_1C016F138;
  return result;
}
