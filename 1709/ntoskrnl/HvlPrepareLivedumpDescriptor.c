/*
 * XREFs of HvlPrepareLivedumpDescriptor @ 0x1401EFC68
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1406BA400 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     HvlSetupLiveDumpBuffer @ 0x1401F14C8 (HvlSetupLiveDumpBuffer.c)
 *     VslSetupLiveDumpBufferInSk @ 0x1401F299C (VslSetupLiveDumpBufferInSk.c)
 */

__int64 __fastcall HvlPrepareLivedumpDescriptor(int a1, int a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  if ( VslVsmEnabled )
    return VslSetupLiveDumpBufferInSk(a1, a2, 64, a4, a5, a6);
  else
    return HvlSetupLiveDumpBuffer(a1, a2, 64, a4, a5, a6);
}
