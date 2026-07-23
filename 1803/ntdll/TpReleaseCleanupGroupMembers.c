/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800552A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180055584 @ 0x180055584 (sub_180055584.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  PPEB_LDR_DATA Ldr; // r9
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  _TP_CLEANUP_GROUP *v10; // rdx
  _TP_CLEANUP_GROUP *v11; // r8
  _TP_CLEANUP_GROUP **v12; // rax
  _TP_CLEANUP_GROUP *v13; // rax
  PTP_CLEANUP_GROUP *v14; // rdx
  _TP_CLEANUP_GROUP *v15; // r8
  _TP_CLEANUP_GROUP **v16; // rax
  signed __int32 v17; // r9d
  signed __int32 v18; // r8d
  bool v19; // zf
  signed __int32 v20; // eax
  PTP_CLEANUP_GROUP *v21; // rcx
  _QWORD **v22; // r14
  _QWORD *v23; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v25; // rdi
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rdi
  signed __int32 *v29; // [rsp+28h] [rbp-40h]
  volatile signed __int32 *v30; // [rsp+28h] [rbp-40h]
  _TP_CLEANUP_GROUP *v31; // [rsp+30h] [rbp-38h]
  _QWORD *v32; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( !CleanupGroup || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    if ( !CleanupGroup )
      sub_1801086C8(0LL, CancelPendingCallbacks, CleanupParameter, Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
          i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
          i = v31 )
    {
      v7 = (volatile signed __int32 *)((char *)i - 40);
      v29 = (signed __int32 *)((char *)i - 40);
      v31 = *(_TP_CLEANUP_GROUP **)i;
      _m_prefetchw((char *)i + 128);
      v8 = *((_DWORD *)i + 32);
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v7 + 42, v8 | 0x20000, v8);
      }
      while ( v9 != v8 );
      v10 = (_TP_CLEANUP_GROUP *)(v29 + 10);
      if ( (v8 & 0x30000) != 0 )
      {
        v15 = *(_TP_CLEANUP_GROUP **)v10;
        v16 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v29 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 || *v16 != v10 )
          __fastfail(3u);
        *v16 = v15;
        *((_QWORD *)v15 + 1) = v16;
        _m_prefetchw(v29);
        v17 = *v29;
        while ( v17 )
        {
          v18 = v17;
          v20 = _InterlockedCompareExchange(v29, v17 + 1, v17);
          v19 = v17 == v20;
          v17 = v20;
          if ( v19 )
            goto LABEL_22;
        }
        v18 = 0;
LABEL_22:
        if ( v18 )
        {
          v21 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
          if ( *v21 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
            __fastfail(3u);
          *(_QWORD *)v10 = (char *)CleanupGroup + 64;
          *((_QWORD *)v29 + 6) = v21;
          *v21 = v10;
          *((_QWORD *)CleanupGroup + 9) = v10;
        }
        else
        {
          *((_QWORD *)v29 + 6) = v29 + 10;
          *(_QWORD *)v10 = v10;
        }
      }
      else
      {
        *((_QWORD *)v29 + 23) = retaddr;
        v11 = *(_TP_CLEANUP_GROUP **)v10;
        v12 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v29 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *((_QWORD *)v11 + 1) = v12;
        v13 = (_TP_CLEANUP_GROUP *)(v29 + 10);
        v14 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v14 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          __fastfail(3u);
        *(_QWORD *)v13 = (char *)CleanupGroup + 64;
        *((_QWORD *)v29 + 6) = v14;
        *v14 = v13;
        *((_QWORD *)CleanupGroup + 9) = v13;
      }
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    v22 = (_QWORD **)((char *)CleanupGroup + 64);
    v23 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
    while ( v23 != v22 )
    {
      v28 = v23 - 5;
      v23 = (_QWORD *)*v23;
      if ( *(_QWORD *)(v28[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( CancelPendingCallbacks && *(_QWORD *)(v28[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v22; j != v22; j = v32 )
    {
      v25 = (volatile signed __int32 *)(j - 5);
      v30 = (volatile signed __int32 *)(j - 5);
      v26 = (_QWORD *)*j;
      v32 = (_QWORD *)*j;
      v27 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v27 != j )
        __fastfail(3u);
      *v27 = v26;
      v26[1] = v27;
      j[1] = j;
      *j = j;
      sub_180055584(v25 + 14, 0LL);
      if ( *((_QWORD *)v25 + 3) )
      {
        if ( (v25[42] & 0x10000) != 0 )
        {
          v25 = v30;
        }
        else
        {
          v25 = v30;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    sub_180055584((char *)CleanupGroup + 32, 0LL);
  }
}
