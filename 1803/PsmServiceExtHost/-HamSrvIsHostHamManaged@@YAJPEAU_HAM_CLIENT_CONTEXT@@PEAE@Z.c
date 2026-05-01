/*
 * XREFs of ?HamSrvIsHostHamManaged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAE@Z @ 0x180031928
 * Callers:
 *     HamRpcSrvIsHostHamManaged @ 0x180031920 (HamRpcSrvIsHostHamManaged.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180028414 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x180030538 (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvIsHostHamManaged(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int8 *a2)
{
  unsigned int v4; // r9d
  signed int IsPsmKeyEnabled; // eax
  unsigned __int8 v7; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[560]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v11; // [rsp+270h] [rbp+170h] BYREF
  int *p_ProcessPsmInfo; // [rsp+290h] [rbp+190h]
  int v13; // [rsp+298h] [rbp+198h]
  int v14; // [rsp+29Ch] [rbp+19Ch]
  int *v15; // [rsp+2A0h] [rbp+1A0h]
  int v16; // [rsp+2A8h] [rbp+1A8h]
  int v17; // [rsp+2ACh] [rbp+1ACh]
  unsigned __int8 *v18; // [rsp+2B0h] [rbp+1B0h]
  int v19; // [rsp+2B8h] [rbp+1B8h]
  int v20; // [rsp+2BCh] [rbp+1BCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+2C0h] [rbp+1C0h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800818D0, 0LL, 0LL, 2u, &pData);
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(*((_DWORD *)a1 + 34), (struct _RM_PSM_HOST_INFO *)v10);
  v4 = ProcessPsmInfo;
  if ( ProcessPsmInfo >= 0 )
  {
    IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)v10);
    v4 = IsPsmKeyEnabled;
    if ( IsPsmKeyEnabled )
    {
      if ( IsPsmKeyEnabled > 0 )
        v4 = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    }
    else
    {
      *a2 = v7;
    }
    ProcessPsmInfo = v4;
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v14 = 0;
    v17 = 0;
    v20 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v9 = *((_DWORD *)a1 + 34);
    v15 = &v9;
    v18 = &v7;
    v13 = 4;
    v16 = 4;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800815E4, 0LL, 0LL, 5u, &v11);
    return (unsigned int)ProcessPsmInfo;
  }
  return v4;
}
