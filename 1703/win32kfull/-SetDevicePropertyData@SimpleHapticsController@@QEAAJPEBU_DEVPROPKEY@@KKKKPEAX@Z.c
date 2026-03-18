/*
 * XREFs of ?SetDevicePropertyData@SimpleHapticsController@@QEAAJPEBU_DEVPROPKEY@@KKKKPEAX@Z @ 0x1C0223E20
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::SetDevicePropertyData(
        SimpleHapticsController *this,
        const struct _DEVPROPKEY *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        PVOID Data)
{
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // r9d
  LPCGUID v12; // r9
  LPCGUID v13; // r8
  LPCGUID v14; // r8
  LPCGUID v15; // r9
  NTSTATUS v17; // [rsp+48h] [rbp-31h] BYREF
  int v18; // [rsp+4Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-1h] BYREF
  NTSTATUS *v21; // [rsp+88h] [rbp+Fh]
  int v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+94h] [rbp+1Bh]

  v17 = 0;
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SendDeviceIOControl entry");
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBC1, v8, v9, 4u, &pData);
  }
  v10 = *((_QWORD *)this + 7);
  if ( v10 )
  {
    v17 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v10 + 8),
            &DEVPKEY_InteractiveControl_DeviceType,
            0,
            0,
            7u,
            4u,
            Data);
    v11 = v17;
    if ( v17 < 0 )
    {
      if ( (unsigned int)dword_1C0324150 > 2 )
      {
        TlgCreateSz(&pDesc, "Function failed.");
        v23 = 0;
        v21 = &v18;
        v18 = (int)v12;
        v22 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v13, v12, 4u, &pData);
        v11 = v17;
      }
      DbgPrintEx(
        0x4Du,
        0,
        "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
        "SimpleHapticsController::SetDevicePropertyData",
        "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
        451,
        v11,
        "Function failed.");
      v11 = v17;
    }
  }
  else
  {
    v11 = -1073741436;
    v17 = -1073741436;
  }
  if ( (unsigned int)dword_1C0324150 > 4 )
  {
    TlgCreateSz(&pDesc, "SimpleHapticsController::SendDeviceIOControl exit");
    v23 = 0;
    v21 = &v17;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECBC1, v14, v15, 4u, &pData);
    return (unsigned int)v17;
  }
  return v11;
}
