/*
 * XREFs of ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00742C0
 * Callers:
 *     ReferenceClass @ 0x1C0073510 (ReferenceClass.c)
 *     InternalRegisterClassEx @ 0x1C0073DB8 (InternalRegisterClassEx.c)
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
