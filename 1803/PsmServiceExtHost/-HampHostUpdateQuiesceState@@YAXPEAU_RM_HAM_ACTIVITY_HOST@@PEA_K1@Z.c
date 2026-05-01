/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800108C4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x1800087E4 (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x1800088BC (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180010C5C (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x180031FE0 (-HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_K.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065358 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r15
  int IsDebugEnabled; // eax
  unsigned int v8; // r14d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  int v14; // esi
  unsigned __int64 v15; // r13
  unsigned __int64 *v16; // r12
  unsigned __int64 v17; // rax
  unsigned __int64 *v18; // r9
  char v19; // al
  ULONGLONG v20; // r10
  char v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  int v26; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v27; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  char v29[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-98h]
  unsigned __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v36; // [rsp+A0h] [rbp-60h]
  int v37; // [rsp+A8h] [rbp-58h]
  int v38; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 **v40; // [rsp+C0h] [rbp-40h]
  ULONGLONG v41; // [rsp+C8h] [rbp-38h]
  char *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  unsigned __int64 *v44; // [rsp+E0h] [rbp-20h]
  ULONGLONG v45; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v46; // [rsp+F0h] [rbp-10h]
  ULONGLONG v47; // [rsp+F8h] [rbp-8h]
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v50; // [rsp+110h] [rbp+10h]
  ULONGLONG v51; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v52; // [rsp+120h] [rbp+20h]
  ULONGLONG v53; // [rsp+128h] [rbp+28h]

  v27 = a3;
  HampHostReleaseLockExclusiveEx(a1, (unsigned int)a2);
  RmpReleaseGlobalLock();
  if ( *a2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 224LL))(*((_QWORD *)a1 + 95));
  else
    v6 = 0LL;
  HampUtilQueryQuiesceTimeouts(&v25, &v24);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, &v23);
  v8 = v23;
  if ( IsDebugEnabled < 0 )
    v8 = 0;
  v23 = v8;
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v9 = *a3;
  v10 = *((_QWORD *)a1 + 79);
  v11 = *a2;
  v12 = v24;
  v32 = (unsigned __int8)HIBYTE(*((_DWORD *)a1 + 158)) >> 5;
  v13 = v8 & 1;
  v33 = v11;
  v34 = v9;
  do
  {
    v14 = (v10 >> 38) & 1 | (2 * ((v10 >> 39) & 1 | (2 * (v13 | (2 * ((v10 >> 41) & 1))))));
    v26 = v14;
    HampHostReleaseLockExclusiveEx(a1, v9);
    RmpReleaseGlobalLock();
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 216LL))(*((_QWORD *)a1 + 95));
    HampHostComputeQuiesceAction(
      (struct _HAM_HOST_QUIESCE_ACTION *)&v32,
      (struct _HAM_HOST_STATE_SNAPSHOT *)&v26,
      v6,
      v25,
      v12,
      (struct _HAM_HOST_QUIESCE_ACTION *)v29);
    v15 = v30;
    if ( v30 )
      RmpSystemResourceTimerSet(a1, v30, *((void **)a1 + 95));
    HampHostQueryIsDebugEnabled(a1, &v23);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v10 = *((_QWORD *)a1 + 79);
    v13 = v23 & 1;
  }
  while ( v14 != ((v10 >> 38) & 1 | (2 * ((v10 >> 39) & 1 | (2 * (v13 | (2 * ((v10 >> 41) & 1))))))) );
  if ( v29[0] == 3 )
  {
    HampHostRevokeQuiesceExtension(a1);
  }
  else if ( v29[0] == 4 && (v10 & 0xE0000000) != 0x80000000 )
  {
    HampHostQueueTerminate((__int64)a1, 2u, 0xE00u, 0LL, 3);
  }
  v16 = v27;
  *((_QWORD *)a1 + 79) &= 0xFFFFFFFF1FFFFFFFuLL;
  *((_QWORD *)a1 + 79) |= (unsigned __int64)(v29[0] & 7) << 29;
  v17 = v31;
  *a2 = v15;
  *v16 = v17;
  *((_DWORD *)a1 + 162) = *(_DWORD *)a2;
  *((_DWORD *)a1 + 161) = CempQueryUnbiasedInterruptTimeMs64();
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v18 = (unsigned __int64 *)*((_QWORD *)a1 - 4);
    v40 = &v27;
    v21 = v32;
    v42 = &v21;
    v44 = &v33;
    v46 = &v34;
    v19 = ((unsigned __int64)*((unsigned int *)a1 + 158) >> 29) & 7;
    v27 = v18;
    v22 = v19;
    v48 = &v22;
    v41 = v20;
    v43 = (unsigned int)(v20 - 7);
    v45 = v20;
    v47 = v20;
    v49 = v43;
    v50 = a2;
    v51 = v20;
    v52 = v16;
    v53 = v20;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180082CAA - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = v20;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v36 = &unk_180082CB5;
    v38 = v20 - 7;
    UserData.Reserved = 2;
    v37 = 163;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
}
