/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0035C2C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C003573C (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C00F4DC0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall ClassAlloc(PVOID *a1, unsigned int a2)
{
  if ( a1 )
    return RtlAllocateHeap(a1[16], 0, a2);
  else
    return (PVOID)Win32AllocPoolWithQuotaZInit(a2, 1818456917LL);
}
