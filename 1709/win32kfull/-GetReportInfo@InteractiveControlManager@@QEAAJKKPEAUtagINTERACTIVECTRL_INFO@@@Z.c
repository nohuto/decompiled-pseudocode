/*
 * XREFs of ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C021BDA8
 * Callers:
 *     NtUserGetInteractiveControlInfo @ 0x1C01E5CA0 (NtUserGetInteractiveControlInfo.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021B580 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0220FA8 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportInfo(
        InteractiveControlManager *this,
        int a2,
        const GUID *a3,
        struct tagINTERACTIVECTRL_INFO *a4)
{
  unsigned __int16 v5; // bx
  int Device; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // rdx
  struct InteractiveControlInput *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned int v16; // [rsp+30h] [rbp-59h] BYREF
  int v17; // [rsp+34h] [rbp-55h] BYREF
  int v18; // [rsp+38h] [rbp-51h] BYREF
  struct InteractiveControlDevice *v19; // [rsp+40h] [rbp-49h] BYREF
  struct InteractiveControlInput *v20; // [rsp+48h] [rbp-41h] BYREF
  __int64 DPITransformationMonitor; // [rsp+50h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-29h] BYREF
  const char *v23; // [rsp+80h] [rbp-9h]
  __int64 v24; // [rsp+88h] [rbp-1h]
  unsigned int *v25; // [rsp+90h] [rbp+7h]
  __int64 v26; // [rsp+98h] [rbp+Fh]
  int *v27; // [rsp+A0h] [rbp+17h]
  __int64 v28; // [rsp+A8h] [rbp+1Fh]

  v5 = (unsigned __int16)a3;
  v16 = 0;
  v19 = 0LL;
  v20 = 0LL;
  DPITransformationMonitor = 0LL;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v24 = 47LL;
    v23 = "InteractiveControlManager::GetReportInfo entry";
    v25 = (unsigned int *)&v18;
    v27 = &v17;
    v18 = a2;
    v26 = 4LL;
    v17 = (int)a3;
    v28 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E9055, a3, (LPCGUID)a4, 5u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v19, 0LL);
  v16 = Device;
  if ( Device >= 0 )
  {
    if ( (unsigned int)InteractiveControlDevice::GetInputReport(v19, v5, &v20) )
    {
      v12 = v20;
      LOBYTE(v11) = 1;
      *(_OWORD *)a4 = *(_OWORD *)((char *)v20 + 52);
      *((_QWORD *)a4 + 2) = *(_QWORD *)((char *)v12 + 68);
      *((_DWORD *)a4 + 6) = *((_DWORD *)v12 + 19);
      v14 = HMValidateHandleNoSecure(*((_QWORD *)v12 + 2), v11, (__int64)v9, (__int64)v10);
      if ( v14 )
      {
        if ( PsGetCurrentProcessWin32Process(v13) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 400LL) )
        {
          DPITransformationMonitor = GetDPITransformationMonitor(*(_QWORD *)((char *)a4 + 4), v14);
          PhysicalToLogicalDPIPoint((char *)a4 + 4, (char *)a4 + 4, 0LL, &DPITransformationMonitor);
        }
        else
        {
          v16 = -1073741727;
        }
      }
    }
    else
    {
      v16 = -1073741811;
    }
  }
  else if ( (unsigned int)dword_1C0320190 > 2 )
  {
    v17 = Device;
    v23 = "Function failed.";
    v25 = (unsigned int *)&v17;
    v24 = 17LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v9, v10, 4u, &pData);
  }
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v24 = 46LL;
    v23 = "InteractiveControlManager::GetReportInfo exit";
    v25 = &v16;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8EE5, v9, v10, 4u, &pData);
  }
  return v16;
}
