/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x1800121D0
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180011C00 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@Z @ 0x18001BE88 (-RmpActivityHostUnapplyResourceSet@@YAXPEAU_RM_ACTIVITY_HOST@@PEAVResourceSet@ExecutionModel@@K@.c)
 * Callees:
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x18000631C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180008F30 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000DE10 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x180010680 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x180011988 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001269C (-RmpActivityHostRelease@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180015ED0 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x1800168B0 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x18001AF30 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001EE28 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     TraceLoggingProviderEnabled @ 0x180020094 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, char a2)
{
  UCHAR v4; // dl
  ExecutionModel::ResourceSet *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  ExecutionModel::ResourceManager *v11; // rax
  __int64 (__fastcall *v12)(ExecutionModel::ResourceSet *); // rax
  __int64 (__fastcall *v13)(ExecutionModel::ResourceSet *); // rax
  RmpRpsResourceSetCallback *v14; // rcx
  void (*v15)(void); // rax
  struct _RM_ACTIVITY_HOST *v16; // rcx
  DWORD v17; // r14d
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v27; // [rsp+B0h] [rbp-50h]
  int v28; // [rsp+B8h] [rbp-48h]
  int v29; // [rsp+BCh] [rbp-44h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  char *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  char *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int64 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]

  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
    *((ExecutionModel::ResourceManager **)this + 3),
    (wchar_t **)this,
    0LL);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 235);
  if ( v5 )
    ExecutionModel::ResourceSet::ResetPriorities(v5);
  if ( (*((_BYTE *)this + 1404) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v4, 0LL) )
    {
      v17 = GetTickCount() - *((_DWORD *)this + 479);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 179) + 112LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v23);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
        {
          v20 = *((_QWORD *)this + 237);
          v33 = &v20;
          v35 = &v25;
          v37 = &v24;
          v21 = v17;
          v39 = &v21;
          v34 = 8LL;
          v36 = 8LL;
          v38 = 8LL;
          v40 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180058E85, v18, v19, 6u, &pData);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 12) && (a2 & 1) == 0 )
    RmpCommitValuesAdd(
      *(_QWORD *)(*((_QWORD *)this + 180) + 1144LL),
      *((_QWORD *)this + 191),
      (unsigned __int64 *)(*((_QWORD *)this + 180) + 1144LL));
  RmpResourceSetReleaseResources(*((PVOID *)this + 179));
  *((_QWORD *)this + 179) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v6 = *((_QWORD *)this + 180);
  if ( v6 )
  {
    v7 = v6 + 24 * (*((int *)this + 362) + 34LL);
    v8 = (_QWORD *)((char *)this + 1416);
    v9 = *((_QWORD *)this + 177);
    if ( *(ExecutionModel::ResourceSet **)(v9 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1416)
      || (v10 = (_QWORD *)*((_QWORD *)this + 178), (_QWORD *)*v10 != v8) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *v8 = 0LL;
    *((_QWORD *)this + 178) = 0LL;
    --*(_DWORD *)(v7 + 16);
    v11 = *(ExecutionModel::ResourceManager **)this;
    *((_DWORD *)this + 362) = 2;
    v12 = (__int64 (__fastcall *)(ExecutionModel::ResourceSet *))*((_QWORD *)v11 + 2);
    if ( v12 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v12(this);
    v13 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)this + 16LL);
    if ( v13 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(this);
    else
      v13(this);
  }
  v14 = (RmpRpsResourceSetCallback *)*((_QWORD *)this + 230);
  if ( v14 )
  {
    v15 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
    if ( (char *)v15 == (char *)RmpRpsResourceSetCallback::Release )
    {
      RmpRpsResourceSetCallback::Release(v14);
    }
    else if ( (char *)v15 == (char *)ResourceSetCallbackThunk::Release )
    {
      ResourceSetCallbackThunk::Release(v14);
    }
    else
    {
      v15();
    }
    *((_QWORD *)this + 230) = 0LL;
  }
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  *((_QWORD *)this + 234) = 0LL;
  if ( *((_QWORD *)this + 235) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 235, 0LL);
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v31 = 8LL;
    v30 = (char *)this + 1896;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180058F70 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v27 = &unk_180058F7B;
    UserData.Reserved = 2;
    v28 = 43;
    v29 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v16 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 180);
  if ( v16 )
  {
    RmpActivityHostRelease(v16);
    *((_QWORD *)this + 180) = 0LL;
  }
}
