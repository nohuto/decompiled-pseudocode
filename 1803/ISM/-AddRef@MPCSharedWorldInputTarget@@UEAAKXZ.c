/*
 * XREFs of ?AddRef@MPCSharedWorldInputTarget@@UEAAKXZ @ 0x1800054B0
 * Callers:
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800075A0 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@TapProcessor@@WBI@EAAKXZ @ 0x1800075F0 (-AddRef@TapProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180007650 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCSharedWorldInputTarget::AddRef(MPCSharedWorldInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
