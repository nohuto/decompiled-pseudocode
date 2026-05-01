/*
 * XREFs of ?HamSrvTerminateActivityHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180006488
 * Callers:
 *     HamRpcSrvTerminateActivityHost @ 0x180006480 (HamRpcSrvTerminateActivityHost.c)
 * Callees:
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800066B8 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateActivityHost(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 *a5)
{
  struct _CEM_RC_OBJECT *v9; // rdi
  __int64 v10; // rax
  struct _HAM_ACTIVITY *v11; // rax
  DWORD v12; // edi
  UINT32 cData; // edx
  int v14; // r9d
  __int64 v15; // rax
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+F0h] [rbp-10h] BYREF
  int *v25; // [rsp+110h] [rbp+10h]
  int v26; // [rsp+118h] [rbp+18h]
  int v27; // [rsp+11Ch] [rbp+1Ch]
  unsigned __int64 *v28; // [rsp+120h] [rbp+20h]
  UINT32 v29; // [rsp+128h] [rbp+28h]
  int v30; // [rsp+12Ch] [rbp+2Ch]
  char *v31; // [rsp+130h] [rbp+30h]
  int v32; // [rsp+138h] [rbp+38h]
  int v33; // [rsp+13Ch] [rbp+3Ch]
  int *v34; // [rsp+140h] [rbp+40h]
  int v35; // [rsp+148h] [rbp+48h]
  int v36; // [rsp+14Ch] [rbp+4Ch]
  __int64 *v37; // [rsp+150h] [rbp+50h]
  UINT32 v38; // [rsp+158h] [rbp+58h]
  int v39; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v40; // [rsp+160h] [rbp+60h]
  UINT32 v41; // [rsp+168h] [rbp+68h]
  int v42; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  v20 = a2;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082285, 0LL, 0LL, 2u, &pData);
  v9 = 0LL;
  if ( a5 )
    v10 = *a5;
  else
    v10 = 0LL;
  v21 = v10;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  if ( a3 - 1 > 2 )
  {
    v18 = -1073741583;
  }
  else
  {
    if ( a4 - 1 > 0x18FE )
    {
      v18 = -1073741582;
      goto LABEL_13;
    }
    if ( a5 && !*a5 )
    {
      v18 = -1073741581;
      goto LABEL_13;
    }
    v11 = HampActFindForClient(a1, v20);
    v9 = v11;
    if ( !v11 )
    {
      v18 = -1073741275;
      goto LABEL_13;
    }
    v18 = HampActTerminate(v11, a3, a4, a5);
    if ( v18 >= 0 )
      v18 = 0;
  }
  if ( v9 )
    CemRcObjectDereference(v9);
LABEL_13:
  v12 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v25 = &v18;
    v28 = &v20;
    v31 = &v17;
    v34 = (int *)&v19;
    v37 = &v21;
    v26 = v14;
    v29 = cData;
    v17 = a3;
    v32 = 1;
    v19 = a4;
    v35 = v14;
    v38 = cData;
    if ( a5 )
      v15 = *a5;
    else
      v15 = 0LL;
    v42 = 0;
    v22 = v15;
    v40 = &v22;
    v41 = cData;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180081A0F, 0LL, 0LL, cData, &v24);
  }
  return (unsigned int)v18;
}
