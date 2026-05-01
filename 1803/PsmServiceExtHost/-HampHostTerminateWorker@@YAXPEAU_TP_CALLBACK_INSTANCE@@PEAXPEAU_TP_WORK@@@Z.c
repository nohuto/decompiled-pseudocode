/*
 * XREFs of ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180007B20
 * Callers:
 *     <none>
 * Callees:
 *     ?HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180007A10 (-HampHostQueryProcessCount@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180007E80 (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z @ 0x180007EA8 (-HampHostInvalidateActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@_KK@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z @ 0x180007F28 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@KPEAK@Z.c)
 *     ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B4B4 (-HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000FAF0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011D7C (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180013630 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180016C24 (-HampHostShouldTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180023550 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampHostTerminateWorker(struct _TP_CALLBACK_INSTANCE *a1, unsigned __int16 *a2, struct _TP_WORK *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // r15d
  unsigned int v6; // r14d
  int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // edi
  char v10; // al
  unsigned int v11; // edx
  ULONG v12; // edx
  DWORD v13; // ebx
  char v14; // [rsp+38h] [rbp-D0h] BYREF
  char v15; // [rsp+39h] [rbp-CFh] BYREF
  unsigned int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v19[144]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+108h] [rbp+0h] BYREF
  char *v22; // [rsp+118h] [rbp+10h]
  int v23; // [rsp+120h] [rbp+18h]
  int v24; // [rsp+124h] [rbp+1Ch]
  char *v25; // [rsp+128h] [rbp+20h]
  int v26; // [rsp+130h] [rbp+28h]
  int v27; // [rsp+134h] [rbp+2Ch]
  char *v28; // [rsp+138h] [rbp+30h]
  int v29; // [rsp+140h] [rbp+38h]
  int v30; // [rsp+144h] [rbp+3Ch]
  unsigned int *v31; // [rsp+148h] [rbp+40h]
  int v32; // [rsp+150h] [rbp+48h]
  int v33; // [rsp+154h] [rbp+4Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082614, 0LL, 0LL, 2u, &pData);
  v4 = 0;
  v18[0] = *((_QWORD *)a2 - 4);
  v17[0] = 0;
  RmpAcquireGlobalLock();
  v5 = RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)a2);
  RmpReleaseGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
  v6 = a2[316];
  v7 = HIWORD(*((_DWORD *)a2 + 158)) & 3;
  HampHostStartProcessPresenceChange((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v5 && HampHostShouldTerminate((struct _RM_HAM_ACTIVITY_HOST *)a2) )
  {
    v9 = 1;
    if ( (v6 & 0xFFFFFF00) == 0x700 )
      HampHostInvalidateActivities(a2, v6, 0LL, 1LL);
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v8);
    if ( (*((_QWORD *)a2 + 79) & 0x100000000000LL) != 0
      && ((int)HampHostQueryProcessCount((struct _RM_HAM_ACTIVITY_HOST *)a2, &v17[1], &v16) < 0 || v16 > v17[1]) )
    {
      if ( v7 == 3 )
        RmHamHostActOnProcesses(
          (struct _RM_ACTIVITY_HOST *)(a2 - 32),
          0,
          1u,
          (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpLogTerminationForWerCallback,
          0LL);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 112LL))(*((_QWORD *)a2 + 130));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a2 - 2) + 40LL) + 112LL))(*((_QWORD *)a2 + 130));
      if ( _volatile_metadata > 4u )
      {
        TlgCreateWsz(&pDesc, a2 + 12);
        v10 = *((_BYTE *)a2 + 560);
        v24 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        v15 = v10;
        v25 = &v15;
        v28 = &v14;
        v31 = &v16;
        v22 = (char *)v18;
        v23 = 8;
        v26 = 1;
        v14 = v7;
        v29 = 1;
        v16 = v6;
        v32 = 4;
        TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082BC4, 0LL, 0LL, 7u, &pData);
      }
      v9 = 0;
    }
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, 0);
    HampHostNotifyZeroProcess((struct _RM_HAM_ACTIVITY_HOST *)a2, v9, v17);
    v4 = v17[0];
  }
  *((_QWORD *)a2 + 79) &= ~0x80000000000uLL;
  RtlWakeAllConditionVariable(a2 + 328);
  *((_QWORD *)a2 + 79) &= ~0x200000000uLL;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a2, v11);
  if ( v4 )
    RmHamHostDereference((struct _RM_HAM_ACTIVITY_HOST *)a2);
  if ( v5 )
    RmHamHostDereference((struct _RM_HAM_ACTIVITY_HOST *)a2);
  RmpObjectRelease(a2 - 32);
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
  {
    pDesc.Reserved = 0;
    v24 = 0;
    pDesc.Ptr = (ULONGLONG)v18;
    v22 = &v14;
    pDesc.Size = v12;
    v14 = v5;
    v23 = 1;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082DAE, 0LL, 0LL, 4u, &pData);
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v13, 0LL);
  }
}
