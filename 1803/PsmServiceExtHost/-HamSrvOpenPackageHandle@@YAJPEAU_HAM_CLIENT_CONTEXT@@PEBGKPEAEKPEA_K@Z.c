/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x180004238
 * Callers:
 *     HamRpcSrvServicingOpenPackageHandle @ 0x180004230 (HamRpcSrvServicingOpenPackageHandle.c)
 * Callees:
 *     ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180004408 (-HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x180004580 (CempUtilValidateAndCapturePackageInfo.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

int __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v10; // rdi
  int result; // eax
  DWORD v12; // ebx
  int v13; // r9d
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[208]; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+1B0h] [rbp+B0h] BYREF
  int *v20; // [rsp+1D0h] [rbp+D0h]
  int v21; // [rsp+1D8h] [rbp+D8h]
  int v22; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 *v24; // [rsp+1F0h] [rbp+F0h]
  int v25; // [rsp+1F8h] [rbp+F8h]
  int v26; // [rsp+1FCh] [rbp+FCh]
  unsigned __int64 *v27; // [rsp+200h] [rbp+100h]
  int v28; // [rsp+208h] [rbp+108h]
  int v29; // [rsp+20Ch] [rbp+10Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+210h] [rbp+110h] BYREF

  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081AD6, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v10 = 0LL;
  v15 = 0LL;
  result = CempUtilValidateAndCapturePackageInfo(a2, a4, a5, a3, v17);
  v14 = result;
  if ( result >= 0 )
  {
    result = HampClientPkgCreate((struct _HAM_PACKAGE_INFO *)v17, a1, &v15);
    v10 = v15;
    v14 = result;
    if ( result >= 0 )
    {
      result = 0;
      *a6 = v15;
      v14 = 0;
    }
  }
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
    result = v14;
  }
  if ( _volatile_metadata > 4u )
  {
    v22 = 0;
    v20 = &v14;
    v21 = 4;
    TlgCreateWsz(&pDesc, a2);
    v26 = 0;
    v29 = 0;
    v24 = &v15;
    v27 = &v16;
    LODWORD(v15) = a3;
    v25 = v13;
    v16 = v10;
    v28 = 8;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082305, 0LL, 0LL, 6u, &v19);
    return v14;
  }
  return result;
}
