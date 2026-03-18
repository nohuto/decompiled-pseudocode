/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x14022CC78
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x14071F3A0 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x14022F044 (HvlSetupLiveDumpBuffer.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1402304BC (VslSetupLiveDumpBufferInSk.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  if ( VslVsmEnabled )
    return VslSetupLiveDumpBufferInSk(a1, a2, 64, a4, a5, a6);
  else
    return HvlSetupLiveDumpBuffer(a1, a2, 64, a4, a5, a6);
}
