/*
 * XREFs of ?HamSrvStartActivityAsync@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KW4_HAM_ACTIVITY_START_TYPE@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180024630
 * Callers:
 *     HamRpcSrvStartActivityAsync @ 0x180024E60 (HamRpcSrvStartActivityAsync.c)
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025F30 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     HamRpcSrvStartExtendedExecutionAsync @ 0x180027FE0 (HamRpcSrvStartExtendedExecutionAsync.c)
 * Callees:
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     CempLockTrackerIsSetForThread @ 0x180023B54 (CempLockTrackerIsSetForThread.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

__int64 __fastcall HamSrvStartActivityAsync(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  DWORD v7; // edi
  int v8; // r15d
  int v9; // edi
  struct _HAM_ACTIVITY *v10; // rax
  struct _CEM_RC_OBJECT *v11; // rbx
  unsigned int v12; // edx
  DWORD v13; // ebx
  int started; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+34h] [rbp-CCh] BYREF
  int v17; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR v21; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+100h] [rbp+0h] BYREF
  void *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+120h] [rbp+20h] BYREF
  void *v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  int *p_started; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  int *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  char *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]

  v19 = a2;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180081A90 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v24 = &unk_180081A9B;
    UserData.Reserved = 2;
    v25 = 23;
    v26 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( CempLockTrackerIsSetForThread() )
  {
    v8 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, TlsValue);
    }
    v8 = 1;
  }
  v17 = 0;
  v9 = 0;
  if ( a4 )
  {
    v12 = -1073741822;
LABEL_29:
    started = v12;
    goto LABEL_15;
  }
  if ( a3 > 1 )
  {
    v12 = -1073741583;
    goto LABEL_29;
  }
  v10 = HampActFindForClient(a1, v19);
  v11 = v10;
  if ( !v10 )
  {
    v12 = -1073741275;
    goto LABEL_29;
  }
  started = HampActStartAsync((__int64)v10, a3, &v17);
  if ( started >= 0 )
    started = 0;
  CemRcObjectDereference(v11);
  v12 = started;
  v9 = v17;
LABEL_15:
  if ( v8 )
  {
    v13 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v13, 0LL);
      v12 = started;
    }
  }
  if ( _volatile_metadata <= 4u || (byte_180092100 & 8) == 0 || (qword_180092108 & 8) != qword_180092108 )
    return v12;
  v32 = 4LL;
  p_started = &started;
  v33 = &v19;
  v35 = &v18;
  v37 = &v16;
  v34 = 8LL;
  v18 = v9;
  v36 = 4LL;
  v16 = a3;
  v38 = 1LL;
  *(_DWORD *)&v21.Level = 516;
  v27.Ptr = (ULONGLONG)off_1800920F8;
  *(_DWORD *)&v21.Id = ((unsigned int)&unk_1800817EB - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
  v21.Keyword = 8LL;
  v27.Size = *(unsigned __int16 *)off_1800920F8;
  v28 = &unk_1800817F6;
  v27.Reserved = 2;
  v29 = 67;
  v30 = 1;
  EventWriteTransfer(RegHandle, &v21, 0LL, 0LL, 6u, &v27);
  return (unsigned int)started;
}
