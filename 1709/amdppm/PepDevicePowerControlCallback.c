/*
 * XREFs of PepDevicePowerControlCallback @ 0x1C000B6E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     PepProcessorIdleVeto @ 0x1C00065E0 (PepProcessorIdleVeto.c)
 *     PepUpdateIdleState @ 0x1C0006690 (PepUpdateIdleState.c)
 *     PepUpdatePlatformState @ 0x1C00067B0 (PepUpdatePlatformState.c)
 *     __security_check_cookie @ 0x1C000C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 *     PepGetParkingPageInfo @ 0x1C002D644 (PepGetParkingPageInfo.c)
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
  int v7; // ebx
  NTSTATUS result; // eax
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]

  v7 = 0;
  *a7 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_PPM_PERF_CONSTRAINT_CHANGE )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x27u,
      (__int64)&WPP_b70b4e498b28328aa1f9660b11147ff3_Traceguids,
      *(_DWORD *)(a1 + 56));
    if ( !*(_QWORD *)(a1 + 1152) )
      return -1073741823;
    _m_prefetchw((const void *)(a1 + 1148));
    if ( !(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(a1 + 1148), 1u) )
      IoQueueWorkItem(*(PIO_WORKITEM *)(a1 + 1152), PepUpdatePerformanceConstraintWorker, CriticalWorkQueue, 0LL);
    return v7;
  }
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
        v10 = 0LL;
        v11 = 0LL;
        HIDWORD(v10) = *(_DWORD *)a3;
        LODWORD(v11) = *(_DWORD *)(a3 + 4);
        BYTE4(v11) = *(_BYTE *)(a3 + 8);
        LODWORD(v10) = 52;
        return ((__int64 (__fastcall *)(__int64 *))qword_1C0011640)(&v10);
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
        return PepUpdatePlatformState(a5, (unsigned int *)a3);
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
