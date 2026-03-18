/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1C0086260
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0004580 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0086060 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C008CDBC (ACPIFilterIrpQueryPnpLocationInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // r14
  __int64 v5; // rsi
  char *PoolWithTag; // rax
  unsigned int v7; // ebx
  char *v8; // rdi
  void (__fastcall *v9)(char *); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v5 = *(_QWORD *)(v2 + 24);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x46706341u);
    v7 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = DeviceExtension;
      *((_DWORD *)PoolWithTag + 12) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        memset(PoolWithTag + 8, 0, 0x28uLL);
      }
      else
      {
        *(_OWORD *)(PoolWithTag + 8) = *(_OWORD *)v5;
        *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)(v5 + 16);
        *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(v5 + 32);
      }
      *(_OWORD *)v5 = PnpLocationInterface;
      *(_OWORD *)(v5 + 16) = *(_OWORD *)&off_1C00657A0;
      *(_QWORD *)(v5 + 32) = ACPIGetPnpLocationString;
      v9 = *(void (__fastcall **)(char *))(v5 + 16);
      *(_QWORD *)(v5 + 8) = v8;
      v9(v8);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
