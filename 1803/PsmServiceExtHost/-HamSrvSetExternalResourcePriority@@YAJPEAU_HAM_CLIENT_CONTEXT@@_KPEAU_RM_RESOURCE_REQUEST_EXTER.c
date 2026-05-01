/*
 * XREFs of ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180063928
 * Callers:
 *     HamRpcSrvSetExternalResourcePriority @ 0x1800678F0 (HamRpcSrvSetExternalResourcePriority.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18006841C (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 */

__int64 __fastcall HamSrvSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  struct _CEM_RC_OBJECT *v5; // rbx
  struct _HAM_ACTIVITY *v6; // rax
  DWORD v7; // ebx
  int v8; // edx
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+E0h] [rbp-20h] BYREF
  int *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v19; // [rsp+110h] [rbp+10h]
  int v20; // [rsp+118h] [rbp+18h]
  int v21; // [rsp+11Ch] [rbp+1Ch]
  int *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  int *v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v13 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008183A, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v5 = 0LL;
  if ( (unsigned int)*(unsigned __int8 *)a3 - 3 > 0x2D )
  {
    v10 = -1073741583;
  }
  else
  {
    if ( (unsigned int)*((unsigned __int8 *)a3 + 1) - 2 > 0x63 )
    {
      v10 = -1073741583;
      goto LABEL_13;
    }
    v6 = HampActFindForClient(a1, v13);
    v5 = v6;
    if ( !v6 )
    {
      v10 = -1073741275;
      goto LABEL_13;
    }
    v10 = HampActSetExternalResourcePriority(v6, a3);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( v5 )
    CemRcObjectDereference(v5);
LABEL_13:
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v10;
    v19 = &v13;
    v11 = *(unsigned __int8 *)a3;
    v22 = &v11;
    v12 = *((unsigned __int8 *)a3 + 1);
    v25 = &v12;
    v17 = 4;
    v20 = v8;
    v23 = 4;
    v26 = 4;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081272, 0LL, 0LL, 6u, &v15);
  }
  return (unsigned int)v10;
}
