/*
 * XREFs of ACPIEjectPnpLocationInterface @ 0x1C007CE6C
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0013E10 (ACPIBusIrpQueryInterface.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C007BEDC (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C0087D40 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIEjectPnpLocationInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 DeviceExtension; // r14
  unsigned int v5; // ebx
  __int64 v6; // rdi
  char *PoolWithTag; // rax
  char *v8; // rsi
  _OWORD *v9; // rcx
  void (__fastcall *v10)(char *); // rax

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) >= 0x28u && *(_WORD *)(v2 + 18) )
  {
    v6 = *(_QWORD *)(v2 + 24);
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x46706341u);
    v5 = 0;
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = DeviceExtension;
      v9 = PoolWithTag + 8;
      *((_DWORD *)PoolWithTag + 12) = 0;
      if ( *(_DWORD *)(a2 + 48) )
      {
        memset(v9, 0, 0x28uLL);
      }
      else
      {
        *v9 = *(_OWORD *)v6;
        *(_OWORD *)(PoolWithTag + 24) = *(_OWORD *)(v6 + 16);
        *((_QWORD *)PoolWithTag + 5) = *(_QWORD *)(v6 + 32);
      }
      *(_OWORD *)v6 = PnpLocationInterface;
      *(_OWORD *)(v6 + 16) = *(_OWORD *)&off_1C0059F48;
      *(_QWORD *)(v6 + 32) = ACPIGetPnpLocationString;
      v10 = *(void (__fastcall **)(char *))(v6 + 16);
      *(_QWORD *)(v6 + 8) = v8;
      v10(v8);
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
  return v5;
}
