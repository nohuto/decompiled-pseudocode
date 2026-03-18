/*
 * XREFs of ACPIIoctlEnumChildren @ 0x1C002BA70
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x1C003C2C0 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1C00815E0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002BCBC (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x1C0043800 (AMLIFindNameSpaceObject.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  PVOID *v3; // rdi
  char *v4; // rsi
  int v6; // ebx
  unsigned int v7; // r12d
  __int64 v8; // r13
  _IRP *MasterIrp; // r14
  int v10; // ebx
  int MdlAddress; // ecx
  unsigned int v12; // ebx
  SIZE_T MdlAddress_low; // rdi
  char *PoolWithTag; // rax
  char *v15; // rax
  PVOID *v16; // rax
  PVOID v17; // rax
  __int64 v18; // rcx
  unsigned int v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  a2->IoStatus.Information = 0LL;
  if ( *(_DWORD *)(a3 + 16) < 0x10u )
  {
    v6 = -1073741820;
    goto LABEL_31;
  }
  v7 = *(_DWORD *)(a3 + 8);
  if ( v7 < 0x14 )
  {
    v6 = -1073741789;
    goto LABEL_31;
  }
  v8 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v8 )
  {
    v6 = -1073741810;
    goto LABEL_31;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v6 = -1073741585;
    goto LABEL_31;
  }
  v10 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MasterIrp->AllocationProcessorNumber & 3) == 3 || (v10 & 7) == 0 || (v10 & 4) != 0 && !MdlAddress )
  {
    v6 = -1072431089;
  }
  else
  {
    v12 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber & 1;
    if ( MdlAddress )
    {
      MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, MdlAddress_low, 0x52706341u);
      v4 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_15:
        v6 = -1073741670;
        goto LABEL_31;
      }
      memmove(PoolWithTag, (char *)&MasterIrp->MdlAddress + 4, MdlAddress_low);
      _strupr(v4);
    }
    else
    {
      v15 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 2uLL, 0x52706341u);
      v4 = v15;
      if ( !v15 )
        goto LABEL_15;
      *v15 = 0;
      v12 |= 2u;
    }
    v16 = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u);
    v3 = v16;
    if ( v16
      && (memset(v16, 0, 0x28uLL),
          v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x52706341u),
          (v3[1] = v17) != 0LL) )
    {
      memset(v17, 0, 0x28uLL);
      v6 = AMLIFindNameSpaceObject(v8, v3, v12, v4);
      if ( v6 >= 0 )
      {
        v6 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v7, &v20, v3);
        a2->IoStatus.Information = v20;
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x52706341u);
  if ( v3 )
  {
    v18 = (__int64)v3[1];
    if ( v18 )
    {
      dword_1C00677B8 = 0;
      pszDest = 0;
      FreeDataBuffs(v18, 1u);
      ExFreePoolWithTag(v3[1], 0x52706341u);
      v3[1] = 0LL;
    }
    dword_1C00677B8 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)v3, 1u);
    ExFreePoolWithTag(v3, 0x52706341u);
  }
LABEL_31:
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v6;
}
