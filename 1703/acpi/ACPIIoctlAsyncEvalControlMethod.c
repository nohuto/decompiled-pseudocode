/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C005075C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C00211A0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C0090150 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIIoctlEvalPreProcessing @ 0x1C0013E44 (ACPIIoctlEvalPreProcessing.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     ACPIIoctlEvalPostProcessing @ 0x1C0024CF0 (ACPIIoctlEvalPostProcessing.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002805C (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  int v9; // eax
  PVOID v10; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+48h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  v10 = 0LL;
  v13 = 0;
  v4 = ACPIIoctlEvalPreProcessing(a1, (__int64)a2, a3, NonPagedPoolNx, &v12, &v10, &P, &v13);
  if ( v4 < 0 )
  {
LABEL_7:
    if ( v10 )
      ExFreePoolWithTag(v10, 0x52706341u);
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v4;
  }
  v4 = AMLIAsyncEvalObject(v12, (_SLIST_ENTRY *)v10, v13, P, &ACPIIoctlAsyncEvalControlMethodCompletion, a2);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v12, v5);
  if ( P )
  {
    AcpiIoctlCleanupArgumentObjects((__int64)P, v13);
    ExFreePoolWithTag(P, 0x41706341u);
  }
  result = 259LL;
  if ( v4 != 259 )
  {
    if ( v4 >= 0 )
    {
      v9 = ACPIIoctlEvalPostProcessing(a2, (__int64)v10, v6, v7);
      dword_1C00776F8 = 0;
      v4 = v9;
      pszDest = 0;
      FreeDataBuffs((__int64)v10, 1u);
    }
    goto LABEL_7;
  }
  return result;
}
