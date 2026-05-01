/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180016320
 * Callers:
 *     ?ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180016300 (-ReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmCoreRpcSrvReleaseResourceSet @ 0x18001FD90 (RmCoreRpcSrvReleaseResourceSet.c)
 *     RmtSrv_RS_ReleaseResources @ 0x180030650 (RmtSrv_RS_ReleaseResources.c)
 *     ?ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180030680 (-ForceReleaseResources@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     ?HampRmContextDestroy@@YAXPEAX@Z @ 0x180045AA0 (-HampRmContextDestroy@@YAXPEAX@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x180045AE4 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, unsigned int a3)
{
  DWORD v5; // ebx
  int v6; // r12d
  ExecutionModel::BaseResourceSet *v7; // r14
  DWORD v8; // edi
  _BYTE *Value; // rbx
  DWORD CurrentThreadId; // eax
  unsigned __int8 v11; // di
  char *v12; // r13
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // r11
  __int64 v17; // r10
  int v18; // esi
  __int64 v19; // rdi
  int v20; // ebx
  _BYTE *v21; // rax
  DWORD v23; // ebx
  __int64 (__fastcall *v25)(ExecutionModel::BaseResourceSet *); // rax
  __int64 (__fastcall *v26)(ExecutionModel::ResourceSet *, unsigned int); // rax
  int v27; // eax
  __int64 (__fastcall *v28)(ExecutionModel::ResourceSet *); // rax
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v33; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE TlsValue[80]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C8h] [rbp-40h] BYREF
  void *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  int v38; // [rsp+E4h] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+E8h] [rbp-20h] BYREF
  void *v40; // [rsp+F8h] [rbp-10h]
  int v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+104h] [rbp-4h]
  __int64 *v43; // [rsp+108h] [rbp+0h]
  __int64 v44; // [rsp+110h] [rbp+8h]
  __int64 *v45; // [rsp+118h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+18h]

  v32 = a2;
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v6 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x48uLL);
    v5 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      TlsGetValue(HampLockTrackerId);
      TlsSetValue(v5, TlsValue);
    }
    v6 = 1;
  }
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800571C2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v36 = &unk_1800571CD;
    UserData.Reserved = 2;
    v37 = 32;
    v38 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( *(_QWORD *)TlsGetValue(v8) )
        __int2c();
      *(_QWORD *)Value |= 1uLL;
      ++Value[8];
    }
    RtlAcquireSRWLockExclusive(&RmpGlobalLock);
    CurrentThreadId = GetCurrentThreadId();
    v11 = v32;
    v12 = (char *)a1 + 552;
    dword_1800681D0 = CurrentThreadId;
    *(_QWORD *)&EventDescriptor.Id = v32;
    v30 = v32;
    RtlAcquireSRWLockShared((char *)a1 + 552);
    v13 = v11;
    v14 = *((_DWORD *)a1 + 135);
    v15 = 0LL;
    v16 = -1LL << (*((_BYTE *)a1 + 540) & 0x1F);
    v17 = v16 & (HIBYTE(v30)
               + 37
               * (BYTE6(v30)
                + 37
                * (BYTE5(v30)
                 + 37 * (BYTE4(v30) + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * (v13 + 11623883))))))));
    v30 = v17;
LABEL_16:
    if ( v15 )
      goto LABEL_19;
    if ( v14 >> 5 )
    {
      v15 = *((_QWORD *)a1 + 68)
          + 8LL
          * ((37
            * (BYTE6(v30)
             + 37
             * (BYTE5(v30)
              + 37
              * (BYTE4(v30)
               + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v17 + 11623883)))))))
            + HIBYTE(v30)) & ((v14 >> 5) - 1));
LABEL_19:
      while ( 1 )
      {
        v15 = *(_QWORD *)v15;
        if ( (v15 & 1) != 0 )
          break;
        if ( v17 == (v16 & *(_QWORD *)(v15 + 8)) )
        {
          if ( *(_QWORD *)&EventDescriptor.Id != *(_QWORD *)(v15 + 24) )
            goto LABEL_16;
          v18 = 0;
          RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v15);
          goto LABEL_24;
        }
      }
    }
    v15 = *(_QWORD *)&EventDescriptor.Id;
    v18 = -1073741275;
LABEL_24:
    RtlReleaseSRWLockShared(v12);
    v19 = 0LL;
    if ( v18 >= 0 )
      v19 = v15;
    v20 = 0;
    if ( v18 < 0 )
      v20 = v18;
    if ( v20 >= 0 )
    {
      v7 = *(ExecutionModel::BaseResourceSet **)(v19 + 40);
      v25 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v7 + 8LL);
      if ( v25 == ExecutionModel::BaseResourceSet::AddRef )
        ExecutionModel::BaseResourceSet::AddRef(v7);
      else
        v25(v7);
      v20 = 0;
    }
    if ( v19 )
      RmpObjectRelease((char *)v19);
    if ( v20 == -1073741275 )
    {
      LODWORD(v29) = 1;
    }
    else
    {
      v26 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *, unsigned int))(*(_QWORD *)v7 + 32LL);
      if ( v26 == ExecutionModel::ResourceSet::ReleaseResourcesInternal )
        v27 = ExecutionModel::ResourceSet::ReleaseResourcesInternal(v7, a3);
      else
        v27 = v26(v7, a3);
      LODWORD(v29) = v27;
      if ( v27 >= 0 )
        LODWORD(v29) = 0;
    }
    dword_1800681D0 = 0;
    RtlReleaseSRWLockExclusive(&RmpGlobalLock);
    if ( HampLockTrackerId != -1 )
    {
      v21 = TlsGetValue(HampLockTrackerId);
      if ( (*v21 & 1) == 0 )
        __int2c();
      if ( v21[8]-- == 1 )
        *(_QWORD *)v21 &= ~1uLL;
    }
  }
  else
  {
    LODWORD(v29) = -805306127;
  }
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v44 = 4LL;
    v43 = &v29;
    v45 = &v32;
    v46 = 8LL;
    *(_DWORD *)&v33.Level = 516;
    v39.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v33.Id = ((unsigned int)&unk_180056734 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v33.Keyword = 9LL;
    v39.Size = *(unsigned __int16 *)off_1800670C8;
    v40 = &unk_18005673F;
    v39.Reserved = 2;
    v41 = 50;
    v42 = 1;
    EventWriteTransfer(RegHandle, &v33, 0LL, 0LL, 4u, &v39);
  }
  if ( v7 )
  {
    v28 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL);
    if ( v28 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v7);
    else
      v28(v7);
  }
  if ( v6 )
  {
    v23 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v23, 0LL);
    }
  }
  return (unsigned int)v29;
}
