/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180023600
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x18002A060 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x180033F20 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x18004D3D0 (RmtSrv_RS_ReleaseResources.c)
 *     ?ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D790 (-ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x18004D9C0 (-ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001EDB0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x180023B54 (CempLockTrackerIsSetForThread.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, int a3)
{
  int v5; // r12d
  ExecutionModel::BaseResourceSet *v6; // rbx
  DWORD v7; // esi
  _QWORD *Value; // rdi
  char *v9; // r14
  __int64 v10; // rdi
  int v11; // esi
  unsigned int v12; // edx
  __int64 v13; // r11
  __int64 v14; // r10
  unsigned int v15; // r9d
  __int64 (__fastcall *v16)(ExecutionModel::BaseResourceSet *); // rax
  __int64 (__fastcall *v17)(ExecutionModel::ResourceSet *, char); // rax
  int v18; // eax
  _QWORD *v19; // rax
  __int64 (__fastcall *v21)(ExecutionModel::ResourceSet *); // rax
  DWORD v23; // ebx
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C8h]
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  char *v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-B0h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v30; // [rsp+70h] [rbp-98h] BYREF
  char v31[144]; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+118h] [rbp+10h] BYREF
  void *v33; // [rsp+128h] [rbp+20h]
  int v34; // [rsp+130h] [rbp+28h]
  int v35; // [rsp+134h] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+138h] [rbp+30h] BYREF
  void *v37; // [rsp+148h] [rbp+40h]
  int v38; // [rsp+150h] [rbp+48h]
  int v39; // [rsp+154h] [rbp+4Ch]
  __int64 *v40; // [rsp+158h] [rbp+50h]
  __int64 v41; // [rsp+160h] [rbp+58h]
  __int64 *v42; // [rsp+168h] [rbp+60h]
  __int64 v43; // [rsp+170h] [rbp+68h]

  v26 = a2;
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v5 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v31);
    v5 = 1;
  }
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007D5DF - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v33 = &unk_18007D5EA;
    UserData.Reserved = 2;
    v34 = 32;
    v35 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v6 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v7) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    v9 = 0LL;
    dword_1800937F8 = GetCurrentThreadId();
    v28 = v26;
    v25 = v26;
    v27 = (char *)a1 + 576;
    RtlAcquireSRWLockShared((char *)a1 + 576);
    v10 = 0LL;
    v11 = -1073741275;
    v12 = *((_DWORD *)a1 + 141);
    v13 = -1LL << (*((_BYTE *)a1 + 564) & 0x1F);
    v14 = v13 & (HIBYTE(v26)
               + 37
               * (BYTE6(v26)
                + 37
                * (BYTE5(v26)
                 + 37
                 * (BYTE4(v26)
                  + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883LL))))))));
    v25 = v14;
LABEL_13:
    if ( v10 )
      goto LABEL_16;
    v15 = v12 >> 5;
    if ( v12 >> 5 )
    {
      v12 = *((_DWORD *)a1 + 141);
      v10 = *((_QWORD *)a1 + 71)
          + 8LL
          * ((37
            * (BYTE6(v25)
             + 37
             * (BYTE5(v25)
              + 37
              * (BYTE4(v25)
               + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v14 + 11623883)))))))
            + HIBYTE(v25)) & (v15 - 1));
LABEL_16:
      while ( 1 )
      {
        v10 = *(_QWORD *)v10;
        if ( (v10 & 1) != 0 )
          break;
        if ( v14 == (v13 & *(_QWORD *)(v10 + 8)) )
        {
          if ( v28 != *(_QWORD *)(v10 + 32) )
            goto LABEL_13;
          v11 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v10 + 16)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_20;
        }
      }
    }
    v10 = (__int64)v27;
LABEL_20:
    RtlReleaseSRWLockShared(v27);
    if ( v11 >= 0 )
    {
      v9 = (char *)v10;
      v6 = *(ExecutionModel::BaseResourceSet **)(v10 + 48);
      v16 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v6 + 8LL);
      if ( v16 == ExecutionModel::BaseResourceSet::AddRef )
        ExecutionModel::BaseResourceSet::AddRef(v6);
      else
        v16(v6);
      v11 = 0;
    }
    if ( v9 )
      RmpObjectRelease(v9);
    if ( v11 == -1073741275 )
    {
      LODWORD(v24) = 1;
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, char))(*(_QWORD *)v6 + 32LL);
      if ( v17 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
        v18 = ExecutionModel::ResourceSet::ReleaseResourcesInternal(v6, a3);
      else
        v18 = v17(v6, a3);
      LODWORD(v24) = v18;
      if ( v18 >= 0 )
        LODWORD(v24) = 0;
    }
    dword_1800937F8 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v19 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v19 & 1) == 0 )
        __int2c();
      if ( v19[1]-- == 1LL )
        *v19 &= ~1uLL;
    }
  }
  else
  {
    LODWORD(v24) = -805306127;
  }
  if ( hProvider > 4u && (qword_1800920C0 & 9) != 0 && (qword_1800920C8 & 9) == qword_1800920C8 )
  {
    v41 = 4LL;
    v40 = &v24;
    v42 = &v26;
    v43 = 8LL;
    *(_DWORD *)&v30.Level = 516;
    v36.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&v30.Id = ((unsigned int)&unk_18007CDD6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v30.Keyword = 9LL;
    v36.Size = *(unsigned __int16 *)off_1800920B8;
    v37 = &unk_18007CDE1;
    v36.Reserved = 2;
    v38 = 50;
    v39 = 1;
    EventWriteTransfer(qword_1800920D0, &v30, 0LL, 0LL, 4u, &v36);
  }
  if ( v6 )
  {
    v21 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL);
    if ( v21 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v6);
    else
      v21(v6);
  }
  if ( v5 )
  {
    v23 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v23, 0LL);
    }
  }
  return (unsigned int)v24;
}
