/*
 * XREFs of ACPIIoctlEvalControlMethod @ 0x1C001B138
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00043B0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C0023C00 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C008FFC0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001AA2C (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001B2D0 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001B848 (ACPIIoctlEvalPreProcessingV1.c)
 *     AcpiIoctlCleanupArgumentObjects @ 0x1C0028D5C (AcpiIoctlCleanupArgumentObjects.c)
 *     ACPIIoctlEvalPostProcessingV2 @ 0x1C0050DE0 (ACPIIoctlEvalPostProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0050EBC (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C005120C (ACPIIoctlEvalPreProcessingV2Ex.c)
 */

__int64 __fastcall ACPIIoctlEvalControlMethod(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  int v3; // esi
  _QWORD *v4; // rbx
  __int64 v5; // r12
  PVOID v6; // r15
  int v8; // eax
  int v9; // edi
  int v10; // eax
  __int64 v11; // r8
  int v12; // esi
  int v13; // esi
  int v14; // eax
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // esi
  PVOID v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+98h] [rbp+48h] BYREF
  PVOID P; // [rsp+A8h] [rbp+58h] BYREF

  v3 = *(_DWORD *)(a3 + 24);
  v4 = 0LL;
  LODWORD(v21) = 0;
  v5 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  P = 0LL;
  switch ( v3 )
  {
    case 3325956:
      v8 = ACPIIoctlEvalPreProcessingV1(a1, (__int64)&v20, (__int64)&P, (__int64)&v19, (__int64)&v21);
      break;
    case 3325976:
      v8 = ACPIIoctlEvalPreProcessingV1Ex(a1, (__int64)a2, a3, PagedPool, &v20, &P, &v19, (unsigned int *)&v21);
      break;
    case 3326012:
      v8 = ACPIIoctlEvalPreProcessingV2(a1, (__int64)&v20, (__int64)&P, (__int64)&v19, (__int64)&v21);
      break;
    case 3326020:
      v8 = ACPIIoctlEvalPreProcessingV2Ex(a1, a2, a3, 1LL, &v20, &P, &v19, &v21);
      break;
    default:
      goto LABEL_5;
  }
  v4 = P;
  v9 = v8;
  if ( v8 < 0 )
    goto LABEL_15;
  v5 = v20;
  v6 = v19;
LABEL_5:
  v10 = AMLIEvalNameSpaceObject((__int64 *)v5, v4, v21, v6);
  dword_1C00797B8 = 0;
  v9 = v10;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 )
    {
      v16 = v20;
      v17 = *(_QWORD *)v20;
      if ( v20 == *(_QWORD *)v20 + 120LL )
      {
        DereferenceObjectEx(v17);
      }
      else
      {
        DereferenceObjectEx(v17);
        HeapFree(v16);
      }
    }
    v6 = v19;
    v4 = P;
  }
  if ( v6 )
  {
    AcpiIoctlCleanupArgumentObjects(v6, (unsigned int)v21);
    ExFreePoolWithTag(v6, 0x41706341u);
  }
  if ( v9 >= 0 )
  {
    v12 = v3 - 3325956;
    if ( v12 )
    {
      v13 = v12 - 20;
      if ( v13 )
      {
        v18 = v13 - 36;
        if ( v18 )
        {
          if ( v18 != 8 )
            goto LABEL_14;
          LOBYTE(v11) = 1;
        }
        else
        {
          v11 = 0LL;
        }
        v14 = ACPIIoctlEvalPostProcessingV2(a2, v4, v11);
LABEL_13:
        v9 = v14;
LABEL_14:
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeData(v4);
        goto LABEL_15;
      }
      LOBYTE(v11) = 1;
    }
    else
    {
      v11 = 0LL;
    }
    v14 = ACPIIoctlEvalPostProcessingV1(a2, v4, v11);
    goto LABEL_13;
  }
LABEL_15:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
