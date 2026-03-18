/*
 * XREFs of ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0
 * Callers:
 *     EditionDevicePnpNotification @ 0x1C00B0690 (EditionDevicePnpNotification.c)
 *     Win32kRIMDevChangeCallback @ 0x1C01A8830 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z @ 0x1C021AD5C (-InsertDevice@InteractiveControlManager@@AEAAJPEAVInteractiveControlDevice@@@Z.c)
 *     ??0InteractiveControlDevice@@QEAA@XZ @ 0x1C021F248 (--0InteractiveControlDevice@@QEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C021F65C (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021FBF4 (-Initialize@InteractiveControlDevice@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z @ 0x1C02205D8 (-SetBackgroundAccessor@InteractiveControlDevice@@QEAAXPEAUtagWND@@I@Z.c)
 *     ?SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4tagINTERACTIVECTRL_HAPTICS_MODE@@@Z @ 0x1C022062C (-SetComponentResolution@InteractiveControlDevice@@QEAAJW4_INTERACTIVECTRL_COMPONENT_TYPE@@JPEAW4.c)
 *     ?SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0220A08 (-SetFocus@InteractiveControlDevice@@QEAAXPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::OnDeviceAttach(
        InteractiveControlManager *this,
        struct RawInputManagerDeviceObject *a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  InteractiveControlDevice *v6; // rax
  InteractiveControlDevice *v7; // r14
  int v8; // r9d
  InteractiveControlDevice *v9; // rbx
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int inserted; // [rsp+30h] [rbp-49h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  int *p_inserted; // [rsp+70h] [rbp-9h]
  int v20; // [rsp+78h] [rbp-1h]
  int v21; // [rsp+7Ch] [rbp+3h]
  __int64 v22; // [rsp+80h] [rbp+7h]
  _DWORD v23[6]; // [rsp+88h] [rbp+Fh] BYREF

  inserted = 0;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceAttach entry");
    v21 = 0;
    v23[1] = 0;
    p_inserted = v23;
    v22 = *((_QWORD *)a2 + 35);
    v23[0] = *((unsigned __int16 *)a2 + 136);
    v20 = 2;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC4B8, v4, v5, 5u, &pData);
  }
  v6 = (InteractiveControlDevice *)Win32AllocPool(392LL, 1819440195LL);
  v7 = v6;
  if ( !v6 )
  {
    v8 = -1073741670;
    inserted = -1073741670;
    goto LABEL_20;
  }
  v9 = InteractiveControlDevice::InteractiveControlDevice(v6);
  inserted = InteractiveControlDevice::Initialize(v9, a2);
  v8 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0324190 <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  inserted = InteractiveControlManager::InsertDevice(this, (void **)v9);
  v8 = inserted;
  if ( inserted < 0 )
  {
    if ( (unsigned int)dword_1C0324190 <= 2 )
      goto LABEL_16;
    goto LABEL_14;
  }
  InteractiveControlDevice::SetBackgroundAccessor(v9, *((struct tagWND **)this + 2), *((_DWORD *)this + 6));
  InteractiveControlDevice::SetFocus(v9, *(_QWORD *)this, *((unsigned int *)this + 2));
  if ( *((_DWORD *)this + 2) )
  {
LABEL_15:
    v8 = inserted;
    goto LABEL_16;
  }
  inserted = InteractiveControlDevice::SetComponentResolution(v9, 3LL, *((unsigned int *)this + 7), (char *)this + 32);
  v8 = inserted;
  if ( inserted >= 0 )
    goto LABEL_20;
  if ( (unsigned int)dword_1C0324190 > 2 )
  {
LABEL_14:
    TlgCreateSz(&pDesc, "Function failed.");
    v21 = 0;
    p_inserted = &v16;
    v16 = (int)v10;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v11, v10, 4u, &pData);
    goto LABEL_15;
  }
LABEL_16:
  if ( v8 < 0 )
  {
    if ( v9 )
      InteractiveControlDevice::Deinitialize(v9);
    Win32FreePool(v7);
    v8 = inserted;
  }
LABEL_20:
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::OnDeviceAttach exit");
    v21 = 0;
    p_inserted = &inserted;
    v20 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v12, v13, 4u, &pData);
    return (unsigned int)inserted;
  }
  return (unsigned int)v8;
}
