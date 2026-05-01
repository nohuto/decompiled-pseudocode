/*
 * XREFs of ?UpdateImportanceAndResourceLimits@ResourceSet@ExecutionModel@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180011420
 * Callers:
 *     ?RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800185D0 (-RmSrvResourceSetUpdateProperties@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAT_RM_ACTIVITY_IMPORTANCE@@PE.c)
 * Callees:
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18000F1DC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180016998 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     RmpResourceLimitsAreLegal @ 0x18001B01C (RmpResourceLimitsAreLegal.c)
 *     ?RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FLAGS@@@Z @ 0x18001FAD8 (-RmpImportanceIsValidForConfiguration@@YAKT_RM_ACTIVITY_IMPORTANCE@@T_RM_POLICY_CUSTOMIZATION_FL.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::UpdateImportanceAndResourceLimits(
        ExecutionModel::ResourceSet *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  const GUID *v8; // r9
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rax
  struct _RM_ACTIVITY_HOST *v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // ebx
  int v16; // edi
  int v17; // ebx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  __int64 v20; // rax
  int v21; // ecx
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  void *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  __int64 *v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  int *v40; // [rsp+B0h] [rbp-50h]
  unsigned int v41; // [rsp+B8h] [rbp-48h]
  int v42; // [rsp+BCh] [rbp-44h]
  int *v43; // [rsp+C0h] [rbp-40h]
  unsigned int v44; // [rsp+C8h] [rbp-38h]
  int v45; // [rsp+CCh] [rbp-34h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v47; // [rsp+F0h] [rbp-10h]
  int v48; // [rsp+F8h] [rbp-8h]
  int v49; // [rsp+FCh] [rbp-4h]
  int *v50; // [rsp+100h] [rbp+0h]
  unsigned int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]
  int *v53; // [rsp+110h] [rbp+10h]
  unsigned int v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+128h] [rbp+28h]
  int v58; // [rsp+12Ch] [rbp+2Ch]
  __int64 *v59; // [rsp+130h] [rbp+30h]
  int v60; // [rsp+138h] [rbp+38h]
  int v61; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v62; // [rsp+140h] [rbp+40h]
  int v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+14Ch] [rbp+4Ch]

  v6 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 208LL) + 508LL);
  if ( a3 )
  {
    v26 = 1184LL;
    if ( !(unsigned int)RmpResourceLimitsAreLegal(a3, &v26, 0LL) )
      return (unsigned int)-805306128;
  }
  RmpAcquireGlobalLock();
  if ( !a2 || (unsigned int)RmpImportanceIsValidForConfiguration(*(unsigned int *)a2, v6) )
  {
    v7 = 4;
    LODWORD(v8) = 8;
    if ( a3 )
    {
      v16 = *((_DWORD *)this + 375);
      v17 = *((_DWORD *)a3 + 14);
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v20 = *((_QWORD *)this + 237);
        v49 = 0;
        v52 = 0;
        v55 = 0;
        v58 = 0;
        v61 = 0;
        v64 = 0;
        v27 = v20;
        v47 = &v27;
        v50 = &v22;
        v53 = &v23;
        v28 = *((_QWORD *)this + 189);
        v56 = &v28;
        v29 = *((_QWORD *)a3 + 6);
        v59 = &v29;
        v30 = *(_QWORD *)a3;
        v62 = &v30;
        v48 = (int)v8;
        v22 = v16;
        v51 = v7;
        v23 = v17;
        v54 = v7;
        v57 = (int)v8;
        v60 = (int)v8;
        v63 = (int)v8;
        TlgWrite(v18, &unk_180058FA7, v19, v8, (UINT32)v8, &pData);
        LODWORD(v8) = 8;
        v7 = 4;
      }
      if ( (*(_BYTE *)a3 & 0x20) != 0 )
      {
        v21 = v17 & 3;
        if ( (v16 & 3) != v21 )
        {
          *((_DWORD *)this + 375) &= 0xFFFFFFFC;
          *((_DWORD *)this + 375) |= v21;
        }
      }
      if ( *(char *)a3 < 0 && ((unsigned __int8)(v16 ^ v17) & (unsigned __int8)v8) != 0 )
      {
        *((_DWORD *)this + 375) &= ~8u;
        *((_DWORD *)this + 375) |= (unsigned int)v8 & v17;
      }
      if ( (*(_DWORD *)a3 & 0x400LL) != 0 )
        *((_QWORD *)this + 189) = *((_QWORD *)a3 + 6);
    }
    if ( !a2 )
      goto LABEL_16;
    v9 = *(_DWORD *)a2;
    v10 = *((_DWORD *)this + 368);
    if ( *(_DWORD *)a2 == v10 )
      goto LABEL_16;
    if ( hProvider > v7 && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v11 = *((_QWORD *)this + 237);
      v39 = 0;
      v42 = 0;
      v45 = 0;
      v31 = v11;
      v37 = &v31;
      v40 = &v24;
      v43 = &v25;
      v38 = (int)v8;
      v24 = v10;
      v41 = v7;
      v25 = v9;
      v44 = v7;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180059352 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      v34 = &unk_18005935D;
      UserData.Reserved = 2;
      v35 = 77;
      v36 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    *((_DWORD *)this + 368) = *(_DWORD *)a2;
    if ( (*(_WORD *)a2 & 0x100) != 0 )
      *((_DWORD *)this + 363) &= ~0x80u;
    ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                               + 3));
    v12 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)this + 180);
    if ( *((_BYTE *)this + 12) )
    {
      v13 = 2;
    }
    else
    {
      if ( !v12 )
        goto LABEL_16;
      v13 = 1;
    }
    RmpActivityHostResourceSetsChanged(v12, v13);
LABEL_16:
    if ( *((_BYTE *)this + 12) )
      RmpActivityHostComputeAndApplyEnforcementSettings(*((struct _RM_ACTIVITY_HOST **)this + 180));
    v14 = 0x10000000;
    goto LABEL_19;
  }
  v14 = -805306129;
LABEL_19:
  RmpReleaseGlobalLock();
  return v14;
}
