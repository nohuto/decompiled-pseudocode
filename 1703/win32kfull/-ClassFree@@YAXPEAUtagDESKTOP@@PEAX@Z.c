/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C003940C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C003573C (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     ReferenceClass @ 0x1C00F4DC0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, void *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2);
  else
    Win32FreePool(a2);
}
