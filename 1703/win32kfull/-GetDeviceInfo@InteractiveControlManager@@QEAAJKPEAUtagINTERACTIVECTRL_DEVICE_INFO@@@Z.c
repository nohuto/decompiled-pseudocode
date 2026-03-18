/*
 * XREFs of ?GetDeviceInfo@InteractiveControlManager@@QEAAJKPEAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1C021A378
 * Callers:
 *     NtUserGetInteractiveControlDeviceInfo @ 0x1C01D92E0 (NtUserGetInteractiveControlDeviceInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021A328 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceInfo(
        InteractiveControlManager *this,
        int a2,
        struct tagINTERACTIVECTRL_DEVICE_INFO *a3)
{
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  unsigned int v8; // r9d
  LPCGUID v9; // r9
  LPCGUID v10; // r8
  struct InteractiveControlDevice *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // eax
  LPCGUID v18; // r8
  LPCGUID v19; // r9
  int Device; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+34h] [rbp-35h] BYREF
  struct InteractiveControlDevice *v23; // [rsp+38h] [rbp-31h] BYREF
  __int64 v24; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  int *p_Device; // [rsp+80h] [rbp+17h]
  int v28; // [rsp+88h] [rbp+1Fh]
  int v29; // [rsp+8Ch] [rbp+23h]

  Device = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceInfo entry");
    v29 = 0;
    p_Device = &v22;
    v22 = a2;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC2DB, v6, v7, 4u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v23, 0LL);
  v8 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1C0324190 <= 2 )
      goto LABEL_14;
    TlgCreateSz(&pDesc, "Function failed.");
    v29 = 0;
    p_Device = &v22;
    v22 = (int)v9;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v10, v9, 4u, &pData);
    goto LABEL_6;
  }
  v11 = v23;
  *(_DWORD *)a3 = *((_DWORD *)v23 + 2);
  *((_DWORD *)a3 + 5) = *((_DWORD *)v11 + 40);
  *((_DWORD *)a3 + 6) = *((_DWORD *)v11 + 38);
  v12 = 1;
  v13 = *((_QWORD *)v11 + 47);
  if ( v13 )
    v12 = *(_DWORD *)(v13 + 76);
  *((_DWORD *)a3 + 8) = v12;
  v14 = 0;
  v15 = *((_QWORD *)v11 + 47);
  if ( v15 )
    v14 = *(_DWORD *)(v15 + 88);
  *((_DWORD *)a3 + 9) = v14;
  v16 = *((_QWORD *)v11 + 30);
  if ( v16 )
  {
    LODWORD(v23) = *((_DWORD *)v11 + 55) - *((_DWORD *)v11 + 53);
    HIDWORD(v23) = *((_DWORD *)v11 + 56) - *((_DWORD *)v11 + 54);
    RIMTransformDimensionFromDigitizer(v16, 0LL, &v23, &v24);
    v17 = v24;
    *((_DWORD *)a3 + 1) = 0;
    *((_DWORD *)a3 + 2) = 0;
    *(_QWORD *)((char *)a3 + 12) = __PAIR64__(HIDWORD(v24), v17);
LABEL_6:
    v8 = Device;
    goto LABEL_14;
  }
  *(_OWORD *)((char *)a3 + 4) = *(_OWORD *)((char *)v11 + 212);
LABEL_14:
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceInfo exit");
    v29 = 0;
    p_Device = &Device;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v18, v19, 4u, &pData);
    return (unsigned int)Device;
  }
  return v8;
}
