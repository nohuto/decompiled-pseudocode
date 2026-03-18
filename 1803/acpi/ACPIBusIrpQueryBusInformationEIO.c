/*
 * XREFs of ACPIBusIrpQueryBusInformationEIO @ 0x1C0076B50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPIBusIrpQueryBusInformationEIO(__int64 a1, IRP *a2)
{
  __int64 v2; // rbx
  GUID *PoolWithTag; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  const char *v8; // rax
  const char *v9; // rdx
  __int64 v10; // rcx

  LODWORD(v2) = 0;
  PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x4D706341u);
  v6 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)&PoolWithTag[1].Data1 = 1LL;
    *PoolWithTag = GUID_BUS_TYPE_ISAPNP;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 64);
    v8 = byte_1C005B1F0;
    v9 = byte_1C005B1F0;
    if ( v7 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      v10 = *(_QWORD *)(v7 + 8);
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v2 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v2 + 568);
      }
    }
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x1Fu,
      (__int64)&WPP_4bcb5acd96f437848f1ce24078773eb7_Traceguids,
      24,
      v2,
      v8,
      v9);
    LODWORD(v2) = -1073741670;
  }
  a2->IoStatus.Status = v2;
  a2->IoStatus.Information = v6;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v2;
}
