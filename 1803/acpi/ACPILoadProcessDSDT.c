/*
 * XREFs of ACPILoadProcessDSDT @ 0x1C009A65C
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C009A594 (ACPILoadAddDynamicDataBlockTable.c)
 */

__int64 ACPILoadProcessDSDT()
{
  int v0; // edx
  _OWORD *v1; // rbx
  __int64 result; // rax
  _OWORD *PoolWithTag; // rax
  int v4; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_OWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763908LL, 0LL, 0LL);
  if ( v1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *v1;
      PoolWithTag[1] = v1[1];
      *((_DWORD *)PoolWithTag + 8) = *((_DWORD *)v1 + 8);
      *((_DWORD *)PoolWithTag + 1) = 36;
      if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
      {
        v1 = P;
        LOBYTE(v4) = 4;
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v4,
          21,
          12,
          (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
          (char)P);
      }
      else
      {
        ExFreePoolWithTag(P, 0);
      }
      result = ACPILoadAddDynamicDataBlockTable((__int64)v1, 1);
      if ( (int)result >= 0 )
        *((_QWORD *)AcpiInformation + 3) = v1;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    LOBYTE(v0) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      22,
      11,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return 3222536217LL;
  }
  return result;
}
