/*
 * XREFs of ACPIIoctlAsyncEvalControlMethod @ 0x1C002B29C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C003C2C0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002BFD8 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C002C0BC (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002DA98 (AcpiIoctlCleanupArgumentObjects.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIIoctlAsyncEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  volatile signed __int32 *v4; // r13
  void *v5; // r15
  PVOID v6; // rdi
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r8
  __int64 result; // rax
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+50h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  v7 = 0;
  P = 0LL;
  LODWORD(v19) = 0;
  switch ( v3 )
  {
    case 3325952:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)&v17, (__int64)&P, (__int64)&v18, (__int64)&v19);
      break;
    case 3325980:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, a2, a3, 512LL, &v17, &P, &v18, &v19);
      break;
    case 3326016:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v17, (__int64)&P, (__int64)&v18, (__int64)&v19);
      break;
    case 3326024:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 512LL, &v17, &P, &v18, &v19);
      break;
    default:
      goto LABEL_11;
  }
  v6 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_27;
  v4 = (volatile signed __int32 *)v17;
  v5 = (void *)v18;
  v7 = v19;
LABEL_11:
  v10 = AMLIAsyncEvalObject(v4, v6, v7, v5, &ACPIIoctlAsyncEvalControlMethodCompletion, a2);
  AMLIDereferenceHandleEx(v4);
  if ( v5 )
  {
    AcpiIoctlCleanupArgumentObjects(v5, v7);
    ExFreePoolWithTag(v5, 0x41706341u);
  }
  result = 259LL;
  if ( v10 != 259 )
  {
    if ( v10 >= 0 )
    {
      v13 = v3 - 3325952;
      if ( v13 )
      {
        v14 = v13 - 28;
        if ( v14 )
        {
          v15 = v14 - 36;
          if ( v15 )
          {
            if ( v15 != 8 )
            {
LABEL_26:
              dword_1C00677B8 = 0;
              pszDest = 0;
              FreeDataBuffs((__int64)v6, 1u);
              goto LABEL_27;
            }
            LOBYTE(v11) = 1;
          }
          else
          {
            v11 = 0LL;
          }
          v16 = ACPIIoctlEvalPostProcessingV2(a2, v6, v11);
LABEL_25:
          v10 = v16;
          goto LABEL_26;
        }
        LOBYTE(v11) = 1;
      }
      else
      {
        v11 = 0LL;
      }
      v16 = ACPIIoctlEvalPostProcessingV1(a2, v6, v11);
      goto LABEL_25;
    }
LABEL_27:
    if ( v6 )
      ExFreePoolWithTag(v6, 0x52706341u);
    a2->IoStatus.Status = v10;
    IofCompleteRequest(a2, 0);
    return (unsigned int)v10;
  }
  return result;
}
