/*
 * XREFs of ?IsCapturing@MPCInputProviderBase@@UEBA_NXZ @ 0x180043FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall MPCInputProviderBase::IsCapturing(MPCInputProviderBase *this)
{
  return *((_QWORD *)this + 279) != 0LL;
}
