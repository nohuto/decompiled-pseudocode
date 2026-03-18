/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00F22F0
 * Callers:
 *     ReferenceClass @ 0x1C0073510 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C0073DB8 (InternalRegisterClassEx.c)
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, void *a2, __int64 a3)
{
  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2);
  else
    Win32FreePool(a2, a2, a3);
}
