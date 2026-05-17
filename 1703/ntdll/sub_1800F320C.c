/*
 * XREFs of sub_1800F320C @ 0x1800F320C
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F30F0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F320C(__int64 a1, __int64 a2)
{
  char v3; // r14
  _DWORD *v5; // rsi
  _DWORD *v6; // rbx
  unsigned __int64 *v7; // rdi
  bool v8; // zf
  unsigned __int64 v9; // rcx
  unsigned __int64 **v10; // rax
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v16; // [rsp+28h] [rbp-8h]

  v16 = &v15;
  v3 = 0;
  v15 = (unsigned __int64)&v15;
  RtlAcquireSRWLockExclusive(&qword_18015C730);
  v5 = off_1801559E0;
  while ( v5 != (_DWORD *)&off_1801559E0 )
  {
    v6 = v5 + 4;
    ++v5[4];
    v7 = (unsigned __int64 *)v5;
    RtlReleaseSRWLockExclusive(&qword_18015C730);
    if ( (*((unsigned __int8 (__fastcall **)(__int64, __int64))v5 + 3))(a1, a2) )
      v3 = 1;
    RtlAcquireSRWLockExclusive(&qword_18015C730);
    v8 = (*v6)-- == 1;
    v5 = *(_DWORD **)v5;
    if ( v8 )
    {
      v9 = *v7;
      v10 = (unsigned __int64 **)v7[1];
      if ( *(unsigned __int64 **)(*v7 + 8) != v7 || *v10 != v7 )
        __fastfail(3u);
      *v10 = (unsigned __int64 *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = v16;
      if ( (unsigned __int64 *)*v16 != &v15 )
        __fastfail(3u);
      v7[1] = (unsigned __int64)v16;
      *v7 = (unsigned __int64)&v15;
      *v11 = (unsigned __int64)v7;
      v16 = v7;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C730);
  while ( 1 )
  {
    v12 = v15;
    if ( (unsigned __int64 *)v15 == &v15 )
      break;
    v13 = *(_QWORD *)v15;
    if ( *(unsigned __int64 **)(v15 + 8) != &v15 || *(_QWORD *)(v13 + 8) != v15 )
      __fastfail(3u);
    v15 = *(_QWORD *)v15;
    *(_QWORD *)(v13 + 8) = &v15;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v12);
  }
  return v3;
}
