/*
 * XREFs of ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C022215C
 * Callers:
 *     ?DeInitialize@SimpleHapticsController@@QEAAJXZ @ 0x1C0222320 (-DeInitialize@SimpleHapticsController@@QEAAJXZ.c)
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0222410 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C02231A4 (-OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::CloseHapticsWriteDevice(SimpleHapticsController *this, int a2)
{
  NTSTATUS v2; // edi
  void *v4; // rcx
  void *v5; // rcx
  NTSTATUS v6; // edi
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  void *v11; // rcx
  NTSTATUS v13; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  NTSTATUS *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]

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
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v19 = 0;
        v17 = &v13;
        v13 = v6;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v7, v8, 4u, &pData);
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
    v2 = ZwClose(*((HANDLE *)this + 3));
    if ( v2 < 0 )
    {
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v19 = 0;
        v17 = &v13;
        v13 = v2;
        v18 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v9, v10, 4u, &pData);
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
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
  {
    ObfDereferenceObject(v11);
    *((_QWORD *)this + 7) = 0LL;
  }
  return (unsigned int)v2;
}
