/*
 * XREFs of ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C021BAFC
 * Callers:
 *     NtUserInteractiveControlQueryUsage @ 0x1C01E8830 (NtUserInteractiveControlQueryUsage.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C021B580 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0220FA8 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     ?ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKGGGPEAJ@Z @ 0x1C0225D54 (-ExtractCustomUsage@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PR.c)
 */

int __fastcall InteractiveControlManager::GetReportExtendedUsage(
        InteractiveControlManager *this,
        int a2,
        const GUID *a3,
        const GUID *a4,
        unsigned __int16 a5,
        unsigned __int16 a6,
        int *a7)
{
  int *v7; // r14
  unsigned __int16 v8; // bx
  int result; // eax
  const GUID *v12; // r8
  const GUID *v13; // r9
  struct _INTERACTIVECTRL_CAPABILITIES *v14; // rcx
  int v15; // [rsp+48h] [rbp-91h] BYREF
  int v16; // [rsp+4Ch] [rbp-8Dh] BYREF
  __int64 v17; // [rsp+50h] [rbp-89h] BYREF
  struct InteractiveControlDevice *v18; // [rsp+58h] [rbp-81h] BYREF
  struct InteractiveControlInput *v19; // [rsp+60h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-71h] BYREF
  const char *v21; // [rsp+88h] [rbp-51h]
  __int64 v22; // [rsp+90h] [rbp-49h]
  int *v23; // [rsp+98h] [rbp-41h]
  __int64 v24; // [rsp+A0h] [rbp-39h]
  int *v25; // [rsp+A8h] [rbp-31h]
  __int64 v26; // [rsp+B0h] [rbp-29h]
  unsigned __int16 *v27; // [rsp+B8h] [rbp-21h]
  __int64 v28; // [rsp+C0h] [rbp-19h]
  unsigned __int16 *v29; // [rsp+C8h] [rbp-11h]
  __int64 v30; // [rsp+D0h] [rbp-9h]
  unsigned __int16 *v31; // [rsp+D8h] [rbp-1h]
  __int64 v32; // [rsp+E0h] [rbp+7h]
  unsigned __int16 v33; // [rsp+140h] [rbp+67h] BYREF

  v33 = (unsigned __int16)a4;
  v7 = a7;
  v8 = (unsigned __int16)a3;
  v15 = 0;
  v18 = 0LL;
  v19 = 0LL;
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v22 = 56LL;
    v21 = "InteractiveControlManager::GetReportExtendedUsage entry";
    v23 = (int *)&v17;
    v25 = &v16;
    v27 = &v33;
    v29 = &a5;
    v31 = &a6;
    LODWORD(v17) = a2;
    v24 = 4LL;
    v16 = (int)a3;
    v26 = 4LL;
    v28 = 2LL;
    v30 = 2LL;
    v32 = 2LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FED, a3, a4, 8u, &pData);
  }
  result = InteractiveControlManager::FindDevice(this, a2, 0LL, &v18, 0LL);
  v15 = result;
  if ( result >= 0 )
  {
    if ( !(unsigned int)InteractiveControlDevice::GetInputReport(v18, v8, &v19) )
    {
      result = -1073741811;
      v15 = -1073741811;
      goto LABEL_11;
    }
    result = InteractiveControlParser::ExtractCustomUsage(
               v14,
               *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)v19 + 5) + 256LL),
               *((unsigned __int8 **)v19 + 10),
               *((_DWORD *)v19 + 22),
               v33,
               a5,
               a6,
               v7);
    v15 = result;
    if ( result >= 0 || (unsigned int)dword_1C0320190 <= 2 )
      goto LABEL_11;
  }
  else if ( (unsigned int)dword_1C0320190 <= 2 )
  {
    goto LABEL_11;
  }
  v16 = result;
  v21 = "Function failed.";
  v23 = &v16;
  v22 = 17LL;
  v24 = 4LL;
  TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8FB5, v12, v13, 4u, &pData);
  result = v15;
LABEL_11:
  if ( (unsigned int)dword_1C0320190 > 4 )
  {
    v22 = 55LL;
    v21 = "InteractiveControlManager::GetReportExtendedUsage exit";
    v23 = &v15;
    v16 = *v7;
    v25 = &v16;
    v24 = 4LL;
    v26 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320190, &unk_1C02E8F75, v12, v13, 5u, &pData);
    return v15;
  }
  return result;
}
