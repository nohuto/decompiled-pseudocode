/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAW4_HAM_EXTERNAL_APPLICATION_STATE@@@Z @ 0x180003588
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x180003580 (HamRpcSrvDebugQueryPackageState.c)
 * Callees:
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180004094 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180011E78 (-HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012AC8 (-HampPkgReleaseLockShared@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        enum _HAM_EXTERNAL_APPLICATION_STATE *a3)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rax
  struct _CEM_RC_OBJECT *v6; // rdi
  __int64 v7; // rbx
  DWORD v8; // ebx
  int v9; // edx
  char v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v16; // [rsp+F0h] [rbp-10h]
  int v17; // [rsp+F8h] [rbp-8h]
  int v18; // [rsp+FCh] [rbp-4h]
  unsigned __int64 *v19; // [rsp+100h] [rbp+0h]
  int v20; // [rsp+108h] [rbp+8h]
  int v21; // [rsp+10Ch] [rbp+Ch]
  char *v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+11Ch] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF

  v13 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008135C, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v5 = HampClientPkgFindByPackageHandle(a1, v13);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)v5 + 7);
    HampPkgAcquireLockShared((struct _HAM_PACKAGE *)v7);
    *(_DWORD *)a3 = *(_DWORD *)(v7 + 352);
    HampPkgReleaseLockShared((struct _HAM_PACKAGE *)v7);
    v12 = 0;
    CemRcObjectDereference(v6);
  }
  else
  {
    v12 = -1073741275;
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v12;
    v19 = &v13;
    v11 = *(_BYTE *)a3;
    v22 = &v11;
    v17 = 4;
    v20 = v9;
    v23 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081621, 0LL, 0LL, 5u, &v15);
  }
  return v12;
}
