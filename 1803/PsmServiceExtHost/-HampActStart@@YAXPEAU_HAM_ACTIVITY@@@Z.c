/*
 * XREFs of ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000A560
 * Callers:
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     RmpWnfPublishMessageToClientStateName @ 0x18000AA8C (RmpWnfPublishMessageToClientStateName.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AB98 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18003F944 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampActStart(struct _HAM_ACTIVITY *a1)
{
  _OWORD *v1; // r8
  char v2; // r12
  __int128 v4; // xmm1
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // r15
  DWORD v9; // r14d
  _QWORD *Value; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  bool v13; // zf
  __int64 v14; // rax
  int v15; // ebx
  __int16 v16; // r15
  DWORD v17; // r14d
  __int64 v18; // r15
  _QWORD *v19; // rbx
  __int64 v20; // r14
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // r9
  unsigned __int64 v25; // rbx
  __int64 *v26; // r10
  __int64 v27; // r11
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int64 v30; // kr00_8
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  void (__fastcall **v34)(_QWORD *, _QWORD); // rax
  char v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+31h] [rbp-CFh] BYREF
  int v37; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD v38[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  _QWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  unsigned __int64 v44; // [rsp+80h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v46[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+C0h] [rbp-40h] BYREF
  void *v49; // [rsp+D0h] [rbp-30h]
  int v50; // [rsp+D8h] [rbp-28h]
  int v51; // [rsp+DCh] [rbp-24h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  char *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  _QWORD *v59; // [rsp+130h] [rbp+30h]
  __int64 v60; // [rsp+138h] [rbp+38h]
  int *v61; // [rsp+140h] [rbp+40h]
  __int64 v62; // [rsp+148h] [rbp+48h]

  v1 = (_OWORD *)*((_QWORD *)a1 + 64);
  v2 = *((_BYTE *)a1 + 540);
  v4 = v1[1];
  v46[0] = *v1;
  v47 = *((_QWORD *)v1 + 4);
  *((_BYTE *)a1 + 540) = 3;
  v46[1] = v4;
  if ( v1 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *((_QWORD *)a1 + 64) = 0LL;
  }
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  *((_BYTE *)a1 + 541) = 5;
  HampHostUpdateActivityState(v5);
  v6 = *((_QWORD *)a1 + 10);
  *((_QWORD *)a1 + 63) = *(_QWORD *)(v6 + 768);
  v7 = *(_DWORD *)(v6 + 800);
  v8 = *(_QWORD *)(v6 + 664);
  if ( v7 <= *((_DWORD *)a1 + 97) )
    v7 = *((_DWORD *)a1 + 97);
  *(_DWORD *)(v6 + 800) = v7;
  if ( v8 )
  {
    v9 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v9) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v8 + 8);
    *(_DWORD *)(v8 + 16) = GetCurrentThreadId();
    HampDepGroupQueueWorker(*(struct _HAM_DEPENDENCY_GROUP **)(v6 + 664));
    v11 = *(_QWORD *)(v6 + 664) + 8LL;
    *(_DWORD *)(v11 + 8) = 0;
    RtlReleaseSRWLockExclusive(v11);
    if ( HampLockTrackerId != -1 )
    {
      v12 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v12 & 8) == 0 )
        __int2c();
      v13 = v12[4]-- == 1LL;
      if ( v13 )
        *v12 &= ~8uLL;
    }
  }
  if ( (unsigned int)HampUtilHasExternalResourceAccess((char *)a1 + 488, 28LL) )
    *(_QWORD *)(v6 + 632) |= 0x20000000000000uLL;
  if ( *((_QWORD *)a1 + 8) )
  {
    v14 = *((_QWORD *)a1 + 5);
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    v42[0] = 0LL;
    v42[1] = 0LL;
    v43 = 0LL;
    v38[0] = v14;
    v38[1] = 0LL;
    if ( *(_DWORD *)(v6 + 560) == 2 )
    {
      v17 = HampLockTrackerId;
      v18 = *(_QWORD *)(v6 + 744);
      if ( HampLockTrackerId != -1 )
      {
        v19 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v17) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v19 |= 0x20uLL;
        ++v19[6];
      }
      v20 = v18 + 576;
      RtlAcquireSRWLockShared(v18 + 576);
      v15 = *(_DWORD *)(v18 + 608) & 7;
      v16 = *(_DWORD *)(v18 + 608) >> 3;
      if ( HampLockTrackerId != -1 )
      {
        v21 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v21 & 0x20) == 0 )
          __int2c();
        v13 = v21[6]-- == 1LL;
        if ( v13 )
          *v21 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(v20);
      if ( v15 == 4 )
      {
        v15 = 3;
      }
      else if ( v15 != 3 )
      {
        v22 = v15;
        if ( (*(_QWORD *)(v6 + 632) & 0x100000000000LL) == 0 )
          v22 = 3;
        v15 = v22;
      }
    }
    else
    {
      v15 = 4;
      v16 = 6400;
    }
    LOWORD(v43) = v16;
    LODWORD(v43) = (v15 << 16) | v43 & 0xFFF8FFFF;
    v40 = *((_QWORD *)a1 + 63);
    RtlQueryPerformanceFrequency(&v44);
    v23 = *(_QWORD *)&v46[0];
    v24 = v42;
    v25 = v44;
    v26 = (__int64 *)v46 + 1;
    v41 = *(_QWORD *)&v46[0];
    v27 = 4LL;
    do
    {
      v28 = *v26++;
      v24 = (_QWORD *)((char *)v24 + 4);
      v30 = v28 - v23;
      v29 = 1000 * (v28 - v23);
      v31 = -1LL;
      if ( is_mul_ok(v30, 0x3E8uLL) )
        v31 = v29;
      v32 = v31 / v25;
      if ( v31 / v25 > 0xFFFFFFFF )
        LODWORD(v32) = -1;
      *((_DWORD *)v24 - 1) = v32;
      v23 = *(v26 - 1);
      --v27;
    }
    while ( v27 );
    *((_QWORD *)a1 + 50) = 0LL;
    v33 = *((_QWORD *)a1 + 8);
    *((_DWORD *)a1 + 102) |= 4u;
    v34 = (void (__fastcall **)(_QWORD *, _QWORD))(v33 + 104);
    if ( (*(_BYTE *)(v33 + 128) & 2) != 0 )
    {
      (*v34)(v38, *(_QWORD *)(v33 + 120));
    }
    else if ( (int)RmpWnfPublishMessageToClientStateName(v34, v38, 64LL, *(_QWORD *)(v33 + 112)) < 0 )
    {
      if ( _volatile_metadata <= 4u )
        return;
      if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
      {
        v60 = 8LL;
        v59 = v38;
        v37 = v39;
        v61 = &v37;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180080859, 0LL, 0LL, 4u, &pData);
      }
    }
  }
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v53 = 8LL;
    v52 = (char *)a1 + 40;
    v54 = &v35;
    v56 = &v36;
    v35 = 3;
    v55 = 1LL;
    v36 = v2;
    v57 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800838AE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 8LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v49 = &unk_1800838B9;
    UserData.Reserved = 2;
    v50 = 55;
    v51 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
}
