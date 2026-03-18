/*
 * XREFs of VerifierIoInitializeWorkItem @ 0x140767D60
 * Callers:
 *     <none>
 * Callees:
 *     IoSizeofWorkItem @ 0x14002F540 (IoSizeofWorkItem.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 *     MmIsNonPagedSystemAddressValid @ 0x140211F20 (MmIsNonPagedSystemAddressValid.c)
 *     VfUtilCheckKernelAddress @ 0x140765068 (VfUtilCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierIoInitializeWorkItem(__int64 a1, void *a2)
{
  ULONG v4; // eax

  v4 = IoSizeofWorkItem();
  VfUtilCheckKernelAddress((unsigned __int64)a2, v4);
  if ( MmIsSessionAddress((unsigned __int64)a2) )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  if ( (MmVerifierData & 2) != 0 && !MmIsNonPagedSystemAddressValid(a2) )
    VerifierBugCheckIfAppropriate(0xC4u, 0LL);
  return ((__int64 (__fastcall *)(__int64, void *))pXdvIoInitializeWorkItem)(a1, a2);
}
