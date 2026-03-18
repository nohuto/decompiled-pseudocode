/*
 * XREFs of VRegEnabledInJob @ 0x14067948C
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1406793FC (VrpShouldOperateOnCall.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 */

unsigned __int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned int v3; // ebx

  result = PsGetCurrentSilo();
  v3 = 0;
  if ( result )
  {
    LOBYTE(v3) = (int)PsGetPermanentSiloContext(result, gVregSiloContextSlot, a1) >= 0;
    return v3;
  }
  return result;
}
