/*
 * XREFs of ?PerformReleaseResources@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x18001F380
 * Callers:
 *     ?RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006DB8 (-RmpActivityHostZeroProcessNotification@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z @ 0x18001CEA0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18001EC40 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18001FF90 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022DF0 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180027560 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     TraceLoggingProviderEnabled @ 0x1800289BC (TraceLoggingProviderEnabled.c)
 *     ?RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x18002EF70 (-RmpResourceSetReleaseResources@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18003AA48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ @ 0x18005B074 (-ResetPriorities@ResourceSet@ExecutionModel@@IEAAXXZ.c)
 */

void __fastcall ExecutionModel::ResourceSet::PerformReleaseResources(ExecutionModel::ResourceSet *this, char a2)
{
  UCHAR v4; // dl
  ExecutionModel::ResourceSet *v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  char ***v14; // rax
  unsigned int (__fastcall *v15)(ExecutionModel::ResourceSet *__hidden); // rax
  unsigned int (__fastcall *v16)(ExecutionModel::ResourceSet *__hidden); // rax
  HAM_ACTIVITY_RM_CONTEXT *v17; // rcx
  void (*v18)(void); // rax
  void *v19; // rcx
  unsigned __int64 v20; // rax
  DWORD v21; // r14d
  __int64 v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  char v25[24]; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+68h] [rbp-98h] BYREF
  char v27; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  void *v29; // [rsp+B0h] [rbp-50h]
  int v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+BCh] [rbp-44h]
  char *v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  char *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  char *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  __int64 *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]

  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(
    *((char ****)this + 3),
    (const unsigned __int16 **)this,
    0LL);
  v5 = (ExecutionModel::ResourceSet *)*((_QWORD *)this + 234);
  if ( v5 )
    ExecutionModel::ResourceSet::ResetPriorities(v5);
  if ( (*((_BYTE *)this + 1404) & 1) != 0 )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v4, 0LL) )
    {
      v21 = GetTickCount() - *((_DWORD *)this + 475);
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*((_QWORD *)this + 179) + 120LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v25);
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
        {
          v22 = *((_QWORD *)this + 235);
          v35 = &v22;
          v37 = &v27;
          v39 = &v26;
          v23 = v21;
          v41 = &v23;
          v36 = 8LL;
          v38 = 8LL;
          v40 = 8LL;
          v42 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007F231, 0LL, 0LL, 6u, &pData);
        }
      }
    }
  }
  if ( *((_BYTE *)this + 12) && (a2 & 1) == 0 )
  {
    v6 = *((_QWORD *)this + 180);
    v7 = *(_QWORD *)(v6 + 1288);
    if ( v7 == -1LL || (v8 = *((_QWORD *)this + 190), v8 == -1) )
    {
      v9 = -1LL;
    }
    else
    {
      v20 = v7 + v8;
      v9 = -1LL;
      if ( v20 >= v7 )
        v9 = v20;
    }
    *(_QWORD *)(v6 + 1288) = v9;
  }
  RmpResourceSetReleaseResources(*((PVOID *)this + 179));
  *((_QWORD *)this + 179) = 0LL;
  ExecutionModel::BaseResourceSet::ReleaseResourcesAndCheckPendingRequests(this);
  v10 = *((_QWORD *)this + 180) + 24 * (*((int *)this + 362) + 42LL);
  v11 = (_QWORD *)((char *)this + 1416);
  v12 = *((_QWORD *)this + 177);
  if ( *(ExecutionModel::ResourceSet **)(v12 + 8) != (ExecutionModel::ResourceSet *)((char *)this + 1416)
    || (v13 = (_QWORD *)*((_QWORD *)this + 178), (_QWORD *)*v13 != v11) )
  {
    __fastfail(3u);
  }
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  *((_QWORD *)this + 178) = 0LL;
  --*(_DWORD *)(v10 + 16);
  v14 = *(char ****)this;
  *((_DWORD *)this + 362) = 2;
  v15 = (unsigned int (__fastcall *)(ExecutionModel::ResourceSet *__hidden))v14[2];
  if ( v15 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(this);
  else
    v15(this);
  v16 = *(unsigned int (__fastcall **)(ExecutionModel::ResourceSet *__hidden))(*(_QWORD *)this + 16LL);
  if ( v16 == ExecutionModel::ResourceSet::Release )
    ExecutionModel::ResourceSet::Release(this);
  else
    v16(this);
  v17 = (HAM_ACTIVITY_RM_CONTEXT *)*((_QWORD *)this + 229);
  if ( v17 )
  {
    v18 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
    if ( (char *)v18 == (char *)HAM_ACTIVITY_RM_CONTEXT::Release )
    {
      HAM_ACTIVITY_RM_CONTEXT::Release(v17);
    }
    else if ( (char *)v18 == (char *)ResourceSetCallbackThunk::Release )
    {
      ResourceSetCallbackThunk::Release(v17);
    }
    else
    {
      v18();
    }
    *((_QWORD *)this + 229) = 0LL;
  }
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  *((_QWORD *)this + 233) = 0LL;
  if ( *((_QWORD *)this + 234) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 234, 0LL);
  if ( hProvider > 4u && (qword_1800920C0 & 9) != 0 && (qword_1800920C8 & 9) == qword_1800920C8 )
  {
    v33 = 8LL;
    v32 = (char *)this + 1880;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007F178 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v29 = &unk_18007F183;
    UserData.Reserved = 2;
    v30 = 43;
    v31 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  v19 = (void *)*((_QWORD *)this + 180);
  *((_BYTE *)this + 12) = 0;
  RmpObjectRelease(v19);
  *((_QWORD *)this + 180) = 0LL;
}
