/*
 * XREFs of ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C02238D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C02235F4 (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0224668 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 */

__int64 __fastcall SimpleHapticsController::HapticsDeviceNotify(
        char *NotificationStructure,
        SimpleHapticsController *Context,
        const GUID *a3,
        const GUID *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  int v7; // eax
  const GUID *v8; // r8
  const GUID *v9; // r9
  __int64 v10; // rax
  int v11; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rax
  int v15; // eax
  const GUID *v16; // r8
  const GUID *v17; // r9
  _DWORD v19[4]; // [rsp+40h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  const char *v21; // [rsp+70h] [rbp+27h]
  int v22; // [rsp+78h] [rbp+2Fh]
  int v23; // [rsp+7Ch] [rbp+33h]
  _DWORD *v24; // [rsp+80h] [rbp+37h]
  int v25; // [rsp+88h] [rbp+3Fh]
  int v26; // [rsp+8Ch] [rbp+43h]

  v4 = 0;
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( v5 )
  {
    v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
    if ( v10 )
    {
      v14 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
      if ( !v14 )
        v14 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
      if ( !v14 )
      {
        if ( (unsigned int)dword_1C0320150 > 4 )
        {
          v23 = 0;
          v21 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_COMPLETE";
          v22 = 83;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E977A, a3, a4, 3u, &pData);
        }
        v15 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 1);
        v4 = v15;
        if ( v15 < 0 )
        {
          if ( (unsigned int)dword_1C0320150 > 2 )
          {
            v23 = 0;
            v26 = 0;
            v19[0] = v15;
            v24 = v19;
            v21 = "Function failed.";
            v22 = 17;
            v25 = 4;
            TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v16, v17, 4u, &pData);
          }
          DbgPrintEx(
            0x4Du,
            0,
            "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
            "SimpleHapticsController::HapticsDeviceNotify",
            "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
            786,
            v4,
            "Function failed.");
        }
      }
    }
    else
    {
      if ( (unsigned int)dword_1C0320150 > 4 )
      {
        v23 = 0;
        v21 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_REMOVE_CANCELLED";
        v22 = 84;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E977A, a3, a4, 3u, &pData);
      }
      v11 = SimpleHapticsController::OpenHapticsDevice(Context);
      v4 = v11;
      if ( v11 < 0 )
      {
        if ( (unsigned int)dword_1C0320150 > 2 )
        {
          v23 = 0;
          v26 = 0;
          v19[0] = v11;
          v24 = v19;
          v21 = "Function failed.";
          v22 = 17;
          v25 = 4;
          TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v12, v13, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::HapticsDeviceNotify",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          780,
          v4,
          "Function failed.");
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0320150 > 4 )
    {
      v23 = 0;
      v21 = "SimpleHapticsController::HapticsDeviceNotify -> GUID_TARGET_DEVICE_QUERY_REMOVE";
      v22 = 80;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E977A, a3, a4, 3u, &pData);
    }
    v7 = SimpleHapticsController::CloseHapticsWriteDevice(Context, 0);
    v4 = v7;
    if ( v7 < 0 )
    {
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        v23 = 0;
        v26 = 0;
        v19[0] = v7;
        v24 = v19;
        v21 = "Function failed.";
        v22 = 17;
        v25 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v8, v9, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::HapticsDeviceNotify",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        775,
        v4,
        "Function failed.");
    }
  }
  return v4;
}
