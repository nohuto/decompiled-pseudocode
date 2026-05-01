/*
 * XREFs of ?HampHostQueryProcessCountCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180032FE0
 * Callers:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueryProcessCountCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, int a3, _DWORD *a4)
{
  unsigned int v6; // ecx
  char v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+34h] [rbp-45h] BYREF
  _BYTE ProcessInformation[56]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int v11; // [rsp+78h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+7h] BYREF
  int *v13; // [rsp+A0h] [rbp+27h]
  int v14; // [rsp+A8h] [rbp+2Fh]
  int v15; // [rsp+ACh] [rbp+33h]
  char *v16; // [rsp+B0h] [rbp+37h]
  int v17; // [rsp+B8h] [rbp+3Fh]
  int v18; // [rsp+BCh] [rbp+43h]

  ++a4[1];
  NtQueryInformationProcess(a2, ProcessBasicInformation, ProcessInformation, 0x40u, 0LL);
  v6 = v11 >> 2;
  *a4 += (v11 & 4) != 0;
  if ( _volatile_metadata > 5u )
  {
    v15 = 0;
    v13 = &v9;
    v18 = 0;
    v16 = &v8;
    v9 = a3;
    v14 = 4;
    v8 = v6 & 1;
    v17 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082A8F, 0LL, 0LL, 4u, &pData);
  }
  return 0LL;
}
