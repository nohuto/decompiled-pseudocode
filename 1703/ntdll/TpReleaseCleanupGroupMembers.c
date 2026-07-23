/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800732B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18007358C @ 0x18007358C (sub_18007358C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

void __cdecl TpReleaseCleanupGroupMembers(
        PTP_CLEANUP_GROUP CleanupGroup,
        LOGICAL CancelPendingCallbacks,
        PVOID CleanupParameter)
{
  _TP_CLEANUP_GROUP *i; // rax
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _TP_CLEANUP_GROUP *v9; // rcx
  _TP_CLEANUP_GROUP *v10; // rdx
  _TP_CLEANUP_GROUP **v11; // rax
  PTP_CLEANUP_GROUP *v12; // rdx
  _TP_CLEANUP_GROUP *v13; // rdx
  signed __int32 **v14; // r8
  _TP_CLEANUP_GROUP **v15; // rax
  signed __int32 v16; // r8d
  bool v17; // zf
  signed __int32 v18; // eax
  PTP_CLEANUP_GROUP *v19; // rcx
  _QWORD **v20; // r14
  _QWORD *v21; // rsi
  _QWORD *j; // rax
  volatile signed __int32 *v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdi
  signed __int32 *v27; // [rsp+20h] [rbp-38h]
  volatile signed __int32 *v28; // [rsp+20h] [rbp-38h]
  _TP_CLEANUP_GROUP *v29; // [rsp+28h] [rbp-30h]
  _QWORD *v30; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  if ( !CleanupGroup || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !CleanupGroup )
      sub_1801058B8(0LL, CancelPendingCallbacks);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    for ( i = (_TP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 2);
          i != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 16);
          i = v29 )
    {
      v6 = (volatile signed __int32 *)((char *)i - 40);
      v27 = (signed __int32 *)((char *)i - 40);
      v29 = *(_TP_CLEANUP_GROUP **)i;
      _m_prefetchw((char *)i + 128);
      v7 = *((_DWORD *)i + 32);
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v6 + 42, v7 | 0x20000, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x30000) != 0 )
      {
        v13 = (_TP_CLEANUP_GROUP *)(v27 + 10);
        v14 = (signed __int32 **)*((_QWORD *)v27 + 5);
        v15 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v27 + 6);
        if ( v14[1] != v27 + 10 || *v15 != v13 )
          __fastfail(3u);
        *v15 = (_TP_CLEANUP_GROUP *)v14;
        v14[1] = (signed __int32 *)v15;
        _m_prefetchw(v27);
        v16 = *v27;
        do
        {
          if ( !v16 )
          {
            *((_QWORD *)v27 + 6) = v27 + 10;
            *(_QWORD *)v13 = v13;
            goto LABEL_12;
          }
          v18 = _InterlockedCompareExchange(v27, v16 + 1, v16);
          v17 = v16 == v18;
          v16 = v18;
        }
        while ( !v17 );
        v19 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v19 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          __fastfail(3u);
        *(_QWORD *)v13 = (char *)CleanupGroup + 64;
        *((_QWORD *)v27 + 6) = v19;
        *v19 = v13;
        *((_QWORD *)CleanupGroup + 9) = v13;
      }
      else
      {
        *((_QWORD *)v27 + 23) = retaddr;
        v9 = (_TP_CLEANUP_GROUP *)(v27 + 10);
        v10 = (_TP_CLEANUP_GROUP *)*((_QWORD *)v27 + 5);
        v11 = (_TP_CLEANUP_GROUP **)*((_QWORD *)v27 + 6);
        if ( *(_TP_CLEANUP_GROUP **)(*(_QWORD *)v9 + 8LL) != v9 || *v11 != v9 )
          __fastfail(3u);
        *v11 = v10;
        *((_QWORD *)v10 + 1) = v11;
        v12 = (PTP_CLEANUP_GROUP *)*((_QWORD *)CleanupGroup + 9);
        if ( *v12 != (PTP_CLEANUP_GROUP)((char *)CleanupGroup + 64) )
          __fastfail(3u);
        *(_QWORD *)v9 = (char *)CleanupGroup + 64;
        *((_QWORD *)v27 + 6) = v12;
        *v12 = v9;
        *((_QWORD *)CleanupGroup + 9) = v9;
      }
LABEL_12:
      ;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 1);
    v20 = (_QWORD **)((char *)CleanupGroup + 64);
    v21 = (_QWORD *)*((_QWORD *)CleanupGroup + 8);
    while ( v21 != v20 )
    {
      v26 = v21 - 5;
      v21 = (_QWORD *)*v21;
      if ( *(_QWORD *)(v26[1] + 16LL) )
        _guard_dispatch_icall_fptr();
      if ( CancelPendingCallbacks && *(_QWORD *)(v26[1] + 24LL) )
        _guard_dispatch_icall_fptr();
    }
    for ( j = *v20; j != v20; j = v30 )
    {
      v23 = (volatile signed __int32 *)(j - 5);
      v28 = (volatile signed __int32 *)(j - 5);
      v30 = (_QWORD *)*j;
      v24 = (_QWORD *)*j;
      v25 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v25 != j )
        __fastfail(3u);
      *v25 = v24;
      v24[1] = v25;
      j[1] = j;
      *j = j;
      sub_18007358C(v23 + 14, 0LL, 1LL);
      if ( *((_QWORD *)v23 + 3) )
      {
        if ( (v23[42] & 0x10000) != 0 )
        {
          v23 = v28;
        }
        else
        {
          v23 = v28;
          _guard_dispatch_icall_fptr();
        }
      }
      if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
        _guard_dispatch_icall_fptr();
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)CleanupGroup + 7);
    sub_18007358C((char *)CleanupGroup + 32, 0LL, 1LL);
  }
}
