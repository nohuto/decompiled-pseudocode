/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50
 * Callers:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z @ 0x180007710 (-RmpActivityHostGetTracingId@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_TRACING_ID@@@Z.c)
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009340 (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18000DAD0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000F1DC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x18001F138 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180035C00 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003669C (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003C7C8 (-TriggerOnCommitWarningCallback@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  int v4; // r12d
  __int64 v6; // rbx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, __int64, __int64, _QWORD); // rax
  __int64 v12; // r12
  _QWORD *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // r8d
  unsigned int v18; // edx
  unsigned __int64 v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  __int64 v22; // rcx
  ExecutionModel::ResourceSet *v23; // rcx
  char v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v32[3]; // [rsp+70h] [rbp-90h] BYREF
  int v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  _QWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  _WORD v38[268]; // [rsp+C0h] [rbp-40h] BYREF
  int v39; // [rsp+2D8h] [rbp+1D8h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2F0h] [rbp+1F0h] BYREF
  void *v41; // [rsp+300h] [rbp+200h]
  int v42; // [rsp+308h] [rbp+208h]
  int v43; // [rsp+30Ch] [rbp+20Ch]
  _WORD *v44; // [rsp+310h] [rbp+210h]
  int v45; // [rsp+318h] [rbp+218h]
  int v46; // [rsp+31Ch] [rbp+21Ch]
  int *v47; // [rsp+320h] [rbp+220h]
  __int64 v48; // [rsp+328h] [rbp+228h]
  char *v49; // [rsp+330h] [rbp+230h]
  __int64 v50; // [rsp+338h] [rbp+238h]
  __int64 *v51; // [rsp+340h] [rbp+240h]
  __int64 v52; // [rsp+348h] [rbp+248h]
  __int64 v53; // [rsp+350h] [rbp+250h]
  __int64 v54; // [rsp+358h] [rbp+258h]
  __int64 *v55; // [rsp+360h] [rbp+260h]
  __int64 v56; // [rsp+368h] [rbp+268h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+370h] [rbp+270h] BYREF
  int *v58; // [rsp+390h] [rbp+290h]
  __int64 v59; // [rsp+398h] [rbp+298h]
  __int64 *v60; // [rsp+3A0h] [rbp+2A0h]
  __int64 v61; // [rsp+3A8h] [rbp+2A8h]
  _QWORD *v62; // [rsp+3B0h] [rbp+2B0h]
  __int64 v63; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 v64; // [rsp+418h] [rbp+318h] BYREF

  v64 = a2;
  v3 = *(_QWORD *)(a1 + 1216);
  v4 = a3;
  v25 = a3;
  if ( v3 > a2 )
    a2 = v3;
  v6 = -1LL;
  *(_QWORD *)(a1 + 1216) = a2;
  if ( a3 >= 4 && (int)RmpActivityHostQueryOfferedMemory((struct _RM_ACTIVITY_HOST *)a1, &v26) >= 0 )
  {
    v8 = v26;
    if ( v26 )
    {
      v17 = 0;
      v18 = *(_DWORD *)(a1 + 1012);
      v19 = 5242880LL;
      if ( v64 - 95LL * *(_QWORD *)(a1 + 1168) / 0x64uLL > 0x500000 )
        v19 = v64 - 95LL * *(_QWORD *)(a1 + 1168) / 0x64uLL;
      LOBYTE(v17) = v19 >= v26;
      v37 = 0LL;
      v36[1] = 0LL;
      if ( v17 )
        v8 = -1LL;
      v36[0] = v8;
      LODWORD(v37) = (4 * v17) | (v18 >> 4) & 1;
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)a1,
                  (struct _RM_OFFERED_DECOMMIT_INFO *)v36) >= 0 )
      {
        RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)a1);
        return;
      }
    }
  }
  v7 = *(unsigned int *)(a1 + 1232);
  if ( (_DWORD)v7 != v4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1896LL);
    v10 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v9 + 32LL);
    if ( (char *)v10 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
      ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(v9, a1, v7, (unsigned int)v4);
    else
      v10(v9, a1, v7, (unsigned int)v4);
    *(_QWORD *)&EventDescriptor.Id = v64;
    switch ( v4 )
    {
      case 1:
        v27 = 0LL;
        LODWORD(v26) = 2;
        break;
      case 2:
        v27 = *(_QWORD *)(a1 + 1152);
        LODWORD(v26) = 3;
        break;
      case 3:
        v27 = *(_QWORD *)(a1 + 1160);
        LODWORD(v26) = 4;
        break;
      case 4:
        v27 = *(_QWORD *)(a1 + 1168);
        LODWORD(v26) = 5;
        break;
      default:
LABEL_21:
        if ( hProvider )
        {
          RmpActivityHostGetTracingId((struct _RM_ACTIVITY_HOST *)a1, (struct _RM_ACTIVITY_HOST_TRACING_ID *)v38);
          v30 = *(_QWORD *)(a1 + 888);
          if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
          {
            while ( v38[++v6] != 0 )
              ;
            v46 = 0;
            v44 = v38;
            v45 = 2 * v6 + 2;
            v25 = v39;
            v47 = &v25;
            v49 = &v24;
            v51 = (__int64 *)&v64;
            v53 = a1 + 1168;
            v55 = &v30;
            v48 = 4LL;
            v24 = v4;
            v50 = 1LL;
            v52 = 8LL;
            v54 = 8LL;
            v56 = 8LL;
            *(_DWORD *)&EventDescriptor.Level = 4;
            UserData.Ptr = (ULONGLONG)off_1800670C8;
            *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180057AED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
            EventDescriptor.Keyword = 1LL;
            UserData.Size = *(unsigned __int16 *)off_1800670C8;
            v41 = &unk_180057AF8;
            UserData.Reserved = 2;
            v42 = 121;
            v43 = 1;
            EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 8u, &UserData);
          }
        }
        if ( v4 >= 4 && *(int *)(a1 + 1232) < 4 )
          ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 40) + 1896LL));
        *(_DWORD *)(a1 + 1232) = v4;
        goto LABEL_5;
    }
    if ( *(_QWORD *)(a1 + 1264) != a1 + 1264 )
    {
      v12 = v27;
      v13 = *(_QWORD **)(a1 + 1264);
      do
      {
        v14 = v13[6];
        memset_0(&v31, 0, 0x38uLL);
        v15 = *(_QWORD *)(a1 + 24);
        v31 = 1;
        v16 = *(v13 - 1);
        memset_0(v32, 0, 0x30uLL);
        v32[0] = v15;
        v33 = v26;
        v35 = *(_QWORD *)&EventDescriptor.Id;
        v32[1] = v16;
        v32[2] = 0LL;
        v34 = v12;
        v28 = RmpWnfPublishMessageToClientStateName(v14 + 24, &v31, 56LL, *(_QWORD *)(v14 + 32));
        if ( v28 < 0 && hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000001uLL) )
        {
          v59 = 4LL;
          v58 = &v28;
          LODWORD(v27) = v33;
          v60 = &v27;
          v62 = v32;
          v61 = 4LL;
          v63 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180057624, v20, v21, 5u, &pData);
        }
        v13 = (_QWORD *)*v13;
      }
      while ( v13 != (_QWORD *)(a1 + 1264) );
      v4 = v25;
      v6 = -1LL;
    }
    goto LABEL_21;
  }
LABEL_5:
  if ( v4 >= 3 && *(_DWORD *)(a1 + 56) == 1 )
  {
    v22 = *(_QWORD *)(a1 + 840);
    if ( v22 != a1 + 840 )
    {
      v23 = (ExecutionModel::ResourceSet *)(v22 - 1416);
      if ( v23 )
        ExecutionModel::ResourceSet::TriggerOnCommitWarningCallback(v23);
    }
  }
}
