/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021AB34
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C01D9430 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01C01F0 (GetDPITransformationMonitor.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021A328 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C021FBA0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        int a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  int Device; // [rsp+30h] [rbp-69h] BYREF
  int v20; // [rsp+34h] [rbp-65h] BYREF
  int v21; // [rsp+38h] [rbp-61h] BYREF
  struct InteractiveControlDevice *v22; // [rsp+40h] [rbp-59h] BYREF
  struct InteractiveControlInput *v23; // [rsp+48h] [rbp-51h] BYREF
  __int64 v24[2]; // [rsp+50h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-19h] BYREF
  int *p_Device; // [rsp+90h] [rbp-9h]
  int v28; // [rsp+98h] [rbp-1h]
  int v29; // [rsp+9Ch] [rbp+3h]
  int *v30; // [rsp+A0h] [rbp+7h]
  int v31; // [rsp+A8h] [rbp+Fh]
  int v32; // [rsp+ACh] [rbp+13h]

  Device = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24[0] = 0LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportInfo entry");
    v29 = 0;
    v32 = 0;
    p_Device = &v21;
    v30 = &v20;
    v21 = a2;
    v28 = 4;
    v20 = a3;
    v31 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC474, v8, v9, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v22, 0LL);
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v22, (unsigned __int16)a3, &v23) )
    {
      v12 = v23;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v23 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v15 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), 1);
      if ( v15 )
      {
        if ( PsGetCurrentProcessWin32Process(v14, v13) == *(_QWORD *)(*(_QWORD *)(v15 + 16) + 376LL) )
        {
          GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v15, v24);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, v24);
        }
        else
        {
          Device = -1073741727;
        }
      }
    }
    else
    {
      Device = -1073741811;
    }
  }
  else if ( (unsigned int)dword_1C0324190 > 2 )
  {
    TlgCreateSz(&pDesc, "Function failed.");
    v29 = 0;
    p_Device = &v20;
    v20 = (int)v10;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v11, v10, 4u, &pData);
  }
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportInfo exit");
    v29 = 0;
    p_Device = &Device;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v16, v17, 4u, &pData);
  }
  return (unsigned int)Device;
}
