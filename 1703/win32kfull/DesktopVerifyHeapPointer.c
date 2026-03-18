/*
 * XREFs of DesktopVerifyHeapPointer @ 0x1C00E15F8
 * Callers:
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00E1584 (DesktopVerifyHeapLargeUnicodeString.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapPointer(__int64 a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR result; // rax

  v2 = *(_QWORD *)(a1 + 128);
  if ( a2 < v2 || (result = v2 + *(unsigned int *)(a1 + 136), a2 >= result) )
    KeBugCheckEx(0x164u, 6uLL, a2, v2, *(unsigned int *)(a1 + 136));
  return result;
}
