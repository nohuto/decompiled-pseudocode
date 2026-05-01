/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z @ 0x180031204 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C2C (-HampSystemReportActivationHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z @ 0x180041C5C (-HampSystemReportQuiesceHang@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAKKW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800617F0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampUtilUlongArrayFromUlongPtrArray@@YAPEAKPEA_KK@Z @ 0x180064774 (-HampUtilUlongArrayFromUlongPtrArray@@YAPEAKPEA_KK@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r14d
  int v3; // esi
  PVOID Heap; // rdi
  int v5; // r12d
  unsigned int v6; // r15d
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // esi
  SIZE_T i; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int *v21; // rax
  __int64 v22; // r11
  char v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h]
  unsigned int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-90h] BYREF
  int *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  int *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  unsigned int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+118h] [rbp+18h]
  unsigned int *v47; // [rsp+120h] [rbp+20h]
  __int64 v48; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  Heap = 0LL;
  v5 = 1;
  if ( _volatile_metadata > 4u )
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082C20, 0LL, 0LL, 2u, &pData);
  v6 = *((unsigned __int16 *)a1 + 316);
  if ( (*((_DWORD *)a1 + 158) & 0x30000) != 0x20000LL )
  {
    v24 = 0;
LABEL_34:
    if ( _volatile_metadata > 4u )
    {
      v31 = *((_QWORD *)a1 - 4);
      v45 = &v31;
      v47 = &v29;
      v46 = 8LL;
      v29 = v6;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800827E2, 0LL, 0LL, 4u, &v44);
    }
    goto LABEL_47;
  }
  v7 = *((_DWORD *)a1 + 140);
  if ( v7 == 2 )
  {
    v8 = *((_DWORD *)a1 + 273);
    if ( (v8 & 0x80u) != 0 )
    {
      if ( (v8 & 0x100) != 0 )
        goto LABEL_14;
      *((_DWORD *)a1 + 274) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a1 + 274) |= 0x180u;
    }
    goto LABEL_13;
  }
  if ( v7 == 4 && (*((_BYTE *)a1 + 1092) & 0x40) == 0 )
  {
    *((_DWORD *)a1 + 274) |= 0x40u;
LABEL_13:
    v3 = 1;
  }
LABEL_14:
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v25 = 0;
  if ( v3 )
  {
    v9 = *((_DWORD *)a1 + 140);
    if ( v9 == 2 )
    {
      v24 = RmpSystemChangePsmApplicationState((__int64)a1 - 64, 2);
    }
    else if ( v9 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 1);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_DWORD *)a1 + 274) = 0;
    v10 = *((_DWORD *)a1 + 140);
    if ( v10 == 2 )
    {
      *((_DWORD *)a1 + 273) |= 0x180u;
    }
    else if ( v10 == 4 )
    {
      *((_DWORD *)a1 + 273) |= 0x40u;
    }
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  v11 = 1;
  for ( i = 8LL; ; i = 8LL * v26 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i);
    if ( !Heap )
    {
      v2 = 10;
      v24 = -1073741801;
      goto LABEL_30;
    }
    v13 = *((_QWORD *)a1 - 2);
    v14 = *((_QWORD *)a1 - 4);
    v15 = *((unsigned int *)a1 + 140);
    v16 = *((unsigned int *)a1 + 139);
    v26 = v11;
    v17 = (*(__int64 (__fastcall **)(char *, __int64, char *, __int64, __int64, PVOID, unsigned int *))(*(_QWORD *)(v13 + 40) + 72LL))(
            (char *)a1 + 488,
            v16,
            (char *)a1 + 24,
            v15,
            v14,
            Heap,
            &v26);
    v24 = v17;
    if ( v17 >= 0 )
      break;
    if ( v17 != -2147483643 )
    {
      v2 = 20;
      goto LABEL_37;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    v11 = v26;
  }
  if ( !v26 )
    goto LABEL_37;
  v21 = HampUtilUlongArrayFromUlongPtrArray((unsigned __int64 *)Heap, v11);
  if ( (v6 & 0xFFFFFF00) == 0xE00 )
    v17 = HampSystemReportQuiesceHang(v22 - 152, v21, v11, v6);
  else
    v17 = HampSystemReportActivationHang((HWND)(v22 - 152), v21, v11, v6);
  v24 = v17;
  if ( v17 >= 0 )
  {
    v24 = 0;
    v5 = 0;
    goto LABEL_34;
  }
  v2 = 30;
LABEL_37:
  if ( v17 >= 0 )
  {
LABEL_33:
    v5 = v25;
    goto LABEL_34;
  }
LABEL_30:
  if ( _volatile_metadata > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
    {
      v34 = v18;
      v33 = &v24;
      v27 = v2;
      v35 = &v27;
      v36 = v18;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v19 = *((_QWORD *)a1 - 4);
      v38 = &v30;
      v23 = *((_BYTE *)a1 + 560);
      v40 = &v23;
      v42 = &v28;
      v30 = v19;
      v39 = 8LL;
      v41 = 1LL;
      v28 = v6;
      v43 = v20;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082FAA, 0LL, 0LL, 8u, &v32);
    }
    goto LABEL_33;
  }
  v5 = v25;
LABEL_47:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !v5 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 79) &= ~0x800000000000uLL;
}
