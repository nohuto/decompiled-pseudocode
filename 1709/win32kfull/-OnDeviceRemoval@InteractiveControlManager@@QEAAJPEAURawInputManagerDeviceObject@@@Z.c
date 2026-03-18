/*
 * XREFs of ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C310
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00C6E80 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021B580 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021C630 (-RemoveDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceRemoval(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  unsigned int v9; // [rsp+30h] [rbp-29h] BYREF
  struct InteractiveControlDevice *v10; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v12; // [rsp+60h] [rbp+7h]
  __int64 v13; // [rsp+68h] [rbp+Fh]
  struct InteractiveControlDevice **v14; // [rsp+70h] [rbp+17h]
  __int64 v15; // [rsp+78h] [rbp+1Fh]
  __int64 v16; // [rsp+80h] [rbp+27h]
  _DWORD v17[2]; // [rsp+88h] [rbp+2Fh] BYREF

  v9 = 0;
  v10 = 0LL;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v13 = 49LL;
    v12 = "InteractiveControlManager::OnDeviceRemoval entry";
    v14 = (struct InteractiveControlDevice **)v17;
    v16 = *((_QWORD *)a2 + 35);
    v17[0] = *((unsigned __int16 *)a2 + 136);
    v15 = 2LL;
    v17[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9099, a3, a4, 5u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, 0, a2, &v10, 0LL);
  v9 = result;
  if ( (int)result >= 0 )
  {
    result = InteractiveControlManager::RemoveDevice(this, v10);
    v9 = result;
    if ( (int)result >= 0 || (unsigned int)dword_1C0320190 <= 2 )
      goto LABEL_9;
  }
  else if ( (unsigned int)dword_1C0320190 <= 2 )
  {
    goto LABEL_9;
  }
  LODWORD(v10) = result;
  v12 = "Function failed.";
  v14 = &v10;
  v13 = 17LL;
  v15 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v7, v8, 4u, &pData);
  result = v9;
LABEL_9:
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v13 = 48LL;
    v12 = "InteractiveControlManager::OnDeviceRemoval exit";
    v14 = (struct InteractiveControlDevice **)&v9;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v7, v8, 4u, &pData);
    return v9;
  }
  return result;
}
