/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C021A880
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1C01DC650 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021A328 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C021FBA0 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C0224888 (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PR.c)
 */

__int64 __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  int *v7; // r14
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  unsigned int v13; // r9d
  struct _INTERACTIVECTRL_CAPABILITIES *v14; // rcx
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  LPCGUID v17; // r8
  LPCGUID v18; // r9
  int Device; // [rsp+48h] [rbp-A1h] BYREF
  int v21; // [rsp+4Ch] [rbp-9Dh] BYREF
  __int64 v22; // [rsp+50h] [rbp-99h] BYREF
  struct InteractiveControlDevice *v23; // [rsp+58h] [rbp-91h] BYREF
  struct InteractiveControlInput *v24; // [rsp+60h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-61h] BYREF
  int *p_Device; // [rsp+98h] [rbp-51h]
  __int64 v28; // [rsp+A0h] [rbp-49h]
  int *v29; // [rsp+A8h] [rbp-41h]
  __int64 v30; // [rsp+B0h] [rbp-39h]
  unsigned __int16 *v31; // [rsp+B8h] [rbp-31h]
  __int64 v32; // [rsp+C0h] [rbp-29h]
  unsigned __int16 *v33; // [rsp+C8h] [rbp-21h]
  __int64 v34; // [rsp+D0h] [rbp-19h]
  unsigned __int16 *v35; // [rsp+D8h] [rbp-11h]
  __int64 v36; // [rsp+E0h] [rbp-9h]
  unsigned __int16 v37; // [rsp+150h] [rbp+67h] BYREF

  v37 = a4;
  v7 = a7;
  Device = 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportExtendedUsage entry");
    LODWORD(v22) = a2;
    p_Device = (int *)&v22;
    v29 = &v21;
    v31 = &v37;
    v33 = &a5;
    v35 = &a6;
    v28 = 4LL;
    v21 = a3;
    v30 = 4LL;
    v32 = 2LL;
    v34 = 2LL;
    v36 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC40C, v11, v12, 8u, &pData);
  }
  Device = InteractiveControlManager::FindDevice(this, a2, 0LL, &v23, 0LL);
  v13 = Device;
  if ( Device < 0 )
  {
    if ( (unsigned int)dword_1C0324190 <= 2 )
      goto LABEL_11;
LABEL_10:
    TlgCreateSz(&pDesc, "Function failed.");
    v21 = (int)v15;
    p_Device = &v21;
    v28 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECB18, v16, v15, 4u, &pData);
    v13 = Device;
    goto LABEL_11;
  }
  if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v23, (unsigned __int16)a3, &v24) )
  {
    v13 = -1073741811;
    Device = -1073741811;
    goto LABEL_11;
  }
  Device = InteractiveControlParser::ExtractCustomUsage(
             v14,
             *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)v24 + 5) + 248LL),
             *((unsigned __int8 **)v24 + 10),
             *((_DWORD *)v24 + 22),
             v37,
             a5,
             a6,
             v7);
  v13 = Device;
  if ( Device < 0 && (unsigned int)dword_1C0324190 > 2 )
    goto LABEL_10;
LABEL_11:
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetReportExtendedUsage exit");
    v21 = *v7;
    v29 = &v21;
    p_Device = &Device;
    v28 = 4LL;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC3CC, v17, v18, 5u, &pData);
    return (unsigned int)Device;
  }
  return v13;
}
