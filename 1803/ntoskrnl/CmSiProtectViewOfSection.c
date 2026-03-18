/*
 * XREFs of CmSiProtectViewOfSection @ 0x1400719A8
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapCreateView @ 0x1404973B0 (HvpViewMapCreateView.c)
 *     HvpViewMapMakeViewRangeUnCOWByCaller @ 0x140513A10 (HvpViewMapMakeViewRangeUnCOWByCaller.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140513BA8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 *     HvpViewMapSealRange @ 0x1405140C0 (HvpViewMapSealRange.c)
 *     HvpViewMapMakeViewRangeUnCOWByPolicy @ 0x140636AD4 (HvpViewMapMakeViewRangeUnCOWByPolicy.c)
 *     HvpViewMapMakeViewRangeInvalid @ 0x140706C7C (HvpViewMapMakeViewRangeInvalid.c)
 * Callees:
 *     ZwProtectVirtualMemory @ 0x1401A7EC0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall CmSiProtectViewOfSection(
        SIZE_T a1,
        void **a2,
        void *a3,
        SIZE_T a4,
        ULONG NewAccessProtection,
        ULONG *a6)
{
  void *v6; // rcx
  SIZE_T v8; // [rsp+40h] [rbp+8h] BYREF
  PVOID v9; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1;
  v6 = *a2;
  v9 = a3;
  v8 = a4;
  return ZwProtectVirtualMemory(v6, &v9, &v8, NewAccessProtection, a6);
}
