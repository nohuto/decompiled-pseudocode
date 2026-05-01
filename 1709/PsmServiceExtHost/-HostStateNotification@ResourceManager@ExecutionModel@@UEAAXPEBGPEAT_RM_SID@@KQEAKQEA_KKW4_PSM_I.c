/*
 * XREFs of ?HostStateNotification@ResourceManager@ExecutionModel@@UEAAXPEBGPEAT_RM_SID@@KQEAKQEA_KKW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000D270
 * Callers:
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x18000B750 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 * Callees:
 *     ?RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005188 (-RmpActivityHostSetStoreHighMemoryPriority@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180008AD8 (-RmpActivityHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18000E420 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000F900 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180015680 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180016EF0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x1800179B4 (_TlgCreateSid.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180017BA0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180017E50 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180017EA0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001A034 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z @ 0x18001F09C (-RmpPsmAppInstanceIdInitialize@@YAXPEAU_RM_PSM_HOST_INFO@@PEBGPEAXKK_K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     IsRmRpsHostEmptyNotificationPresent @ 0x180026640 (IsRmRpsHostEmptyNotificationPresent.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     ?RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z @ 0x1800414E4 (-RmpSystemTerminateModernHost@@YAJPEBGKK_KW4_BI_TERMINATE_HOST_ACTION@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::HostStateNotification(
        __int64 a1,
        wchar_t *a2,
        void *a3,
        unsigned int a4,
        _DWORD *a5,
        unsigned __int64 *a6,
        unsigned int a7,
        unsigned int a8)
{
  unsigned int v8; // r11d
  void *v10; // r10
  unsigned __int64 *v11; // r14
  wchar_t *v12; // rsi
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 *v15; // r12
  __int64 v16; // r13
  _BYTE *v17; // rdx
  __int64 v18; // r8
  wchar_t *v19; // rax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int64 v29; // rcx
  __int128 v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rdi
  int ObjectByHandleWithLock; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  int v36; // edi
  ULONG v37; // eax
  __int64 v38; // rsi
  __int64 v39; // rsi
  bool v40; // zf
  struct _RM_ACTIVITY_HOST *v41; // rdi
  int v42; // eax
  char *v43; // rdi
  unsigned int v44; // edx
  const SID *v45; // r10
  int v46; // r11d
  LPCGUID v47; // r8
  LPCGUID v48; // r9
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t *Source; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v55; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v56; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v57; // [rsp+70h] [rbp-90h]
  wchar_t Destination[232]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v59[68]; // [rsp+250h] [rbp+150h] BYREF
  unsigned int v60; // [rsp+294h] [rbp+194h]
  int v61; // [rsp+298h] [rbp+198h]
  unsigned __int64 v62; // [rsp+2A0h] [rbp+1A0h]
  wchar_t v63[280]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v64[560]; // [rsp+4E0h] [rbp+3E0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+710h] [rbp+610h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+730h] [rbp+630h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+740h] [rbp+640h] BYREF
  unsigned __int64 *v68; // [rsp+750h] [rbp+650h]
  __int64 v69; // [rsp+758h] [rbp+658h]
  unsigned __int64 *v70; // [rsp+760h] [rbp+660h]
  __int64 v71; // [rsp+768h] [rbp+668h]
  unsigned __int64 *v72; // [rsp+770h] [rbp+670h]
  __int64 v73; // [rsp+778h] [rbp+678h]

  v8 = a4;
  v10 = a3;
  v11 = a6;
  v12 = a2;
  v13 = a1;
  Source = a2;
  v54 = a1;
  if ( a8 <= 0xA )
  {
    v14 = 1705;
    if ( _bittest(&v14, a8) )
    {
      if ( a7 )
      {
        v15 = a6;
        v16 = a7;
        while ( a8 )
        {
          if ( a8 == 3 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v13 + 200) + 508LL) & 0x20) == 0 )
              goto LABEL_19;
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
            {
              TlgCreateWsz(&pDesc, v12);
              TlgCreateSid(&v67, v45);
              LODWORD(v55) = v46;
              v68 = &v55;
              LODWORD(v52) = *a5;
              v70 = &v52;
              v69 = 4LL;
              v71 = 4LL;
              v72 = v15;
              v73 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055DB7, v47, v48, 7u, &pData);
              v8 = a4;
            }
            RmpSystemTerminateModernHost(v12, v8, (unsigned int)*a5, *v11);
            goto LABEL_18;
          }
          if ( a8 == 5 )
            goto LABEL_15;
          if ( a8 != 7 )
          {
            if ( a8 == 9 )
            {
LABEL_15:
              RmpAcquireGlobalLock();
              v32 = *(_QWORD *)(v13 + 200);
              v52 = *v11;
              RtlAcquireSRWLockShared(v32 + 32);
              ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(
                                         (struct _RM_OBJECT_TABLE *)(v32 + 16),
                                         &v52,
                                         (struct _RM_OBJECT_HEADER **)&v56);
              v34 = v32 + 32;
              LODWORD(v32) = ObjectByHandleWithLock;
              RtlReleaseSRWLockShared(v34);
              if ( (int)v32 >= 0 )
              {
                v41 = (struct _RM_ACTIVITY_HOST *)v56;
                P = v56;
                if ( a8 == 5 )
                {
                  if ( *((int *)v56 + 228) >= 2 && (*((_BYTE *)v56 + 924) & 4) != 0 )
                    RmpActivityHostActOnProcesses(
                      (struct _RM_ACTIVITY_HOST *)v56,
                      0x2000,
                      1,
                      (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpEnforcementApplyForegroundBoost,
                      (_QWORD *)1);
                  v42 = *((_DWORD *)v41 + 333);
                  if ( (v42 & 2) != 0 )
                  {
                    if ( (*((_BYTE *)v41 + 1012) & 0x10) != 0 )
                      *((_DWORD *)v41 + 333) = v42 & 0xFFFFFFFD;
                    else
                      RmpActivityHostSetStoreHighMemoryPriority(v41);
                  }
                }
                RmpObjectRelease(v41);
              }
              RmpReleaseGlobalLock();
              v13 = v54;
LABEL_17:
              v12 = Source;
            }
            else
            {
              if ( a8 != 10 )
                goto LABEL_19;
              P = 0LL;
              RmpAcquireGlobalLock();
              if ( (int)RmpActivityHostFindByHostId(
                          *(struct _RM_SERVICE_GLOBALS **)(v13 + 200),
                          *v11,
                          (struct _RM_ACTIVITY_HOST **)&P) >= 0 )
              {
                v43 = (char *)P;
                HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64), 0);
                *((_DWORD *)v43 + 173) |= 0x10000u;
                RtlWakeAllConditionVariable(v43 + 696);
                HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(v43 + 64), v44);
                v13 = v54;
              }
              RmpReleaseGlobalLock();
              if ( P )
                RmpObjectRelease(P);
            }
            goto LABEL_18;
          }
          if ( *a5 == 2 )
          {
            RmpPsmAppInstanceIdInitialize(v63, v12, v10, v8, 2u, *v11);
            v17 = v64;
            v18 = 4LL;
            v19 = v63;
            do
            {
              v17 += 128;
              v20 = *(_OWORD *)v19;
              v21 = *((_OWORD *)v19 + 1);
              v19 += 64;
              *((_OWORD *)v17 - 8) = v20;
              v22 = *((_OWORD *)v19 - 6);
              *((_OWORD *)v17 - 7) = v21;
              v23 = *((_OWORD *)v19 - 5);
              *((_OWORD *)v17 - 6) = v22;
              v24 = *((_OWORD *)v19 - 4);
              *((_OWORD *)v17 - 5) = v23;
              v25 = *((_OWORD *)v19 - 3);
              *((_OWORD *)v17 - 4) = v24;
              v26 = *((_OWORD *)v19 - 2);
              *((_OWORD *)v17 - 3) = v25;
              v27 = *((_OWORD *)v19 - 1);
              *((_OWORD *)v17 - 2) = v26;
              *((_OWORD *)v17 - 1) = v27;
              --v18;
            }
            while ( v18 );
            v28 = *(_OWORD *)v19;
            v29 = *(_QWORD *)(v13 + 200);
            v30 = *((_OWORD *)v19 + 1);
            v31 = *((_QWORD *)v19 + 4);
            *(_OWORD *)v17 = v28;
            *((_OWORD *)v17 + 1) = v30;
            *((_QWORD *)v17 + 4) = v31;
            if ( (int)RmpActivityHostFindByTypeAndIdentifier(v29, 0LL, v64, &P) >= 0 )
            {
              RmpAcquireGlobalLock();
              RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)P, 0);
              RmpReleaseGlobalLock();
              RmpObjectRelease(P);
              v13 = v54;
            }
            goto LABEL_18;
          }
LABEL_19:
          ++v15;
          ++v11;
          ++a5;
          if ( !--v16 )
            return;
        }
        v35 = *v11;
        v36 = *a5;
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, Source);
        memset_0(v59, 0, sizeof(v59));
        v37 = RtlLengthSid(a3);
        memcpy_0(v59, a3, v37);
        v61 = v36;
        v13 = v54;
        v60 = a4;
        v62 = v35;
        ExecutionModel::ResourceManager::OnApplicationTerminated(
          (ExecutionModel::ResourceManager *)(v54 - 8),
          (struct _RM_PSM_HOST_INFO *)Destination);
        v38 = *(_QWORD *)(v13 + 200);
        v55 = *v11;
        v39 = v38 + 664;
        LODWORD(v52) = *a5;
        v57 = (_QWORD *)v39;
        if ( !(unsigned __int8)IsRmRpsHostEmptyNotificationPresent() )
          goto LABEL_17;
        v40 = (*(_BYTE *)(v39 + 8) & 1) == 0;
        v12 = Source;
        if ( !v40 )
          RmRpsHostEmptyNotification(*v57, Source, a3, a4, v52, v55);
LABEL_18:
        v10 = a3;
        v8 = a4;
        goto LABEL_19;
      }
    }
  }
}
