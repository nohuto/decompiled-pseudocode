/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C000B060
 * Callers:
 *     <none>
 * Callees:
 *     PepProcessorIdleVeto @ 0x1C0006380 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x1C0006430 (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C0006550 (PepUpdatePlatformState.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     PepUpdatePerformanceConstraint @ 0x1C0029904 (PepUpdatePerformanceConstraint.c)
 *     PepGetParkingPageInfo @ 0x1C002A1AC (PepGetParkingPageInfo.c)
 */

NTSTATUS __fastcall PepDevicePowerControlCallback(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  NTSTATUS result; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]

  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
    return PepUpdatePerformanceConstraint();
  if ( *(_QWORD *)a2 != PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE || *(_QWORD *)(a2 + 8) != 0xF3DF4B6734ACAAABuLL )
  {
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_VETO.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_VETO.Data4 )
    {
      if ( a4 >= 0xC )
        return PepProcessorIdleVeto(a1, (__int64 *)a3);
      return -1073741789;
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PLATFORM_IDLE_VETO.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PLATFORM_IDLE_VETO.Data4 )
    {
      if ( a4 < 0xC )
        return -1073741789;
      if ( Src || qword_1C0011928 || qword_1C0011930 )
      {
        v8 = 0LL;
        v9 = 0LL;
        HIDWORD(v8) = *(_DWORD *)a3;
        LODWORD(v9) = *(_DWORD *)(a3 + 4);
        BYTE4(v9) = *(_BYTE *)(a3 + 8);
        LODWORD(v8) = 49;
        return ((__int64 (__fastcall *)(__int64 *))qword_1C0011640)(&v8);
      }
      return -1073741637;
    }
    if ( *(_QWORD *)a2 == *(_QWORD *)&GUID_PROCESSOR_IDLE_UPDATE.Data1
      && *(_QWORD *)(a2 + 8) == *(_QWORD *)GUID_PROCESSOR_IDLE_UPDATE.Data4 )
    {
      if ( a4 >= 0xC )
        return PepUpdateIdleState(a1, (unsigned int *)a3);
    }
    else
    {
      if ( *(_QWORD *)a2 != *(_QWORD *)&GUID_PLATFORM_IDLE_UPDATE.Data1
        || *(_QWORD *)(a2 + 8) != *(_QWORD *)GUID_PLATFORM_IDLE_UPDATE.Data4 )
      {
        return -1073741637;
      }
      if ( a4 >= 0xC )
        return PepUpdatePlatformState(a1, (unsigned int *)a3);
    }
    return -1073741789;
  }
  if ( a6 >= 0x10 )
  {
    result = PepGetParkingPageInfo(a1, a5);
    if ( result < 0 )
      *a7 = 0LL;
  }
  else
  {
    *a7 = 16LL;
    return -1073741670;
  }
  return result;
}
