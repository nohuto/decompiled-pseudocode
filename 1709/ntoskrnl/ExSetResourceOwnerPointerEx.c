/*
 * XREFs of ExSetResourceOwnerPointerEx @ 0x1400F1560
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetResourceOwnerPointerEx @ 0x1400F1580 (ExpSetResourceOwnerPointerEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall ExSetResourceOwnerPointerEx(PERESOURCE Resource, PVOID OwnerPointer, ULONG Flags)
{
  if ( (Resource->ReservedLowFlags & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  ExpSetResourceOwnerPointerEx((ULONG_PTR)Resource, (ULONG_PTR)OwnerPointer);
}
