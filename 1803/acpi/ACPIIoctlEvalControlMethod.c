/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C002BDC4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C003C2C0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002BFD8 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C002C0BC (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C002C1A0 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C002C4F0 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C002C82C (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C002CB7C (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C002DA98 (AcpiIoctlCleanupArgumentObjects.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  PVOID v4; // rbx
  __int64 *v5; // r13
  void *v6; // r15
  unsigned int v7; // r12d
  int v9; // eax
  int v10; // edi
  __int64 v11; // r8
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // eax
  __int64 v17[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF
  PVOID P; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v7 = 0;
  v17[0] = 0LL;
  LODWORD(v18) = 0;
  switch ( v3 )
  {
    case 3325956:
      v9 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)&v20, (__int64)&P, (__int64)v17, (__int64)&v18);
      break;
    case 3325976:
      v9 = ACPIIoctlEvalPreProcessingV1Ex(a1, a2, a3, 1LL, &v20, &P, v17, &v18);
      break;
    case 3326012:
      v9 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v20, (__int64)&P, (__int64)v17, (__int64)&v18);
      break;
    case 3326020:
      v9 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 1LL, &v20, &P, v17, &v18);
      break;
    default:
      goto LABEL_11;
  }
  v4 = P;
  v10 = v9;
  if ( v9 < 0 )
    goto LABEL_26;
  v5 = (__int64 *)v20;
  v6 = (void *)v17[0];
  v7 = v18;
LABEL_11:
  v10 = AMLIEvalNameSpaceObject(v5, v4, v7, v6);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
  if ( v6 )
  {
    AcpiIoctlCleanupArgumentObjects(v6, v7);
    ExFreePoolWithTag(v6, 0x41706341u);
  }
  if ( v10 >= 0 )
  {
    v12 = v3 - 3325956;
    if ( v12 )
    {
      v13 = v12 - 20;
      if ( v13 )
      {
        v14 = v13 - 36;
        if ( v14 )
        {
          if ( v14 != 8 )
          {
LABEL_25:
            dword_1C00677B8 = 0;
            pszDest = 0;
            FreeDataBuffs((__int64)v4, 1u);
            goto LABEL_26;
          }
          LOBYTE(v11) = 1;
        }
        else
        {
          v11 = 0LL;
        }
        v15 = ACPIIoctlEvalPostProcessingV2(a2, v4, v11);
LABEL_24:
        v10 = v15;
        goto LABEL_25;
      }
      LOBYTE(v11) = 1;
    }
    else
    {
      v11 = 0LL;
    }
    v15 = ACPIIoctlEvalPostProcessingV1(a2, v4, v11);
    goto LABEL_24;
  }
LABEL_26:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
