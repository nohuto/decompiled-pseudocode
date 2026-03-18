/*
 * XREFs of ACPIIoctlEvalControlMethodEx @ 0x1C00251F4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C00211A0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     FreeData @ 0x1C0004EA8 (FreeData.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIIoctlEvalPreProcessingEx @ 0x1C00252E0 (ACPIIoctlEvalPreProcessingEx.c)
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C00254BC (ACPIIoctlEvalPostProcessingEx.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002805C (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethodEx(__int64 a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  PVOID v7; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v8; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  v7 = 0LL;
  P = 0LL;
  v9 = 0;
  v4 = ACPIIoctlEvalPreProcessingEx(a1, a2, a3, 1LL, &v8, &P, &v7, &v9);
  if ( v4 >= 0 )
  {
    v4 = AMLIEvalNameSpaceObject(v8, P, v9, v7);
    if ( v7 )
    {
      AcpiIoctlCleanupArgumentObjects(v7, v9);
      ExFreePoolWithTag(v7, 0x41706341u);
    }
    if ( v8 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v8, v5);
    if ( v4 >= 0 )
    {
      v4 = ACPIIoctlEvalPostProcessingEx(a2, P);
      dword_1C00776F8 = 0;
      pszDest = 0;
      FreeData(P);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x52706341u);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v4;
}
