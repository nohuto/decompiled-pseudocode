/*
 * XREFs of ExSetResourceOwnerPointer @ 0x1401469F0
 * Callers:
 *     CcSetBcbOwnerPointer @ 0x14065E650 (CcSetBcbOwnerPointer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointer(PERESOURCE Resource, PVOID OwnerPointer)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer, 0);
}
