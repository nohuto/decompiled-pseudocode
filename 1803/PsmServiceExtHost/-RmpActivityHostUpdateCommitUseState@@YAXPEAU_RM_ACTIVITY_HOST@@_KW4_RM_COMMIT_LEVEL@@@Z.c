/*
 * XREFs of ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012208
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000FB3C (-RmpActivityHostNotifySubscribers@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011F40 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMIT_LEVEL@@1@Z @ 0x18001C3C0 (-UpdateCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJPEAU_RM_ACTIVITY_HOST@@W4_RM_COMMI.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x18001DA8C (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180031748 (-RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpActivityHostUpdateCommitUseState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, __int64, __int64, _QWORD); // rax
  int v9; // r9d
  ULONGLONG v10; // r10
  char v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-71h] BYREF
  __int64 v14; // [rsp+40h] [rbp-69h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-49h] BYREF
  void *v17; // [rsp+70h] [rbp-39h]
  int v18; // [rsp+78h] [rbp-31h]
  int v19; // [rsp+7Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-29h] BYREF
  int *v21; // [rsp+90h] [rbp-19h]
  int v22; // [rsp+98h] [rbp-11h]
  int v23; // [rsp+9Ch] [rbp-Dh]
  char *v24; // [rsp+A0h] [rbp-9h]
  int v25; // [rsp+A8h] [rbp-1h]
  int v26; // [rsp+ACh] [rbp+3h]
  __int64 *v27; // [rsp+B0h] [rbp+7h]
  int v28; // [rsp+B8h] [rbp+Fh]
  int v29; // [rsp+BCh] [rbp+13h]
  __int64 v30; // [rsp+C0h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+1Fh]
  int v32; // [rsp+CCh] [rbp+23h]
  __int64 *v33; // [rsp+D0h] [rbp+27h]
  int v34; // [rsp+D8h] [rbp+2Fh]
  int v35; // [rsp+DCh] [rbp+33h]

  v3 = *(_QWORD *)(a1 + 1360);
  v13 = a2;
  if ( v3 <= a2 )
    v3 = a2;
  *(_QWORD *)(a1 + 1360) = v3;
  if ( a3 >= 4 && (int)RmHamHostTryDecommitOffered((struct _RM_ACTIVITY_HOST *)a1, a2, *(_QWORD *)(a1 + 1344)) >= 0 )
  {
    RmpActivityHostUpdateCommitUseAsync((struct _RM_ACTIVITY_HOST *)a1);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 1376);
    if ( (_DWORD)v6 != a3 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 2232LL);
      v8 = *(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v7 + 32LL);
      if ( (char *)v8 == (char *)ExecutionModel::ResourceManager::UpdateCommitMemoryLevel )
        ExecutionModel::ResourceManager::UpdateCommitMemoryLevel(v7, a1, v6, (unsigned int)a3);
      else
        v8(v7, a1, v6, (unsigned int)a3);
      RmpActivityHostNotifySubscribers((_QWORD *)a1, v13, a3);
      v14 = *(_QWORD *)(a1 + 1080);
      if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
      {
        TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 88));
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v9 = *(_DWORD *)(a1 + 624);
        v35 = 0;
        v21 = &v12;
        v24 = &v11;
        v27 = (__int64 *)&v13;
        v30 = a1 + 1312;
        v33 = &v14;
        v12 = v9;
        v22 = 4;
        v11 = a3;
        v25 = v10;
        v28 = v10 + 7;
        v31 = v10 + 7;
        v34 = v10 + 7;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800920B8;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DCC3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = v10;
        UserData.Size = *(unsigned __int16 *)off_1800920B8;
        v17 = &unk_18007DCCE;
        UserData.Reserved = 2;
        v18 = 122;
        v19 = v10;
        EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, v10 + 7, &UserData);
      }
      if ( a3 >= 4 && *(int *)(a1 + 1376) < 4 )
        ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*(ExecutionModel::ResourceManager **)(*(_QWORD *)(a1 + 48) + 2232LL));
      *(_DWORD *)(a1 + 1376) = a3;
    }
  }
}
