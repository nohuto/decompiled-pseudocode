/*
 * XREFs of ?RmpEnforcerJobCompletionThread@@YAKPEAX@Z @ 0x180025990
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180018048 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z @ 0x1800320F4 (-OnProcessTerminated@ResourceManager@ExecutionModel@@QEAAXK@Z.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003669C (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B3D4 (-RmpHandleMemoryWarning@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpEnforcerJobCompletionThread(void **Parameter)
{
  void *v2; // r14
  DWORD v3; // ebx
  unsigned __int64 v5; // rbx
  unsigned int v6; // edi
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  void *v14; // rcx
  __int64 v15; // rax
  DWORD NumberOfBytesTransferred[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 CompletionKey; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+48h] [rbp-C0h] BYREF
  DWORD v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  DWORD v21; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD JobInformation[2]; // [rsp+70h] [rbp-98h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+80h] [rbp-88h] BYREF
  char v27[80]; // [rsp+88h] [rbp-80h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  DWORD *v29; // [rsp+F8h] [rbp-10h]
  int v30; // [rsp+100h] [rbp-8h]
  int v31; // [rsp+104h] [rbp-4h]
  unsigned int *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  DWORD *v35; // [rsp+118h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]
  int *v38; // [rsp+128h] [rbp+20h]
  int v39; // [rsp+130h] [rbp+28h]
  int v40; // [rsp+134h] [rbp+2Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  v2 = *Parameter;
  while ( 1 )
  {
    while ( !GetQueuedCompletionStatus(v2, NumberOfBytesTransferred, &CompletionKey, &Overlapped, 0xFFFFFFFF) )
    {
      if ( GetLastError() != 1460 )
        goto LABEL_4;
    }
    v5 = CompletionKey;
    if ( !CompletionKey )
      break;
    v6 = *(_DWORD *)(CompletionKey + 88);
    if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v9 = *(_QWORD *)(v5 + 24);
      v31 = 0;
      v34 = 0;
      v37 = 0;
      v23 = v9;
      v29 = (DWORD *)&v23;
      v32 = &v18;
      v19 = NumberOfBytesTransferred[0];
      v35 = &v19;
      v30 = 8;
      v18 = v6;
      v33 = 4;
      v36 = 4;
      LODWORD(v9) = *(_DWORD *)(v5 + 20);
      v40 = 0;
      v20 = v9;
      v38 = &v20;
      v39 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005892E, v7, v8, 6u, &pData);
      v5 = CompletionKey;
    }
    RmpAcquireGlobalLock();
    ++*(_QWORD *)(v5 + 952);
    if ( (*(_BYTE *)(v5 + 960) & 1) != 0 )
    {
      if ( *(_QWORD *)(v5 + 944) == *(_QWORD *)(v5 + 952) )
        RmpObjectRelease((char *)CompletionKey);
LABEL_16:
      RmpReleaseGlobalLock();
    }
    else if ( NumberOfBytesTransferred[0] == 4 )
    {
      v12 = CompletionKey;
      JobInformation[0] = 0LL;
      JobInformation[1] = 0LL;
      v13 = *(_QWORD *)(CompletionKey + 40);
      v14 = *(void **)(CompletionKey + 936);
      *(_DWORD *)(CompletionKey + 960) |= 1u;
      NtSetInformationJobObject(v14, JobObjectAssociateCompletionPortInformation, JobInformation, 0x10u);
      NtQueryInformationJobObject(*(HANDLE *)(v12 + 936), (JOBOBJECTINFOCLASS)17, &v24, 8u, 0LL);
      v15 = v24;
      *(_QWORD *)(v12 + 944) = v24;
      if ( v15 == *(_QWORD *)(v12 + 952) )
        RmpObjectRelease((char *)v12);
      RmpReleaseGlobalLock();
      ExecutionModel::ResourceManager::OnProcessTerminated(*(ExecutionModel::ResourceManager **)(v13 + 1896), v6);
    }
    else
    {
      if ( NumberOfBytesTransferred[0] != 11 || *(int *)(CompletionKey + 20) < 0 )
        goto LABEL_16;
      RmpHandleMemoryWarning((struct _RM_ACTIVITY_HOST *)CompletionKey);
      RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)CompletionKey);
      RmpReleaseGlobalLock();
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v31 = 0;
        v34 = 0;
        v21 = NumberOfBytesTransferred[0];
        v29 = &v21;
        v32 = (unsigned int *)&v22;
        v30 = 4;
        LODWORD(v22) = v6;
        v33 = 4;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800588C0, v10, v11, 4u, &pData);
      }
    }
  }
LABEL_4:
  v3 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v3, 0LL);
  }
  return 0LL;
}
