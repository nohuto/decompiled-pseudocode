/*
 * XREFs of StorPortInitialize @ 0x1C002DEE0
 * Callers:
 *     StorPortInitializeVrfy @ 0x1C0067480 (StorPortInitializeVrfy.c)
 * Callees:
 *     RaidGetPortData @ 0x1C000481C (RaidGetPortData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqqqqqqxxxxx @ 0x1C002DCCC (McTemplateK0qqqqqqqqxxxxx.c)
 *     WPP_SF_qqqq @ 0x1C002E280 (WPP_SF_qqqq.c)
 *     RaCreateDriver @ 0x1C006562C (RaCreateDriver.c)
 *     RaDeleteDriver @ 0x1C0065678 (RaDeleteDriver.c)
 *     RaInitializeDriver @ 0x1C0065750 (RaInitializeDriver.c)
 *     RaSaveDriverInitData @ 0x1C0065834 (RaSaveDriverInitData.c)
 *     WppInitKm @ 0x1C0065CD0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0065D5C (WppLoadTracingSupport.c)
 *     __security_init_cookie @ 0x1C006C044 (__security_init_cookie.c)
 */

__int64 __fastcall StorPortInitialize(PDRIVER_OBJECT DriverObject, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // r14
  int v9; // eax
  void (__fastcall *v11)(PDRIVER_OBJECT, __int64); // rax
  char *PortData; // r15
  NTSTATUS v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int inited; // eax
  void (__fastcall *v19)(PDRIVER_OBJECT); // rax
  PVOID DriverObjectExtension; // [rsp+B0h] [rbp+8h] BYREF

  v8 = 0;
  if ( !InitSecurityCookie )
  {
    _security_init_cookie();
    InitSecurityCookie = 1;
  }
  if ( _InterlockedIncrement(&WPPInitCount) == 1 && DriverObject && a2 )
  {
    *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
    WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_wppCtlGuid;
    WPP_MAIN_CB.NextDevice = 0LL;
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
    WppLoadTracingSupport();
    WPP_MAIN_CB.CurrentIrp = 0LL;
    WppInitKm();
  }
  DriverObjectExtension = 0LL;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqqq(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_ad1ecc5fc66e3724e0f65557252d510f_Traceguids,
      DriverObject,
      a2,
      a3,
      a4);
  }
  if ( DriverObject && a2 && a3 )
  {
    v9 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 != 208 && v9 != 176 && v9 != 136
      || !*(_QWORD *)(a3 + 8)
      || !*(_QWORD *)(a3 + 32)
      || !*(_QWORD *)(a3 + 16)
      || !*(_QWORD *)(a3 + 40) )
    {
      return 3221225561LL;
    }
    if ( v9 == 176 || v9 == 208 && (*(_DWORD *)(a3 + 184) & 1) != 0 )
    {
      v11 = *(void (__fastcall **)(PDRIVER_OBJECT, __int64))(a3 + 160);
      if ( v11 )
      {
        v11(DriverObject, a2);
        v8 = 1;
      }
    }
    PortData = RaidGetPortData();
    if ( PortData )
    {
      DriverObjectExtension = IoGetDriverObjectExtension(DriverObject, DriverEntry);
      if ( DriverObjectExtension
        || (v13 = IoAllocateDriverObjectExtension(DriverObject, DriverEntry, 0x70u, &DriverObjectExtension), v13 >= 0)
        && (RaCreateDriver(DriverObjectExtension),
            v13 = RaInitializeDriver(DriverObjectExtension, DriverObject, PortData, a2),
            v13 >= 0) )
      {
        v17 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 208 )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
            McTemplateK0qqqqqqqqxxxxx(
              v15,
              v14,
              v16,
              208,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              *(_DWORD *)(a3 + 184),
              *(_DWORD *)(a3 + 188),
              *(_DWORD *)(a3 + 192),
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else if ( v17 == 176 )
        {
          if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
            McTemplateK0qqqqqqqqxxxxx(
              v15,
              v14,
              v16,
              176,
              *(_DWORD *)(a3 + 4),
              *(_DWORD *)(a3 + 64),
              *(_DWORD *)(a3 + 68),
              *(_DWORD *)(a3 + 72),
              0,
              0,
              0,
              *(_QWORD *)(a3 + 136),
              *(_QWORD *)(a3 + 144),
              *(_QWORD *)(a3 + 152),
              *(_QWORD *)(a3 + 160),
              *(_QWORD *)(a3 + 168));
        }
        else if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
        {
          McTemplateK0qqqqqqqqxxxxx(
            v15,
            v14,
            v16,
            v17,
            *(_DWORD *)(a3 + 4),
            *(_DWORD *)(a3 + 64),
            *(_DWORD *)(a3 + 68),
            *(_DWORD *)(a3 + 72),
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
        }
        inited = RaSaveDriverInitData(DriverObjectExtension, a3);
        v13 = inited;
        if ( inited >= 0 )
          v8 = 0;
        *(_WORD *)(a3 + 104) |= 0x10u;
        if ( inited >= 0 )
          return (unsigned int)v13;
      }
    }
    else
    {
      v13 = -1073741801;
    }
    if ( DriverObjectExtension )
      RaDeleteDriver(DriverObjectExtension);
    DriverObjectExtension = 0LL;
    if ( v8 )
    {
      v19 = *(void (__fastcall **)(PDRIVER_OBJECT))(a3 + 168);
      if ( v19 )
        v19(DriverObject);
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
