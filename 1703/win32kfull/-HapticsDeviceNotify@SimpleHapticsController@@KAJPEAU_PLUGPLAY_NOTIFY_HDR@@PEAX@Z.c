/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0222410
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C022215C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C02231A4 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context)
{
  int v2; // edi
  __int64 v3; // rax
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 v9; // rax
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  __int64 v14; // rax
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  _DWORD v20[4]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+17h] BYREF
  _DWORD *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]

  v2 = 0;
  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v3 )
  {
    v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v9 )
    {
      v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v14 )
        v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( !v14 )
      {
        if ( (unsigned int)dword_1C0324150 > 4 )
        {
          TlgCreateSz(&pDesc, "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE");
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECB50, v15, v16, 3u, &pData);
        }
        v2 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
        if ( v2 < 0 )
        {
          if ( (unsigned int)dword_1C0324150 > 2 )
          {
            TlgCreateSz(&pDesc, "Function failed.");
            v25 = 0;
            v23 = v20;
            v20[0] = v2;
            v24 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v17, v18, 4u, &pData);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::HapticsDeviceNotify",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            786,
            v2,
            "Function failed.");
        }
      }
    }
    else
    {
      if ( (unsigned int)dword_1C0324150 > 4 )
      {
        TlgCreateSz(&pDesc, "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED");
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECB50, v10, v11, 3u, &pData);
      }
      v2 = SimpleHapticsController::OpenHapticsDevice(Context);
      if ( v2 < 0 )
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v25 = 0;
          v23 = v20;
          v20[0] = v2;
          v24 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v12, v13, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          780,
          v2,
          "Function failed.");
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0324150 > 4 )
    {
      TlgCreateSz(&pDesc, "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE");
      TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECB50, v5, v6, 3u, &pData);
    }
    v2 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
    if ( v2 < 0 )
    {
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v25 = 0;
        v23 = v20;
        v20[0] = v2;
        v24 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v7, v8, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        775,
        v2,
        "Function failed.");
    }
  }
  return (unsigned int)v2;
}
