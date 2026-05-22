/*
 * XREFs of ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x180036930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsCapturing(MPCInputProviderBase *this)
{
  return *((_QWORD *)this + 63) != 0LL;
}
