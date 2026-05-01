/*
 * XREFs of ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x18001F948
 * Callers:
 *     HamRpcSrvIsHostHamManaged @ 0x18001F940 (HamRpcSrvIsHostHamManaged.c)
 * Callees:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18001E9E0 (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvIsHostHamManaged(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int8 *a2)
{
  const GUID *v4; // r8
  const GUID *v5; // r9
  const GUID *v6; // r9
  signed int IsPsmKeyEnabled; // eax
  const GUID *v8; // r8
  unsigned __int8 v10; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[560]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+270h] [rbp+170h] BYREF
  int *p_ProcessPsmInfo; // [rsp+290h] [rbp+190h]
  int v16; // [rsp+298h] [rbp+198h]
  int v17; // [rsp+29Ch] [rbp+19Ch]
  int *v18; // [rsp+2A0h] [rbp+1A0h]
  int v19; // [rsp+2A8h] [rbp+1A8h]
  int v20; // [rsp+2ACh] [rbp+1ACh]
  unsigned __int8 *v21; // [rsp+2B0h] [rbp+1B0h]
  int v22; // [rsp+2B8h] [rbp+1B8h]
  int v23; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF

  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x20uLL) )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AEED, v4, v5, 2u, &pData);
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(*((_DWORD *)a1 + 31), (struct _RM_PSM_HOST_INFO *)v13);
  LODWORD(v6) = ProcessPsmInfo;
  if ( ProcessPsmInfo >= 0 )
  {
    IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)v13);
    LODWORD(v6) = IsPsmKeyEnabled;
    if ( IsPsmKeyEnabled )
    {
      if ( IsPsmKeyEnabled <= 0 )
      {
        ProcessPsmInfo = IsPsmKeyEnabled;
        goto LABEL_8;
      }
      LODWORD(v6) = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    }
    else
    {
      *a2 = v10;
    }
    ProcessPsmInfo = (int)v6;
  }
LABEL_8:
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x28uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v12 = *((_DWORD *)a1 + 31);
    v18 = &v12;
    v21 = &v10;
    v16 = 4;
    v19 = 4;
    v22 = 1;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AE8F, v8, v6, 5u, &v14);
    LODWORD(v6) = ProcessPsmInfo;
  }
  return (unsigned int)v6;
}
