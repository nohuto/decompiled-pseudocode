/*
 * XREFs of HUBMISC_ReportPnPFailureProblem @ 0x1C006E638
 * Callers:
 *     HUBHSM_ReportingErrorToPnp @ 0x1C0007BA0 (HUBHSM_ReportingErrorToPnp.c)
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0013710 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0010794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00389B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMISC_ReportPnPFailureProblem(__int64 a1, ULONG a2)
{
  wchar_t *Data; // rbp
  NTSTATUS Message; // ebx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  BYTE *Text; // r8
  unsigned __int64 i; // rdx
  __int64 v11; // rax
  unsigned __int16 v12; // r9
  SIZE_T v13; // rdi
  wchar_t *PoolWithTag; // rax
  unsigned __int64 v15; // rdi
  int v16; // eax
  unsigned __int64 v17; // rcx
  wchar_t *j; // rax
  int v19; // edi
  struct _DEVICE_OBJECT *v20; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-98h]
  ULONG Size[2]; // [rsp+28h] [rbp-90h]
  PMESSAGE_RESOURCE_ENTRY v23; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v24[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+80h] [rbp-38h]

  Data = 0LL;
  Message = -1073741595;
  v24[0] = *(_OWORD *)L"@System32\\drivers\\usbhub3.sys";
  v24[1] = *(_OWORD *)L"2\\drivers\\usbhub3.sys";
  v25 = *(_QWORD *)L"3.sys";
  v24[2] = *(_OWORD *)L"s\\usbhub3.sys";
  v26 = *(_DWORD *)L"s";
  if ( !a2 )
    goto LABEL_14;
  Message = RtlFindMessage(*(PVOID *)(g_Usbhub3DriverObject + 24), 0xBu, 0, a2, &v23);
  if ( Message < 0 )
    goto LABEL_14;
  v6 = v23->Length - 4LL;
  if ( v6 > 0xFFFFFFFE )
    goto LABEL_14;
  v7 = v6 >> 1;
  v8 = 0LL;
  Text = v23->Text;
  if ( v23 == (PMESSAGE_RESOURCE_ENTRY)-4LL || v7 > 0x7FFFFFFF )
  {
    Message = -1073741811;
  }
  else
  {
    for ( i = v7; i; --i )
    {
      if ( !*(_WORD *)Text )
        break;
      Text += 2;
    }
    Message = i == 0 ? 0xC000000D : 0;
    v8 = i ? v7 - i : 0LL;
  }
  if ( Message < 0 )
    goto LABEL_14;
  v13 = 2 * v8 + 88;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v13, 0x68334855u);
  Data = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_14;
  LODWORD(MessageResourceEntry) = a2;
  Message = RtlStringCbPrintfW(PoolWithTag, v13, L"%s,#%d;%s", v24, MessageResourceEntry, v23->Text);
  if ( Message < 0 )
    goto LABEL_14;
  v15 = v13 >> 1;
  v16 = 0;
  if ( v15 > 0x7FFFFFFF )
  {
    Message = -1073741811;
  }
  else
  {
    v17 = v15;
    for ( j = Data; v17; --v17 )
    {
      if ( !*j )
        break;
      ++j;
    }
    Message = v17 == 0 ? 0xC000000D : 0;
    v16 = v17 ? v15 - v17 : 0;
  }
  v19 = 2 * v16;
  if ( Message < 0 )
  {
LABEL_14:
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    v12 = 118;
LABEL_15:
    Size[0] = Message;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v11 + 64),
      2u,
      5u,
      v12,
      (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
      *(_QWORD *)Size);
    goto LABEL_16;
  }
  v20 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                   WdfDriverGlobals,
                                   a1);
  Message = IoSetDevicePropertyData(v20, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0x19u, v19 + 2, Data);
  if ( Message < 0 )
  {
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            WdfDriverGlobals->Driver,
            off_1C005B110);
    v12 = 117;
    goto LABEL_15;
  }
LABEL_16:
  if ( Data )
    ExFreePoolWithTag(Data, 0x68334855u);
}
