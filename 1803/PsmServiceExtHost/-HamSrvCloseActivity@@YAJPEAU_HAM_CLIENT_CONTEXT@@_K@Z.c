/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800112AC
 * Callers:
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180027260 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 *     HamRpcSrvCloseActivity @ 0x180033F40 (HamRpcSrvCloseActivity.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x180023B54 (CempLockTrackerIsSetForThread.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180024930 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v3; // edi
  struct _HAM_ACTIVITY *v4; // rax
  struct _CEM_RC_OBJECT *v5; // rbx
  int v6; // eax
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+110h] [rbp+10h] BYREF
  void *v19; // [rsp+120h] [rbp+20h]
  int v20; // [rsp+128h] [rbp+28h]
  int v21; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v22; // [rsp+130h] [rbp+30h]
  __int64 v23; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v24; // [rsp+140h] [rbp+40h]
  __int64 v25; // [rsp+148h] [rbp+48h]

  v10 = a2;
  if ( _volatile_metadata > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800811CD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v15 = &unk_1800811D8;
    UserData.Reserved = 2;
    v16 = 18;
    v17 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v3 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
    v3 = 1;
  }
  v4 = HampActFindForClient(a1, v10);
  v5 = v4;
  if ( v4 )
  {
    v6 = HampActClose(v4);
    if ( v6 >= 0 )
      v6 = 0;
    v9 = v6;
    CemRcObjectDereference(v5);
  }
  else
  {
    v9 = -1073741275;
  }
  if ( v3 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v23 = 4LL;
    v22 = &v9;
    v24 = &v10;
    v25 = 8LL;
    *(_DWORD *)&v12.Level = 516;
    v18.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&v12.Id = ((unsigned int)&unk_180080F28 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v12.Keyword = 8LL;
    v18.Size = *(unsigned __int16 *)off_1800920F8;
    v19 = &unk_180080F33;
    v18.Reserved = 2;
    v20 = 39;
    v21 = 1;
    EventWriteTransfer(RegHandle, &v12, 0LL, 0LL, 4u, &v18);
  }
  return v9;
}
