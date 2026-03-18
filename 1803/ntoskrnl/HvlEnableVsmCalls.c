/*
 * XREFs of HvlEnableVsmCalls @ 0x1408CA2C8
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x140172250 (HvlpTryConfigureInterface.c)
 *     HvlpGetVtlCallVa @ 0x1402CA31C (HvlpGetVtlCallVa.c)
 *     VslBindNtIum @ 0x1408DE168 (VslBindNtIum.c)
 */

__int64 __fastcall HvlEnableVsmCalls(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 240);
  if ( (*(_DWORD *)(result + 116) & 0x100) != 0 )
  {
    result = HvlpTryConfigureInterface(a1);
    if ( (int)result >= 0 )
    {
      HvlpGetVtlCallVa();
      return VslBindNtIum();
    }
  }
  return result;
}
