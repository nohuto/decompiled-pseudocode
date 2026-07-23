/*
 * XREFs of sub_18004C4D8 @ 0x18004C4D8
 * Callers:
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003BD44 @ 0x18003BD44 (sub_18003BD44.c)
 *     sub_18003C89C @ 0x18003C89C (sub_18003C89C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18004C564 @ 0x18004C564 (sub_18004C564.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 */

void __fastcall sub_18004C4D8(__int64 a1)
{
  _OBJECT_BOUNDARY_DESCRIPTOR *v2; // rcx

  v2 = *(_OBJECT_BOUNDARY_DESCRIPTOR **)(a1 + 8);
  if ( v2 )
  {
    RtlDeleteBoundaryDescriptor(v2);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
