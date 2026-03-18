/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C0050D4C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C002544C (AMLIIsObjectInGivenScope.c)
 *     ACPIIoctlEvalPostProcessingEx @ 0x1C00254BC (ACPIIoctlEvalPostProcessingEx.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  _IRP *MasterIrp; // r15
  __int64 DeviceExtension; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  PVOID PoolWithTag; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  _DWORD *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 *v25; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  v25 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v7 = -1073741820;
    goto LABEL_26;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v7 = -1073741789;
    goto LABEL_26;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v7 = -1073741585;
    goto LABEL_26;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v10 = *(_QWORD **)(DeviceExtension + 712);
  if ( !v10 )
  {
    v7 = -1073741810;
    goto LABEL_26;
  }
  v7 = AMLIGetNameSpaceObject("_DSD", *(_QWORD *)(DeviceExtension + 712), &v25);
  if ( v7 >= 0 )
  {
    v7 = AMLIIsObjectInGivenScope((__int64)v25, v10);
    if ( v7 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
      v6 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v7 = -1073741670;
        goto LABEL_22;
      }
      v7 = AMLIEvalNameSpaceObject(v25, PoolWithTag, 0, 0LL);
      if ( v7 < 0 )
        goto LABEL_22;
      if ( *(_WORD *)(v6 + 2) != 4 )
        goto LABEL_20;
      v13 = *(_DWORD **)(v6 + 32);
      v14 = 0LL;
      if ( *v13 <= 1u )
        goto LABEL_20;
      while ( HIWORD(v13[10 * v14 + 2]) != 3
           || v13[10 * v14 + 8] != 16
           || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v13[10 * v14 + 10], 0x10uLL) != 16 )
      {
        v14 = (unsigned int)(v14 + 2);
        if ( (unsigned int)(v14 + 1) >= *v13 )
          goto LABEL_20;
      }
      LODWORD(v18) = *(&MasterIrp->Flags + 1);
      v19 = (unsigned int)(v14 + 1);
      if ( (_DWORD)v18 )
      {
        if ( HIWORD(v13[10 * v19 + 2]) != 4 )
          goto LABEL_20;
        v21 = *(_DWORD **)&v13[10 * v19 + 10];
        v22 = 0LL;
        if ( !*v21 )
          goto LABEL_20;
        while ( 1 )
        {
          if ( HIWORD(v21[10 * v22 + 2]) == 4 )
          {
            v23 = *(_QWORD *)&v21[10 * v22 + 10];
            if ( *(_DWORD *)v23 > 1u && *(_WORD *)(v23 + 10) == 2 )
            {
              v24 = *(_DWORD *)(v23 + 32);
              if ( (_DWORD)v18 == v24 )
              {
                v18 = *(&MasterIrp->Flags + 1);
                if ( v18 == RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v23 + 40), v24) )
                  break;
              }
            }
          }
          v22 = (unsigned int)(v22 + 1);
          if ( (unsigned int)v22 >= *v21 )
            goto LABEL_20;
        }
        v20 = v23 + 48;
      }
      else
      {
        v20 = (__int64)&v13[8 * v19 + 2 + 2 * (unsigned int)v19];
      }
      if ( v20 )
      {
        v7 = ACPIIoctlEvalPostProcessingEx(a2, v20, v15, v16);
        goto LABEL_21;
      }
LABEL_20:
      v7 = -1073741275;
LABEL_21:
      dword_1C00776F8 = 0;
      pszDest = 0;
      FreeDataBuffs(v6, 1u);
    }
  }
LABEL_22:
  if ( v25 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v25, v11);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_26:
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
