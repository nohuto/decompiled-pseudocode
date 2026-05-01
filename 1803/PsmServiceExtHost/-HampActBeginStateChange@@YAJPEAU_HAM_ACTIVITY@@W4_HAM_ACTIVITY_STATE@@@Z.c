/*
 * XREFs of ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x1800114F0
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180029DF8 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004EB0 (-HampHostCheckWaitEnterDependencyStateChange@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180005400 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

__int64 __fastcall HampActBeginStateChange(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  _QWORD *Value; // rdi
  unsigned int v7; // edx
  struct _HAM_DEPENDENCY_GROUP *v8; // r12
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // eax
  int v12; // esi
  __int64 v14; // rdi
  DWORD v15; // r15d
  _QWORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  int v20; // r15d
  _QWORD *v21; // rax
  unsigned int v24; // ebx
  unsigned __int8 v25; // [rsp+30h] [rbp-59h] BYREF
  char v26; // [rsp+31h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-51h] BYREF
  int v28; // [rsp+48h] [rbp-41h]
  __int64 v29; // [rsp+4Ch] [rbp-3Dh]
  int v30; // [rsp+54h] [rbp-35h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v32; // [rsp+70h] [rbp-19h]
  int v33; // [rsp+78h] [rbp-11h]
  int v34; // [rsp+7Ch] [rbp-Dh]
  __int64 v35; // [rsp+80h] [rbp-9h]
  __int64 v36; // [rsp+88h] [rbp-1h]
  char *v37; // [rsp+90h] [rbp+7h]
  __int64 v38; // [rsp+98h] [rbp+Fh]
  char *v39; // [rsp+A0h] [rbp+17h]
  __int64 v40; // [rsp+A8h] [rbp+1Fh]

  v2 = HampLockTrackerId;
  v4 = *(_QWORD *)(a1 + 80);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v8 = HampHostCheckWaitEnterDependencyStateChange((struct _RM_HAM_ACTIVITY_HOST *)v4, v7);
  else
    v8 = 0LL;
  v9 = *(_DWORD *)(a1 + 536);
  if ( (v9 & 1) != 0 )
  {
    v24 = -1073740682;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a1 + 540);
    v28 = 12;
    v29 = 2LL;
    v30 = 14;
    v11 = *((_DWORD *)&EventDescriptor.Keyword + a2 + 1);
    if ( _bittest(&v11, v10) )
    {
      v12 = 1;
      if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
      {
        v36 = 8LL;
        v35 = a1 + 40;
        v37 = (char *)&v25;
        v39 = &v26;
        v25 = a2;
        v38 = 1LL;
        v26 = v10;
        v40 = 1LL;
        *(_DWORD *)&EventDescriptor.Level = 4;
        UserData.Ptr = (ULONGLONG)off_1800920F8;
        *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800838AE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        EventDescriptor.Keyword = 8LL;
        UserData.Size = *(unsigned __int16 *)off_1800920F8;
        v32 = &unk_1800838B9;
        UserData.Reserved = 2;
        v33 = 55;
        v34 = 1;
        EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
        v9 = *(_DWORD *)(a1 + 536);
      }
      *(_BYTE *)(a1 + 540) = a2;
      *(_DWORD *)(a1 + 536) = v9 | 1;
      if ( (_BYTE)v10 == 2 )
        HampActSetPendState(a1, 5u);
      if ( v8 )
      {
        *(_DWORD *)(a1 + 536) |= 2u;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 664LL);
        if ( v14 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 536) & 2) == 0 )
        {
          v15 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v16 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              __int2c();
            *v16 |= 8uLL;
            ++v16[4];
          }
          RtlAcquireSRWLockExclusive(v14 + 8);
          *(_DWORD *)(v14 + 16) = GetCurrentThreadId();
          v17 = *(_QWORD *)(a1 + 80);
          v18 = *(_QWORD *)(v14 + 112) + 1LL;
          *(_QWORD *)(v14 + 112) = v18;
          v19 = (__int64 *)(v17 + 600);
          if ( v19 )
            *v19 = v18;
          if ( *(_DWORD *)(v14 + 128) )
          {
            v20 = 0;
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 96)) <= 1 )
              __fastfail(0xEu);
            *(_DWORD *)(v14 + 128) = GetCurrentThreadId();
            v20 = 1;
          }
          if ( *(_DWORD *)(v14 + 128) != GetCurrentThreadId() )
            v12 = 0;
          if ( v20 != v12 )
            __int2c();
          *(_DWORD *)(a1 + 536) &= ~2u;
          *(_DWORD *)(a1 + 536) |= 2 * v20;
          *(_DWORD *)(v14 + 16) = 0;
          RtlReleaseSRWLockExclusive(v14 + 8);
          if ( HampLockTrackerId != -1 )
          {
            v21 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v21 & 8) == 0 )
              __int2c();
            if ( v21[4]-- == 1LL )
              *v21 &= ~8uLL;
          }
        }
      }
      return 0LL;
    }
    v24 = -1073700861;
  }
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4, v7);
  if ( v8 )
    HampDepGroupRunStateChangeWorker(v8);
  return v24;
}
