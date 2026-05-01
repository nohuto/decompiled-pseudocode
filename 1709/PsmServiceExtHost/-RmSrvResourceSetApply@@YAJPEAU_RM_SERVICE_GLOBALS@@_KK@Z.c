/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180014F80
 * Callers:
 *     ?Apply@RmpRpExtResourceSetThunk@@UEAAJXZ @ 0x180016310 (-Apply@RmpRpExtResourceSetThunk@@UEAAJXZ.c)
 *     RmCoreRpcSrvApplyResourceSet @ 0x18001FCF0 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x180030620 (RmtSrv_RS_Apply.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800107F0 (-AddRef@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x1800113A0 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x180012590 (-Apply@ResourceSet@ExecutionModel@@QEAAJK@Z.c)
 *     ?RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18001549C (-RmpObjectAddRef@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, DWORD a3)
{
  DWORD v5; // ebx
  int v6; // r12d
  DWORD v7; // esi
  ExecutionModel::BaseResourceSet *v8; // rbx
  _BYTE *Value; // rdi
  DWORD CurrentThreadId; // eax
  unsigned __int8 v11; // si
  char *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // esi
  unsigned int v16; // edx
  __int64 v17; // r11
  __int64 v18; // r10
  unsigned int v19; // r9d
  __int64 (__fastcall *v20)(ExecutionModel::BaseResourceSet *); // rax
  _BYTE *v21; // rax
  __int64 (__fastcall *v23)(ExecutionModel::ResourceSet *); // rax
  DWORD v24; // ebx
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h]
  EVENT_DESCRIPTOR v31; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE TlsValue[80]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+E0h] [rbp-20h] BYREF
  void *v38; // [rsp+F0h] [rbp-10h]
  int v39; // [rsp+F8h] [rbp-8h]
  int v40; // [rsp+FCh] [rbp-4h]
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  __int64 *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  __int64 *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]

  v29 = a2;
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
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180056321 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v34 = &unk_18005632C;
    UserData.Reserved = 2;
    v35 = 21;
    v36 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v7 = HampLockTrackerId;
  v8 = 0LL;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *(_QWORD *)Value |= 1uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v11 = v29;
  v12 = 0LL;
  dword_1800681D0 = CurrentThreadId;
  v30 = v29;
  v26 = v29;
  *(_QWORD *)&EventDescriptor.Id = (char *)a1 + 552;
  RtlAcquireSRWLockShared((char *)a1 + 552);
  v13 = 0LL;
  v14 = 37 * (v11 + 11623883LL);
  v15 = -1073741275;
  v16 = *((_DWORD *)a1 + 135);
  v17 = -1LL << (*((_BYTE *)a1 + 540) & 0x1F);
  v18 = v17 & (HIBYTE(v26)
             + 37
             * (BYTE6(v26)
              + 37 * (BYTE5(v26) + 37 * (BYTE4(v26) + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + v14)))))));
  v26 = v18;
LABEL_15:
  if ( v13 )
    goto LABEL_18;
  v19 = v16 >> 5;
  if ( v16 >> 5 )
  {
    v16 = *((_DWORD *)a1 + 135);
    v13 = *((_QWORD *)a1 + 68)
        + 8LL
        * ((37
          * (BYTE6(v26)
           + 37
           * (BYTE5(v26)
            + 37
            * (BYTE4(v26)
             + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v18 + 11623883)))))))
          + HIBYTE(v26)) & (v19 - 1));
LABEL_18:
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v18 == (v17 & *(_QWORD *)(v13 + 8)) )
      {
        if ( v30 != *(_QWORD *)(v13 + 24) )
          goto LABEL_15;
        v15 = 0;
        RmpObjectAddRef((struct _RM_OBJECT_HEADER *)v13);
        goto LABEL_22;
      }
    }
  }
  v13 = *(_QWORD *)&EventDescriptor.Id;
LABEL_22:
  RtlReleaseSRWLockShared(*(_QWORD *)&EventDescriptor.Id);
  if ( v15 >= 0 )
  {
    v12 = (char *)v13;
    v8 = *(ExecutionModel::BaseResourceSet **)(v13 + 40);
    v20 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v8 + 8LL);
    if ( v20 == ExecutionModel::BaseResourceSet::AddRef )
      ExecutionModel::BaseResourceSet::AddRef(v8);
    else
      v20(v8);
    v15 = 0;
  }
  if ( v12 )
    RmpObjectRelease(v12);
  if ( v15 < 0 )
  {
    v27 = v15 | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
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
    v27 = ExecutionModel::ResourceSet::Apply((ExecutionModel::ResourceManager **)v8, a3);
    if ( v27 >= 0 )
      v27 = 0;
  }
  if ( hProvider > 4u && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
  {
    v42 = 4LL;
    v41 = &v27;
    v43 = &v29;
    v45 = &v26;
    v44 = 8LL;
    LODWORD(v26) = a3;
    v46 = 4LL;
    *(_DWORD *)&v31.Level = 516;
    v37.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&v31.Id = ((unsigned int)&unk_1800570BE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v31.Keyword = 9LL;
    v37.Size = *(unsigned __int16 *)off_1800670C8;
    v38 = &unk_1800570C9;
    v37.Reserved = 2;
    v39 = 45;
    v40 = 1;
    EventWriteTransfer(RegHandle, &v31, 0LL, 0LL, 5u, &v37);
  }
  if ( v8 )
  {
    v23 = *(__int64 (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v8 + 16LL);
    if ( v23 == ExecutionModel::ResourceSet::Release )
      ExecutionModel::ResourceSet::Release(v8);
    else
      v23(v8);
  }
  if ( v6 )
  {
    v24 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v24, 0LL);
    }
  }
  return (unsigned int)v27;
}
