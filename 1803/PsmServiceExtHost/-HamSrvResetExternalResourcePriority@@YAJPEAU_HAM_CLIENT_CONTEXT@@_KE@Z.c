/*
 * XREFs of ?HamSrvResetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KE@Z @ 0x1800637A0
 * Callers:
 *     HamRpcSrvResetExternalResourcePriority @ 0x1800678E0 (HamRpcSrvResetExternalResourcePriority.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z @ 0x180068388 (-HampActResetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@E@Z.c)
 */

__int64 __fastcall HamSrvResetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned __int8 a3)
{
  struct _CEM_RC_OBJECT *v4; // rbx
  struct _HAM_ACTIVITY *v5; // rax
  DWORD v6; // ebx
  int v7; // edx
  unsigned __int8 v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-20h] BYREF
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]
  int v16; // [rsp+10Ch] [rbp+Ch]
  unsigned __int64 *v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  int v19; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int8 *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v11 = a2;
  v9 = a3;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081EE9, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = 0LL;
  if ( (unsigned int)v9 - 3 > 0x2D )
  {
    v10 = -1073741583;
  }
  else
  {
    v5 = HampActFindForClient(a1, v11);
    v4 = v5;
    if ( !v5 )
    {
      v10 = -1073741275;
      goto LABEL_11;
    }
    v10 = HampActResetExternalResourcePriority(v5, v9);
    if ( v10 >= 0 )
      v10 = 0;
  }
  if ( v4 )
    CemRcObjectDereference(v4);
LABEL_11:
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v14 = &v10;
    v17 = &v11;
    v20 = &v9;
    v15 = 4;
    v18 = v7;
    v21 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081CFF, 0LL, 0LL, 5u, &v13);
  }
  return (unsigned int)v10;
}
