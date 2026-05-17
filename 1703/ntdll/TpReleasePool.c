/*
 * XREFs of TpReleasePool @ 0x1800827E0
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     sub_18001A9B4 @ 0x18001A9B4 (sub_18001A9B4.c)
 * Callees:
 *     sub_180005054 @ 0x180005054 (sub_180005054.c)
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180082A08 @ 0x180082A08 (sub_180082A08.c)
 *     sub_18008FDBC @ 0x18008FDBC (sub_18008FDBC.c)
 *     ZwShutdownWorkerFactory @ 0x1800A87F0 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1801058B8 @ 0x1801058B8 (sub_1801058B8.c)
 */

__int64 __fastcall TpReleasePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  void *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char v23; // [rsp+78h] [rbp+10h]
  signed __int64 v24; // [rsp+80h] [rbp+18h]

  v23 = 0;
  if ( !a1 || a1 == qword_18015C378 || a1 == qword_18015C368 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v21 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v21 + 72) )
      return sub_1801058B8(v21, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( *(_BYTE *)(a1 + 377) )
    {
      sub_1801058B8(v6, v5, v7, v8);
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v9 = *(_QWORD *)(a1 + 8);
        LODWORD(v24) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v24) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v24, v9);
          LODWORD(v24) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < dword_18015BFF0 && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = sub_18008FDBC(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j);
            if ( v14 )
              v11 = v14 - 16;
            else
              v11 = 0LL;
          }
        }
        if ( !v11 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v11 && *(_QWORD *)(*(_QWORD *)v11 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v23 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (__int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (__int64)NtCurrentPeb();
      v18 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v18 = 2147353478LL;
    }
    if ( *(_BYTE *)v18 )
      result = sub_180005054(a1);
    if ( v23 )
    {
      if ( a1 == qword_18015C378 )
      {
        v19 = &unk_18015C380;
        v20 = &qword_18015C378;
        return sub_180018928((const void **)v20, (__int64)v19);
      }
      if ( a1 == qword_18015C368 )
      {
        v19 = &unk_18015C370;
        v20 = &qword_18015C368;
        return sub_180018928((const void **)v20, (__int64)v19);
      }
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return sub_180082A08(a1, v16, v17);
    }
  }
  return result;
}
