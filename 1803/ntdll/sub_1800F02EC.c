/*
 * XREFs of sub_1800F02EC @ 0x1800F02EC
 * Callers:
 *     RtlFlushSecureMemoryCache @ 0x1800F01D0 (RtlFlushSecureMemoryCache.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800F02EC(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  char v5; // r14
  _DWORD *v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  unsigned __int64 **v14; // rax
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 *v20; // [rsp+28h] [rbp-8h]

  v20 = &v19;
  v5 = 0;
  v19 = (unsigned __int64)&v19;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D760, a2, a3, a4);
  v7 = off_180156A40;
  while ( v7 != (_DWORD *)&off_180156A40 )
  {
    v8 = v7 + 4;
    ++v7[4];
    v9 = (unsigned __int64 *)v7;
    RtlReleaseSRWLockExclusive(&qword_18015D760);
    if ( (*((unsigned __int8 (__fastcall **)(__int64, unsigned __int64))v7 + 3))(a1, a2) )
      v5 = 1;
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D760, v10, v11, v12);
    v13 = (*v8)-- == 1;
    v7 = *(_DWORD **)v7;
    if ( v13 )
    {
      if ( *((unsigned __int64 **)v7 + 1) != v9 || (v14 = (unsigned __int64 **)v9[1], *v14 != v9) )
        __fastfail(3u);
      *v14 = (unsigned __int64 *)v7;
      *((_QWORD *)v7 + 1) = v14;
      v15 = v20;
      if ( (unsigned __int64 *)*v20 != &v19 )
        __fastfail(3u);
      v9[1] = (unsigned __int64)v20;
      *v9 = (unsigned __int64)&v19;
      *v15 = (unsigned __int64)v9;
      v20 = v9;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D760);
  while ( 1 )
  {
    v16 = v19;
    if ( (unsigned __int64 *)v19 == &v19 )
      break;
    if ( *(unsigned __int64 **)(v19 + 8) != &v19 || (v17 = *(_QWORD *)v19, *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19) )
      __fastfail(3u);
    v19 = *(_QWORD *)v19;
    *(_QWORD *)(v17 + 8) = &v19;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16);
  }
  return v5;
}
