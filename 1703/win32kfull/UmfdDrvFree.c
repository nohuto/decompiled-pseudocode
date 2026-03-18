/*
 * XREFs of UmfdDrvFree @ 0x1C010A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C00D4948 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     UmfdDrvFreeInternal @ 0x1C02B96C0 (UmfdDrvFreeInternal.c)
 */

void __fastcall UmfdDrvFree(char *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    v3 = *(_QWORD *)(a1 - 12);
    if ( v3 )
    {
      UmfdDrvFreeInternal(v3, a2, *((unsigned int *)a1 - 6));
      UmfdAllocation::ReleaseKernelmodeAllocation(a1);
    }
  }
}
