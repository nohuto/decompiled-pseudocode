/*
 * XREFs of ?HamSrvEnableServicing@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180003718
 * Callers:
 *     HamRpcSrvServicingEnableServicing @ 0x180003710 (HamRpcSrvServicingEnableServicing.c)
 * Callees:
 *     ?HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180003868 (-HampClientPkgEnableServicing@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180004094 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvEnableServicing(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v3; // rax
  struct _CEM_RC_OBJECT *v4; // rbx
  int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rdx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]

  v10 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800820CD, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v3 = HampClientPkgFindByPackageHandle(a1, v10);
  v4 = v3;
  if ( v3 )
  {
    v5 = HampClientPkgEnableServicing(v3, a1);
    if ( v5 >= 0 )
      v5 = 0;
    v9 = v5;
    CemRcObjectDereference(v4);
  }
  else
  {
    v9 = -1073741275;
  }
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v14 = 4LL;
    v13 = &v9;
    v15 = &v10;
    v16 = v7;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081669, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
