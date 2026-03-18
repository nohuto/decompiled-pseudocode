/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021B0A8
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00B0690 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021A328 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021B3D4 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  unsigned int v6; // r9d
  LPCGUID v7; // r9
  LPCGUID v8; // r8
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  int Device; // [rsp+38h] [rbp-29h] BYREF
  struct InteractiveControlDevice *v13; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp+7h] BYREF
  struct InteractiveControlDevice **p_Device; // [rsp+78h] [rbp+17h]
  int v17; // [rsp+80h] [rbp+1Fh]
  int v18; // [rsp+84h] [rbp+23h]
  __int64 v19; // [rsp+88h] [rbp+27h]
  _DWORD v20[6]; // [rsp+90h] [rbp+2Fh] BYREF

  Device = 0;
  v13 = 0LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceRemoval entry");
    v18 = 0;
    v20[1] = 0;
    p_Device = (struct InteractiveControlDevice **)v20;
    v19 = *((_QWORD *)a2 + 35);
    v20[0] = *((unsigned __int16 *)a2 + 136);
    v17 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC4B8, v4, v5, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, 0, a2, &v13, 0LL);
  v6 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1C0324190 <= 2 )
      goto LABEL_9;
    goto LABEL_8;
  }
  Device = InteractiveControlManager::RemoveDevice(this, v13);
  v6 = Device;
  if ( Device < 0 && (unsigned int)dword_1C0324190 > 2 )
  {
LABEL_8:
    TlgCreateSz(&pDesc, "Function failed.");
    v18 = 0;
    p_Device = &v13;
    LODWORD(v13) = (_DWORD)v7;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v8, v7, 4u, &pData);
    v6 = Device;
  }
LABEL_9:
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceRemoval exit");
    v18 = 0;
    p_Device = (struct InteractiveControlDevice **)&Device;
    v17 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v9, v10, 4u, &pData);
    return (unsigned int)Device;
  }
  return v6;
}
