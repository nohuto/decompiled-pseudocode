/*
 * XREFs of ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0
 * Callers:
 *     ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800112AC (-HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002B6F0 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800347D0 (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800409A0 (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 * Callees:
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180010D50 (-HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180011880 (-HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019090 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z @ 0x180023600 (-RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x180024A90 (CemRcObjectDereference.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180033278 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180035748 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampActClose(struct _HAM_ACTIVITY *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  int v4; // r12d
  DWORD v5; // esi
  _QWORD *Value; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // r9d
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  void *v25; // rcx
  DWORD v26; // esi
  __int64 v27; // r14
  _QWORD *v28; // rdi
  struct _RM_HAM_ACTIVITY_HOST *v29; // rcx
  char v30; // al
  __int64 v31; // rcx
  struct _HAM_DEPENDENCY_GROUP *v32; // r15
  struct _HAM_HOST_DEPENDENCY *v33; // rsi
  __int64 v34; // rdi
  _QWORD *v35; // rax
  DWORD v36; // r14d
  unsigned __int64 v37; // rsi
  struct _HOST_ACTIVITY_MANAGER *v38; // r13
  _QWORD *v39; // rdi
  struct _HOST_ACTIVITY_MANAGER *v40; // rdi
  _QWORD *v41; // rax
  struct _HOST_ACTIVITY_MANAGER *v42; // rcx
  int v43; // [rsp+30h] [rbp-99h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-95h]
  __int64 v45; // [rsp+38h] [rbp-91h] BYREF
  __int64 v46; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-69h] BYREF
  void *v49; // [rsp+70h] [rbp-59h]
  int v50; // [rsp+78h] [rbp-51h]
  int v51; // [rsp+7Ch] [rbp-4Dh]
  char *v52; // [rsp+80h] [rbp-49h]
  __int64 v53; // [rsp+88h] [rbp-41h]
  __int64 *v54; // [rsp+90h] [rbp-39h]
  __int64 v55; // [rsp+98h] [rbp-31h]
  char *v56; // [rsp+A0h] [rbp-29h]
  __int64 v57; // [rsp+A8h] [rbp-21h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+C0h] [rbp-9h] BYREF
  int *v60; // [rsp+D0h] [rbp+7h]
  __int64 v61; // [rsp+D8h] [rbp+Fh]
  __int64 *v62; // [rsp+E0h] [rbp+17h]
  __int64 v63; // [rsp+E8h] [rbp+1Fh]

  result = HampActBeginStateChange((__int64)a1, 4u);
  v44 = result;
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)a1 + 8);
    v4 = 0;
    if ( v3 )
    {
      v5 = HampLockTrackerId;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFE00uLL) != 0 )
          __int2c();
        *Value |= 0x200uLL;
        ++Value[10];
      }
      RtlAcquireSRWLockExclusive(v3 + 24);
      *(_DWORD *)(v3 + 32) = GetCurrentThreadId();
      v7 = (_QWORD *)((char *)a1 + 48);
      v8 = *((_QWORD *)a1 + 6);
      if ( *(struct _HAM_ACTIVITY **)(v8 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 48)
        || (v9 = (_QWORD *)*((_QWORD *)a1 + 7), (_QWORD *)*v9 != v7) )
      {
        __fastfail(3u);
      }
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      *v7 = 0LL;
      *((_QWORD *)a1 + 7) = 0LL;
      if ( HampLockTrackerId != -1 )
      {
        v10 = TlsGetValue(HampLockTrackerId);
        if ( (*(_DWORD *)v10 & 0x200LL) == 0 )
          __int2c();
        v11 = v10[10]-- == 1LL;
        if ( v11 )
          *v10 &= ~0x200uLL;
      }
      *(_DWORD *)(v3 + 32) = 0;
      RtlReleaseSRWLockExclusive(v3 + 24);
    }
    v12 = *((_QWORD *)a1 + 12);
    v13 = (_QWORD *)((char *)a1 + 96);
    if ( *(struct _HAM_ACTIVITY **)(v12 + 8) != (struct _HAM_ACTIVITY *)((char *)a1 + 96)
      || (v14 = (_QWORD *)*((_QWORD *)a1 + 13), (_QWORD *)*v14 != v13) )
    {
      __fastfail(3u);
    }
    *v14 = v12;
    *(_QWORD *)(v12 + 8) = v14;
    *v13 = 0LL;
    *((_QWORD *)a1 + 13) = 0LL;
    v15 = *((_QWORD *)a1 + 10);
    HampHostCheckSetCacheTimer((struct _RM_HAM_ACTIVITY_HOST *)v15);
    if ( *(struct _HAM_ACTIVITY **)(v15 + 928) == a1 )
      *(_QWORD *)(v15 + 928) = 0LL;
    v16 = *((_QWORD *)a1 + 10);
    if ( HampLockTrackerId != -1 )
    {
      v17 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v17 & 2) == 0 )
        __int2c();
      v11 = v17[2]-- == 1LL;
      if ( v11 )
        *v17 &= ~2uLL;
    }
    *(_DWORD *)(v16 + 8) = 0;
    RtlReleaseSRWLockExclusive(v16);
    v18 = *((_QWORD *)a1 + 9);
    if ( v18 )
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8) + 24LL);
    else
      v19 = -1LL;
    v20 = 1;
    v46 = v19;
    if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
    {
      v53 = 8LL;
      v52 = (char *)a1 + 40;
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 10) - 32LL);
      v54 = &v45;
      v45 = v21;
      v56 = (char *)a1 + 504;
      v55 = 8LL;
      v57 = 8LL;
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 62);
      TlgCreateWsz(&v59, (LPCWSTR)a1 + 126);
      v22 = *((_DWORD *)a1 + 28);
      v60 = &v43;
      v62 = &v46;
      v43 = v22;
      v61 = 4LL;
      v63 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800920F8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800837FC - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 8LL;
      UserData.Size = *(unsigned __int16 *)off_1800920F8;
      v49 = &unk_180083807;
      UserData.Reserved = 2;
      v50 = 106;
      v51 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
    v23 = *((_QWORD *)a1 + 11);
    v24 = *(_QWORD *)(v23 + 16);
    if ( v24 != -1LL )
    {
      RmSrvResourceSetReleaseResources(RmSvcGlobals, v24, 0);
      *(_QWORD *)(v23 + 16) = -1LL;
    }
    v25 = (void *)*((_QWORD *)a1 + 62);
    if ( v25 )
    {
      HampSystemActivationClientDeactivate(v25);
      *((_QWORD *)a1 + 62) = 0LL;
    }
    v26 = HampLockTrackerId;
    v27 = *((_QWORD *)a1 + 10);
    if ( HampLockTrackerId != -1 )
    {
      v28 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v26) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *v28 |= 2uLL;
      ++v28[2];
    }
    RtlAcquireSRWLockExclusive(v27);
    *(_DWORD *)(v27 + 8) = GetCurrentThreadId();
    v29 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 134) &= ~1u;
    HampHostUpdateActivityState(v29);
    v30 = *((_BYTE *)a1 + 540);
    if ( v30 != 4 && v30 != 1 )
      v20 = 0;
    v31 = *((_QWORD *)a1 + 10);
    v32 = *(struct _HAM_DEPENDENCY_GROUP **)(v31 + 664);
    if ( v32 )
    {
      HampActCheckEnterDependencyWorker(a1);
      v4 = (*((_DWORD *)a1 + 134) >> 1) & 1;
      *((_DWORD *)a1 + 134) &= ~2u;
    }
    else
    {
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)v31, 0);
    }
    if ( !v4 )
      v32 = 0LL;
    if ( *((_BYTE *)a1 + 540) == 4 )
    {
      v33 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 9);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    else
    {
      v33 = 0LL;
    }
    v34 = *((_QWORD *)a1 + 10);
    if ( HampLockTrackerId != -1 )
    {
      v35 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v35 & 2) == 0 )
        __int2c();
      v11 = v35[2]-- == 1LL;
      if ( v11 )
        *v35 &= ~2uLL;
    }
    *(_DWORD *)(v34 + 8) = 0;
    RtlReleaseSRWLockExclusive(v34);
    if ( v33 )
      HampHostDepDestroy(v33);
    if ( v20 )
    {
      v36 = HampLockTrackerId;
      v37 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 136;
      v38 = *(struct _HOST_ACTIVITY_MANAGER **)v37;
      if ( HampLockTrackerId != -1 )
      {
        v39 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v36) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
          __int2c();
        *v39 |= 0x400uLL;
        ++v39[11];
      }
      RtlAcquireSRWLockExclusive(v38);
      *((_DWORD *)v38 + 2) = GetCurrentThreadId();
      if ( *(_DWORD *)(v37 + 44) )
      {
        v42 = *(struct _HOST_ACTIVITY_MANAGER **)v37;
        ++*(_QWORD *)(v37 + 48);
        HampManagerReleaseLockExclusive(v42);
        RtlWakeAddressAll(v37 + 48);
      }
      else
      {
        v40 = *(struct _HOST_ACTIVITY_MANAGER **)v37;
        if ( HampLockTrackerId != -1 )
        {
          v41 = TlsGetValue(HampLockTrackerId);
          if ( (*(_DWORD *)v41 & 0x400LL) == 0 )
            __int2c();
          v11 = v41[11]-- == 1LL;
          if ( v11 )
            *v41 &= ~0x400uLL;
        }
        *((_DWORD *)v40 + 2) = 0;
        RtlReleaseSRWLockExclusive(v40);
      }
    }
    if ( v4 )
      HampDepGroupRunStateChangeWorker(v32);
    RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
    if ( *((_QWORD *)a1 + 8) )
      CemRcObjectDereference(a1);
    CemRcObjectDereference(a1);
    return v44;
  }
  return result;
}
