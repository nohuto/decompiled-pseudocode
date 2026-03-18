/*
 * XREFs of MiUnlockAndDereferenceNestedVad @ 0x14026B5D8
 * Callers:
 *     MiFinishVadDeletion @ 0x1400F0F10 (MiFinishVadDeletion.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiDereferenceVad @ 0x14026B5B8 (MiDereferenceVad.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiUnlockNestedVad @ 0x1405BFC80 (MiUnlockNestedVad.c)
 */

void __fastcall MiUnlockAndDereferenceNestedVad(PVOID P)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = MiDereferenceVad((__int64)P);
  MiUnlockNestedVad(v3);
  if ( v2 == 1 )
    ExFreePoolWithTag(P, 0);
}
