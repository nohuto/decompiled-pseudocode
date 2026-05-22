/*
 * XREFs of ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x180018FE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x18001C7BC (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 *     ?GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z @ 0x18001CB5C (-GetDisplayBindingFromId@DWMInputRouter@@IEAAJIPEAPEAVDisplayBinding@@@Z.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x1800208BC (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z @ 0x1800237E4 (-SetInputDisplay@DisplayBinding@@QEAAJPEAUIInputDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToMonitor(DWMInputRouter *this, unsigned int a2, HMONITOR a3)
{
  unsigned int v6; // ebx
  int DisplayBindingFromId; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // r9d
  struct IInputDisplay *v11; // rbx
  struct DisplayBinding *v12; // rcx
  struct IInputDisplay *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // r9d
  unsigned int v17; // eax
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  struct IInputDisplay *v20; // [rsp+80h] [rbp+30h] BYREF
  struct DisplayBinding *v21; // [rsp+98h] [rbp+48h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  v6 = _InterlockedIncrement(&DisplayBinding::s_currentId);
  if ( v6 == -1 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v19 = DWM_COMPOSITOR_ID;
  DisplayBindingFromId = (*(__int64 (__fastcall **)(char *, _QWORD, __int128 *, _QWORD))(*((_QWORD *)this + 5) + 40LL))(
                           (char *)this + 40,
                           v6,
                           &v19,
                           0LL);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_9:
      v11 = v20;
      goto LABEL_30;
    }
    v10 = 725;
LABEL_8:
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, v10, DisplayBindingFromId);
    goto LABEL_9;
  }
  v12 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  DisplayBindingFromId = DWMInputRouter::GetDisplayBindingFromId((DWMInputRouter *)((char *)this - 8), v6, &v21);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v10 = 727;
    goto LABEL_8;
  }
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  DisplayBindingFromId = DWMInputDisplay::Create(a3, &v20);
  v9 = DisplayBindingFromId;
  if ( DisplayBindingFromId < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v10 = 729;
    goto LABEL_8;
  }
  v11 = v20;
  if ( v20 )
  {
    v14 = DisplayBinding::SetInputDisplay(v21, v20);
    v9 = v14;
    if ( v14 >= 0 )
    {
      v17 = (*(__int64 (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v21 + 24LL))(v21);
      v14 = DWMInputRouter::BindDevicesOfTypeToDisplayBinding((DWMInputRouter *)((char *)this - 8), a2, v17, 1);
      v9 = v14;
      if ( v14 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v16 = 741;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_30;
      v16 = 736;
    }
    McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, v16, v14);
    goto LABEL_30;
  }
  v9 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 733, 14);
LABEL_30:
  if ( v11 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v21 )
    (*(void (__fastcall **)(struct DisplayBinding *))(*(_QWORD *)v21 + 16LL))(v21);
  return v9;
}
