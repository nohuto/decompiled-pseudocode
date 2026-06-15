/*
 * XREFs of ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x180108FD4
 * Callers:
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x180109924 (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ?CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z @ 0x180109504 (-CollectExceptionDataAndContinue@@YAKPEAU_EXCEPTION_POINTERS@@@Z.c)
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
