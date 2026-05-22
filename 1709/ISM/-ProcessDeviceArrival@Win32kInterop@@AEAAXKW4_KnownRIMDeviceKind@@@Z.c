/*
 * XREFs of ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x18000F46C
 * Callers:
 *     ?ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z @ 0x18000F640 (-ProcessPnpNotification@Win32kInterop@@AEAAXAEBU_PnpNotification@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x180011F94 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessDeviceArrival(__int64 a1, int a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // edi
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  _DWORD *v13; // [rsp+58h] [rbp+20h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
      v7 = 4;
      goto LABEL_5;
    }
    if ( v6 != 2 )
      return;
  }
  v7 = 2;
LABEL_5:
  v8 = operator new(0xA40uLL);
  memset(v8, 0, 0xA40uLL);
  v13 = v8;
  if ( !v8 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 0, 466, 3);
LABEL_16:
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  *v8 = a2;
  v8[1] = v7;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**(_QWORD **)(a1 + 64) + 40LL))(
          *(_QWORD *)(a1 + 64),
          v8,
          a1);
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_16;
    v12 = 470;
LABEL_15:
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, v12, v10);
    goto LABEL_16;
  }
  v10 = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey(a1 + 72, v8, &v13);
  if ( v10 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_16;
    v12 = 471;
    goto LABEL_15;
  }
}
