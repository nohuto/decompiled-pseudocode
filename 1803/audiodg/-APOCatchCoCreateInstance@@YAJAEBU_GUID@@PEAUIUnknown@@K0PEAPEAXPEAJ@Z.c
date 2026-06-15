/*
 * XREFs of ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x1400158B4
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 * Callees:
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x140046854 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
 */

__int64 __fastcall APOCatchCoCreateInstance(
        const struct _GUID *a1,
        struct IUnknown *a2,
        __int64 a3,
        const struct _GUID *a4,
        LPVOID *ppv,
        struct _EXCEPTION_POINTERS *a6)
{
  LODWORD(a6->ExceptionRecord) = CoCreateInstance(a1, a2, 1u, &GUID_00000000_0000_0000_c000_000000000046, ppv);
  return 0LL;
}
