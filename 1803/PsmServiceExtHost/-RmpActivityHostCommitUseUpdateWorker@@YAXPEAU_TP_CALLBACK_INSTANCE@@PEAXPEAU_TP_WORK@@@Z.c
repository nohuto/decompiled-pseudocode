/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x180012208 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     ?RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180012420 (-RmpActivityHostEnsureCommitHeadroom@@YAXPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z @ 0x180012990 (-RmpActivityHostComputeCommitEstimate@@YAX_K0PEA_K1@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x1800138F0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B850 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  DWORD v5; // esi
  _QWORD *Value; // rdi
  int v7; // ecx
  __int128 v8; // xmm2
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  int v14; // r8d
  _QWORD *v15; // rax
  DWORD v17; // ebx
  unsigned int v18; // edx
  unsigned __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v26[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _BYTE TlsValue[144]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+138h] [rbp+30h] BYREF
  void *v30; // [rsp+148h] [rbp+40h]
  int v31; // [rsp+150h] [rbp+48h]
  int v32; // [rsp+154h] [rbp+4Ch]
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+158h] [rbp+50h] BYREF
  void *v34; // [rsp+168h] [rbp+60h]
  int v35; // [rsp+170h] [rbp+68h]
  int v36; // [rsp+174h] [rbp+6Ch]
  __int64 *v37; // [rsp+178h] [rbp+70h]
  __int64 v38; // [rsp+180h] [rbp+78h]
  unsigned __int64 *v39; // [rsp+188h] [rbp+80h]
  __int64 v40; // [rsp+190h] [rbp+88h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v19 = 0LL;
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DC97 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v30 = &unk_18007DCA2;
    UserData.Reserved = 2;
    v31 = 32;
    v32 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v5) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800937F8 = GetCurrentThreadId();
  v7 = 0;
  *((_DWORD *)a2 + 369) &= ~1u;
  if ( (__ROL4__(1, 1) & 2) != 0 )
    v7 = *((_DWORD *)a2 + 262);
  if ( v7 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 6) + 2228LL) & 2) == 0 )
    {
      v8 = *(_OWORD *)(a2 + 1080);
      v26[0] = *(_OWORD *)(a2 + 1064);
      v27 = *((_QWORD *)a2 + 137);
      v26[1] = v8;
      if ( (_QWORD)v8 )
      {
        if ( (int)RmpActivityHostQueryCommit((struct _RM_ACTIVITY_HOST *)a2, 0LL, &v19, &v25) >= 0 )
        {
          v9 = v19;
          v10 = *((_QWORD *)a2 + 166);
          v11 = *((_QWORD *)a2 + 169);
          if ( v19 < v10 )
          {
            v12 = 0LL;
          }
          else if ( v19 < *((_QWORD *)a2 + 167) )
          {
            v12 = *((_QWORD *)a2 + 166);
            v10 = *((_QWORD *)a2 + 167);
          }
          else if ( v19 < *((_QWORD *)a2 + 168) )
          {
            v12 = *((_QWORD *)a2 + 167);
            v10 = *((_QWORD *)a2 + 168);
          }
          else
          {
            v12 = *((_QWORD *)a2 + 168);
            v10 = -1LL;
          }
          RmpActivityHostComputeCommitEstimate(v19, v11, &v20, &v21);
          v13 = v21;
          if ( v12 <= v20 )
            v12 = v20;
          if ( v9 <= v11 && v10 >= v21 )
            v10 = v21;
          *(_QWORD *)&v26[0] = v12;
          *((_QWORD *)&v26[0] + 1) = v10;
          if ( v9 < *((_QWORD *)a2 + 166) )
          {
            v14 = 1;
          }
          else if ( v9 < *((_QWORD *)a2 + 167) )
          {
            v14 = 2;
          }
          else
          {
            v14 = 4 - (v9 < *((_QWORD *)a2 + 168));
          }
          RmpActivityHostUpdateCommitUseState((__int64)a2, v19, v14);
          RmpActivityHostEnsureCommitHeadroom((struct _RM_ACTIVITY_HOST *)a2, v19, v13);
          RmpActivityHostApplyEnforcementSettings(
            (struct _RM_ACTIVITY_HOST *)a2,
            (struct _RM_ENFORCEMENT_SETTINGS *)v26,
            1u);
        }
      }
    }
  }
  if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
  {
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 0);
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 1u);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), v18);
  }
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v15 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v15 & 1) == 0 )
      __int2c();
    if ( v15[1]-- == 1LL )
      *v15 &= ~1uLL;
  }
  if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
  {
    v22 = *((_QWORD *)a2 + 4);
    v37 = &v22;
    v39 = &v19;
    v38 = 8LL;
    v40 = 8LL;
    *(_DWORD *)&v24.Level = 516;
    v33.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&v24.Id = ((unsigned int)&unk_18007E05C - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v24.Keyword = 1LL;
    v33.Size = *(unsigned __int16 *)off_1800920B8;
    v34 = &unk_18007E067;
    v33.Reserved = 2;
    v35 = 51;
    v36 = 1;
    EventWriteTransfer(qword_1800920D0, &v24, 0LL, 0LL, 4u, &v33);
  }
  RmpObjectRelease(a2);
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
}
