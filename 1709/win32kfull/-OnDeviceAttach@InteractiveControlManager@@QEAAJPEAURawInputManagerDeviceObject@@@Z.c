/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00C6E80 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01ABBC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021BFD0 (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C0220648 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C0220A6C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0220FFC (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02219D0 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C0221A24 (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0221EDC (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2,
        const GUID *a3,
        const GUID *a4)
{
  InteractiveControlDevice *v6; // rax
  const GUID *v7; // r8
  const GUID *v8; // r9
  InteractiveControlDevice *v9; // r14
  __int64 result; // rax
  InteractiveControlDevice *v11; // rbx
  __int64 v12; // rdx
  unsigned int v13; // [rsp+30h] [rbp-39h] BYREF
  int v14; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  const char *v16; // [rsp+60h] [rbp-9h]
  __int64 v17; // [rsp+68h] [rbp-1h]
  unsigned int *v18; // [rsp+70h] [rbp+7h]
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  _DWORD v21[2]; // [rsp+88h] [rbp+1Fh] BYREF

  v13 = 0;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 48LL;
    v16 = "InteractiveControlManager::OnDeviceAttach entry";
    v18 = v21;
    v20 = *((_QWORD *)a2 + 35);
    v21[0] = *((unsigned __int16 *)a2 + 136);
    v19 = 2LL;
    v21[1] = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9099, a3, a4, 5u, &pData);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPool(400LL, 1819440195LL);
  v9 = v6;
  if ( !v6 )
  {
    result = 3221225626LL;
    v13 = -1073741670;
    goto LABEL_20;
  }
  v11 = InteractiveControlDevice::InteractiveControlDevice(v6);
  result = InteractiveControlDevice::Initialize(v11, a2);
  v13 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_1C0320190 <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  result = InteractiveControlManager::InsertDevice(this, (void **)v11);
  v13 = result;
  if ( (int)result < 0 )
  {
    if ( (unsigned int)dword_1C0320190 <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  InteractiveControlDevice::SetBackgroundAccessor(v11, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
  InteractiveControlDevice::SetFocus(v11, *(_QWORD *)this, *((unsigned int *)this + 2));
  if ( *((_DWORD *)this + 2) )
  {
LABEL_15:
    result = v13;
    goto LABEL_16;
  }
  result = InteractiveControlDevice::SetComponentResolution(v11, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
  v13 = result;
  if ( (int)result >= 0 )
    goto LABEL_20;
  if ( (unsigned int)dword_1C0320190 > 2 )
  {
LABEL_14:
    v14 = result;
    v16 = "Function failed.";
    v18 = (unsigned int *)&v14;
    v17 = 17LL;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v7, v8, 4u, &pData);
    goto LABEL_15;
  }
LABEL_16:
  if ( (int)result < 0 )
  {
    if ( v11 )
      InteractiveControlDevice::Deinitialize(v11);
    Win32FreePool(v9, v12, v7);
    result = v13;
  }
LABEL_20:
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v17 = 47LL;
    v16 = "InteractiveControlManager::OnDeviceAttach exit";
    v18 = &v13;
    v19 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v7, v8, 4u, &pData);
    return v13;
  }
  return result;
}
