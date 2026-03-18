/*
 * XREFs of ACPIIoctlQueryDeviceBiosName @ 0x1C007DDF0
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C0004200 (memmove.c)
 *     ACPIQueryDeviceBiosName @ 0x1C008BEA0 (ACPIQueryDeviceBiosName.c)
 */

__int64 __fastcall ACPIIoctlQueryDeviceBiosName(__int64 a1, IRP *a2, __int64 a3)
{
  int v5; // esi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rbx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  void *Src; // [rsp+28h] [rbp-10h]

  a2->IoStatus.Information = 0LL;
  v9 = 0LL;
  Src = 0LL;
  v5 = ACPIQueryDeviceBiosName(a1, &v9);
  if ( v5 >= 0 )
  {
    v6 = (unsigned __int16)v9 + 2;
    if ( *(_DWORD *)(a3 + 8) >= v6 )
    {
      v7 = v6;
      memmove(a2->AssociatedIrp.MasterIrp, Src, v6);
      a2->IoStatus.Information = v7;
    }
    else
    {
      v5 = -1073741789;
    }
  }
  if ( Src )
  {
    ExFreePoolWithTag(Src, 0x53706341u);
    v9 = 0LL;
    Src = 0LL;
  }
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v5;
}
