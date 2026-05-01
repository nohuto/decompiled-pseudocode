/*
 * XREFs of ?HampManagerDplKeyStateChangedCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180064260
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DATA@@@Z @ 0x1800644A4 (-HampManagerOnDplKeyStateChanged@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_EDP_DPL_WNF_KEYS_STATE_DAT.c)
 */

__int64 __fastcall HampManagerDplKeyStateChangedCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        struct _HOST_ACTIVITY_MANAGER *a4,
        struct _EDP_DPL_WNF_KEYS_STATE_DATA *a5)
{
  int v6; // eax
  DWORD v7; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+D0h] [rbp-30h] BYREF
  int *v14; // [rsp+F0h] [rbp-10h]
  int v15; // [rsp+F8h] [rbp-8h]
  int v16; // [rsp+FCh] [rbp-4h]
  int *v17; // [rsp+100h] [rbp+0h]
  int v18; // [rsp+108h] [rbp+8h]
  int v19; // [rsp+10Ch] [rbp+Ch]
  int *v20; // [rsp+110h] [rbp+10h]
  int v21; // [rsp+118h] [rbp+18h]
  int v22; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800824EE, 0LL, 0LL, 2u, &pData);
  v6 = HampManagerOnDplKeyStateChanged(a4, a5);
  v7 = HampLockTrackerId;
  v9 = v6;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v9;
    v10 = *((_DWORD *)a5 + 3);
    v17 = &v10;
    v11 = *((_DWORD *)a5 + 2);
    v20 = &v11;
    v15 = 4;
    v18 = 4;
    v21 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082484, 0LL, 0LL, 5u, &v13);
  }
  return 0LL;
}
