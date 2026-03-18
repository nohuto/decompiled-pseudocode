/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C001849C
 * Callers:
 *     Endpoint_Enable @ 0x1C00185D0 (Endpoint_Enable.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0033860 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0033A70 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_EnableCompletion @ 0x1C0033DA0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C0034130 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C00359BC (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0035E30 (UsbDevice_UcxEvtDisable.c)
 *     UsbDevice_UcxEvtEnable @ 0x1C00360C0 (UsbDevice_UcxEvtEnable.c)
 *     UsbDevice_UcxEvtEndpointsConfigure @ 0x1C00362A0 (UsbDevice_UcxEvtEndpointsConfigure.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0036D50 (UsbDevice_UcxEvtReset.c)
 * Callees:
 *     XilEndpoint_FreeStreamContextArray @ 0x1C00178C8 (XilEndpoint_FreeStreamContextArray.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C001D8AC (WPP_RECORDER_SF_ddql.c)
 *     TR_Disable_Internal @ 0x1C0022ADC (TR_Disable_Internal.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 a1, int a2, int a3)
{
  char v3; // di
  __int64 v5; // rdx
  bool v6; // si
  __int64 v7; // rdi
  unsigned int i; // ebp
  __int64 v9; // rdx

  v3 = a2;
  WPP_RECORDER_SF_ddql(*(_QWORD *)(*(_QWORD *)a1 + 72LL), a2, a3, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL));
  v6 = !*(_BYTE *)(a1 + 36) && !*(_BYTE *)(a1 + 1336) || v3;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v7 = *(_QWORD *)(a1 + 136);
    if ( v7 )
    {
      for ( i = 1; i <= *(_DWORD *)(v7 + 8); ++i )
      {
        LOBYTE(v5) = v6;
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48), v5);
      }
    }
  }
  else
  {
    v7 = 0LL;
    LOBYTE(v5) = v6;
    TR_Disable_Internal(*(_QWORD *)(a1 + 88), v5);
  }
  if ( v6 )
  {
    if ( v7 )
    {
      XilEndpoint_FreeStreamContextArray((_QWORD *)v7);
      if ( v7 == *(_QWORD *)(a1 + 128) )
      {
        ExFreePoolWithTag((PVOID)v7, 0x49434858u);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
      if ( v9 != *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control, v9);
    }
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
