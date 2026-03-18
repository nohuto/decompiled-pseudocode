/*
 * XREFs of ?Initialize@CInteractionMarshaler@DirectComposition@@UEAAJXZ @ 0x1C000EC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::Initialize(DirectComposition::CInteractionMarshaler *this)
{
  *((_DWORD *)this + 48) = (unsigned int)PsGetCurrentProcessId();
  return 0LL;
}
