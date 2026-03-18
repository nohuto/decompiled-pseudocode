/*
 * XREFs of ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C02235F4
 * Callers:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C02237D4 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C02238D0 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C0224668 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::CloseHapticsWriteDevice(SimpleHapticsController *this, int a2)
{
  unsigned int v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // edi
  const GUID *v7; // r8
  const GUID *v8; // r9
  NTSTATUS v9; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
  void *v12; // rcx
  NTSTATUS v14; // [rsp+48h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+7h] BYREF
  const char *v17; // [rsp+88h] [rbp+27h]
  int v18; // [rsp+90h] [rbp+2Fh]
  int v19; // [rsp+94h] [rbp+33h]
  NTSTATUS *v20; // [rsp+98h] [rbp+37h]
  int v21; // [rsp+A0h] [rbp+3Fh]
  int v22; // [rsp+A4h] [rbp+43h]

  v2 = 0;
  if ( a2 )
  {
    v4 = (void *)*((_QWORD *)this + 4);
    if ( v4 )
    {
      IoUnregisterPlugPlayNotification(v4);
      *((_QWORD *)this + 4) = 0LL;
    }
  }
  v5 = (void *)*((_QWORD *)this + 3);
  if ( v5 )
  {
    v6 = ZwCancelIoFile(v5, &IoStatusBlock);
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        v19 = 0;
        v22 = 0;
        v20 = &v14;
        v17 = "Function failed.";
        v18 = 17;
        v14 = v6;
        v21 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v7, v8, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        728,
        v6,
        "Function failed.");
    }
    v9 = ZwClose(*((HANDLE *)this + 3));
    v2 = v9;
    if ( v9 < 0 )
    {
      if ( (unsigned int)dword_1C0320150 > 2 )
      {
        v19 = 0;
        v22 = 0;
        v14 = v9;
        v20 = &v14;
        v17 = "Function failed.";
        v18 = 17;
        v21 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320150, &unk_1C02E97EB, v10, v11, 4u, &pData);
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::CloseHapticsWriteDevice",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        729,
        v2,
        "Function failed.");
    }
    *((_QWORD *)this + 3) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 7) = 0LL;
  }
  return v2;
}
