/*
 * XREFs of ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140006090
 * Callers:
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001E870 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001E880 (-AddRef@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 24));
}
