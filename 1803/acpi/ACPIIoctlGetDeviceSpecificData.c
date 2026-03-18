/*
 * XREFs of ACPIIoctlGetDeviceSpecificData @ 0x1C002D138
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C002BFD8 (ACPIIoctlEvalPostProcessingV1.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     AMLIIsObjectInGivenScope @ 0x1C0043E0C (AMLIIsObjectInGivenScope.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceSpecificData(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  _IRP *MasterIrp; // r13
  __int64 v9; // rsi
  PVOID PoolWithTag; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v14; // r12
  __int64 v15; // rdx
  _DWORD *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rbx
  unsigned int v19; // eax

  v3 = *(_DWORD *)(a3 + 16);
  v5 = *(_DWORD *)(a3 + 8);
  v6 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( v3 < 0x1C )
  {
    v7 = -1073741820;
    goto LABEL_24;
  }
  if ( (unsigned int)(v5 - 1) <= 0x12 )
  {
    v7 = -1073741789;
    goto LABEL_24;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v7 = -1073741585;
    goto LABEL_24;
  }
  v9 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v9 )
  {
    v7 = -1073741810;
    goto LABEL_24;
  }
  v7 = AMLIGetNameSpaceObject("_DSD");
  if ( v7 >= 0 )
  {
    v7 = AMLIIsObjectInGivenScope(0LL, v9);
    if ( v7 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
      v6 = (__int64)PoolWithTag;
      if ( !PoolWithTag )
      {
        v7 = -1073741670;
        goto LABEL_22;
      }
      v7 = AMLIEvalNameSpaceObject(0LL, PoolWithTag, 0, 0LL);
      if ( v7 >= 0 )
      {
        if ( *(_WORD *)(v6 + 2) != 4 )
          goto LABEL_20;
        v11 = *(_DWORD **)(v6 + 32);
        v12 = 0LL;
        if ( *v11 <= 1u )
          goto LABEL_20;
        while ( HIWORD(v11[10 * v12 + 2]) != 3
             || v11[10 * v12 + 8] != 16
             || RtlCompareMemory(&MasterIrp->AllocationProcessorNumber, *(const void **)&v11[10 * v12 + 10], 0x10uLL) != 16 )
        {
          v12 = (unsigned int)(v12 + 2);
          if ( (unsigned int)(v12 + 1) >= *v11 )
            goto LABEL_20;
        }
        LODWORD(v14) = *(&MasterIrp->Flags + 1);
        if ( (_DWORD)v14 )
        {
          if ( HIWORD(v11[10 * (unsigned int)(v12 + 1) + 2]) != 4 )
            goto LABEL_20;
          v16 = *(_DWORD **)&v11[10 * (unsigned int)(v12 + 1) + 10];
          v17 = 0LL;
          if ( !*v16 )
            goto LABEL_20;
          while ( 1 )
          {
            if ( HIWORD(v16[10 * v17 + 2]) == 4 )
            {
              v18 = *(_QWORD *)&v16[10 * v17 + 10];
              if ( *(_DWORD *)v18 > 1u && *(_WORD *)(v18 + 10) == 2 )
              {
                v19 = *(_DWORD *)(v18 + 32);
                if ( (_DWORD)v14 == v19 )
                {
                  v14 = *(&MasterIrp->Flags + 1);
                  if ( v14 == RtlCompareMemory(&MasterIrp->AssociatedIrp, *(const void **)(v18 + 40), v19) )
                    break;
                }
              }
            }
            v17 = (unsigned int)(v17 + 1);
            if ( (unsigned int)v17 >= *v16 )
              goto LABEL_20;
          }
          v15 = v18 + 48;
        }
        else
        {
          v15 = (__int64)&v11[10 * (unsigned int)(v12 + 1) + 2];
        }
        if ( v15 )
        {
          v7 = ACPIIoctlEvalPostProcessingV1(a2, v15, 1);
          goto LABEL_21;
        }
LABEL_20:
        v7 = -1073741275;
LABEL_21:
        dword_1C00677B8 = 0;
        pszDest = 0;
        FreeDataBuffs(v6, 1u);
      }
    }
  }
LABEL_22:
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0x52706341u);
LABEL_24:
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
