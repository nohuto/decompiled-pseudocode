/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C002AAD4
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00043B0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     AMLIIsObjectInGivenScope @ 0x1C001A7FC (AMLIIsObjectInGivenScope.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001B2D0 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  _IRP *MasterIrp; // r15
  __int64 DeviceExtension; // rax
  _QWORD *v9; // rsi
  int v10; // ebx
  PVOID PoolWithTag; // rax
  _DWORD *v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  _DWORD *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 *v22; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  v22 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v10 = -1073741820;
    goto LABEL_10;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v10 = -1073741789;
    goto LABEL_10;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v10 = -1073741585;
    goto LABEL_10;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = *(_QWORD **)(DeviceExtension + 712);
  if ( !v9 )
  {
    v10 = -1073741810;
    goto LABEL_10;
  }
  v10 = AMLIGetNameSpaceObject("_DSD", *(__int64 **)(DeviceExtension + 712), (__int64 *)&v22, 1);
  if ( v10 >= 0 )
  {
    v10 = AMLIIsObjectInGivenScope((__int64)v22, v9);
    if ( v10 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
      v6 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        goto LABEL_6;
      }
      v10 = AMLIEvalNameSpaceObject(v22, PoolWithTag, 0, 0LL);
      if ( v10 < 0 )
        goto LABEL_6;
      if ( *(_WORD *)(v6 + 2) != 4 )
        goto LABEL_29;
      v13 = *(_DWORD **)(v6 + 32);
      v14 = 0LL;
      if ( *v13 <= 1u )
        goto LABEL_29;
      while ( HIWORD(v13[10 * v14 + 2]) != 3
           || v13[10 * v14 + 8] != 16
           || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v13[10 * v14 + 10], 0x10uLL) != 16 )
      {
        v14 = (unsigned int)(v14 + 2);
        if ( (unsigned int)(v14 + 1) >= *v13 )
          goto LABEL_29;
      }
      LODWORD(v15) = *(&MasterIrp->Flags + 1);
      v16 = (unsigned int)(v14 + 1);
      if ( (_DWORD)v15 )
      {
        if ( HIWORD(v13[10 * v16 + 2]) != 4 )
          goto LABEL_29;
        v18 = *(_DWORD **)&v13[10 * v16 + 10];
        v19 = 0LL;
        if ( !*v18 )
          goto LABEL_29;
        while ( 1 )
        {
          if ( HIWORD(v18[10 * v19 + 2]) == 4 )
          {
            v20 = *(_QWORD *)&v18[10 * v19 + 10];
            if ( *(_DWORD *)v20 > 1u && *(_WORD *)(v20 + 10) == 2 )
            {
              v21 = *(_DWORD *)(v20 + 32);
              if ( (_DWORD)v15 == v21 )
              {
                v15 = *(&MasterIrp->Flags + 1);
                if ( v15 == RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v20 + 40), v21) )
                  break;
              }
            }
          }
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= *v18 )
            goto LABEL_29;
        }
        v17 = v20 + 48;
      }
      else
      {
        v17 = (__int64)&v13[8 * v16 + 2 + 2 * (unsigned int)v16];
      }
      if ( v17 )
      {
        v10 = ACPIIoctlEvalPostProcessingV1(a2, v17, 1);
LABEL_30:
        dword_1C00797B8 = 0;
        pszDest = 0;
        FreeDataBuffs(v6, 1u);
        goto LABEL_6;
      }
LABEL_29:
      v10 = -1073741275;
      goto LABEL_30;
    }
  }
LABEL_6:
  if ( v22 )
    AMLIDereferenceHandleEx((__int64)v22);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_10:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
