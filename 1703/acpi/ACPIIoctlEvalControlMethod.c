/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C0013D34
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C00211A0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     ACPIIoctlEvalPreProcessing @ 0x1C0013E44 (ACPIIoctlEvalPreProcessing.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessing @ 0x1C0024CF0 (ACPIIoctlEvalPostProcessing.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002805C (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2)
{
  int v3; // ebx
  __int64 v5; // rdx
  int v6; // eax
  PVOID v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0LL;
  P = 0LL;
  v9 = 0;
  v3 = ACPIIoctlEvalPreProcessing(a1, (__int64)&v8, (__int64)&P, (__int64)&v7, (__int64)&v9);
  if ( v3 >= 0 )
  {
    v3 = AMLIEvalNameSpaceObject(v8, P, v9, v7);
    AMLIDereferenceHandleEx(v8, v5);
    if ( v7 )
    {
      AcpiIoctlCleanupArgumentObjects(v7, v9);
      ExFreePoolWithTag(v7, 0x41706341u);
    }
    if ( v3 >= 0 )
    {
      v6 = ACPIIoctlEvalPostProcessing(a2, P);
      dword_1C00776F8 = 0;
      v3 = v6;
      pszDest = 0;
      FreeDataBuffs(P, 1LL);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v3;
}
