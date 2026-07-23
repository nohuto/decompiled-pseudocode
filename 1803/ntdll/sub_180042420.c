/*
 * XREFs of sub_180042420 @ 0x180042420
 * Callers:
 *     sub_18001F5FC @ 0x18001F5FC (sub_18001F5FC.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003BAE0 @ 0x18003BAE0 (sub_18003BAE0.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_18004213C @ 0x18004213C (sub_18004213C.c)
 *     sub_180042934 @ 0x180042934 (sub_180042934.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 */

void __fastcall sub_180042420(__int64 a1)
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
