/*
 * XREFs of ?HamSrvPackageGetDebugMode@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKPEAE@Z @ 0x18000EB60
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x18000EB30 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     _TlgCreateSid @ 0x18000EE38 (_TlgCreateSid.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000EE58 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x18000F0E0 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvPackageGetDebugMode(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        SID *a3,
        unsigned int a4,
        bool *a5)
{
  struct _HAM_PACKAGE *v9; // rax
  struct _CEM_RC_OBJECT *v10; // rbx
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-CCh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[208]; // [rsp+60h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v20; // [rsp+1D0h] [rbp+D0h]
  int v21; // [rsp+1D8h] [rbp+D8h]
  int v22; // [rsp+1DCh] [rbp+DCh]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+1E0h] [rbp+E0h] BYREF
  void *v24; // [rsp+1F0h] [rbp+F0h]
  int v25; // [rsp+1F8h] [rbp+F8h]
  int v26; // [rsp+1FCh] [rbp+FCh]
  unsigned int *v27; // [rsp+200h] [rbp+100h]
  int v28; // [rsp+208h] [rbp+108h]
  int v29; // [rsp+20Ch] [rbp+10Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+210h] [rbp+110h] BYREF
  unsigned int *v31; // [rsp+220h] [rbp+120h]
  int v32; // [rsp+228h] [rbp+128h]
  int v33; // [rsp+22Ch] [rbp+12Ch]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+230h] [rbp+130h] BYREF
  bool *v35; // [rsp+240h] [rbp+140h]
  int v36; // [rsp+248h] [rbp+148h]
  int v37; // [rsp+24Ch] [rbp+14Ch]

  if ( _volatile_metadata > 4u )
  {
    EventDescriptor.Keyword = 0LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800817C7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v20 = &unk_1800817D2;
    UserData.Reserved = 2;
    v21 = 24;
    v22 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  HampPkgInfoInitialize(a2, a3, a4, (struct _HAM_PACKAGE_INFO *)v17);
  v9 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v17);
  v10 = v9;
  if ( v9 )
  {
    *a5 = HampPkgSnapshotDebugState(v9);
    v13 = 0;
    CemRcObjectDereference(v10);
  }
  else
  {
    v13 = -1073741275;
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v29 = 0;
    v27 = &v13;
    v28 = 4;
    TlgCreateWsz(&pDesc, a2);
    v33 = 0;
    v31 = &v14;
    v14 = a4;
    v32 = 4;
    TlgCreateSid(&v34, a3);
    v37 = 0;
    v36 = 1;
    v35 = a5;
    *(_DWORD *)&v16.Level = 516;
    v23.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&v16.Id = ((unsigned int)&unk_180082228 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v16.Keyword = 8LL;
    v23.Size = *(unsigned __int16 *)off_1800920F8;
    v24 = &unk_180082233;
    v26 = 1;
    v23.Reserved = 2;
    v25 = 81;
    EventWriteTransfer(RegHandle, &v16, 0LL, 0LL, 7u, &v23);
  }
  return v13;
}
