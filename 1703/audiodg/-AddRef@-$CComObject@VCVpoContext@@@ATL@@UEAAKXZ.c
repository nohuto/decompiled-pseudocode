/*
 * XREFs of ?AddRef@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400446F0
 * Callers:
 *     ?AddRef@?$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x14001F3A0 (-AddRef@-$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
}
