/*
 * XREFs of ACPIIoctlTranslateBiosResources @ 0x1C007DE98
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C00830B8 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall ACPIIoctlTranslateBiosResources(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  _IRP *MasterIrp; // rcx
  unsigned int v9; // eax
  unsigned __int64 v10; // rbx
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v6 = *(_DWORD *)(a3 + 8);
    if ( v6 >= 8 )
    {
      a2->IoStatus.Information = 0LL;
      v7 = PnpBiosResourcesToNtResources(a1, a2->AssociatedIrp.MasterIrp, 4LL, &v12);
      v3 = v12;
      v5 = v7;
      if ( v7 >= 0 && v12 )
      {
        MasterIrp = a2->AssociatedIrp.MasterIrp;
        v9 = 32 * *(_DWORD *)(v12 + 36) + 8;
        if ( v6 >= v9 )
        {
          v10 = v9;
          memmove(MasterIrp, (const void *)(v12 + 32), v9);
          a2->IoStatus.Information = v10;
        }
        else
        {
          v5 = -2147483643;
          MasterIrp->Type = *(_WORD *)(v12 + 32);
          MasterIrp->Size = *(_WORD *)(v3 + 34);
          *(_DWORD *)&MasterIrp->AllocationProcessorNumber = *(_DWORD *)(v3 + 36);
          a2->IoStatus.Information = 8LL;
        }
      }
    }
    else
    {
      v5 = -1073741789;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  if ( v3 )
    ExFreePoolWithTag((PVOID)v3, 0);
  return v5;
}
