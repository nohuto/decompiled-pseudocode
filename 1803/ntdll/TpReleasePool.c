/*
 * XREFs of TpReleasePool @ 0x18007E670
 * Callers:
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_180089000 @ 0x180089000 (sub_180089000.c)
 *     ZwShutdownWorkerFactory @ 0x18009E050 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 *     sub_180108810 @ 0x180108810 (sub_180108810.c)
 */

signed __int64 __fastcall TpReleasePool(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
  signed __int64 result; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rcx
  signed __int64 *v19; // rdx
  __int64 *v20; // rcx
  __int64 v21; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v23; // [rsp+88h] [rbp+10h]
  signed __int64 v24; // [rsp+90h] [rbp+18h]

  v23 = 0;
  if ( !a1 || a1 == qword_18015D3B8 || a1 == qword_18015D3A8 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (signed __int64)NtCurrentPeb();
    v21 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v21 + 72) )
      return sub_1801086C8(v21, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      sub_1801086C8(v6, v5, v7, v8);
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
          for ( j = 0LL; (unsigned int)j < dword_18015D044 && !v11; j = (unsigned int)(j + 1) )
          {
            v14 = sub_180089000(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i);
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
    result = (signed __int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (signed __int64)NtCurrentPeb();
      v18 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v18 = 2147353478LL;
    }
    if ( *(_BYTE *)v18 )
      result = sub_180108810(a1);
    if ( v23 )
    {
      if ( a1 == qword_18015D3B8 )
      {
        v19 = &qword_18015D3B0;
        v20 = &qword_18015D3B8;
      }
      else
      {
        if ( a1 != qword_18015D3A8 )
        {
          result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
          if ( (_DWORD)result == 1 )
            return sub_18007E8A0(a1);
          return result;
        }
        v19 = (signed __int64 *)&unk_18015D3A0;
        v20 = &qword_18015D3A8;
      }
      return sub_180047198((const void **)v20, (unsigned __int64)v19, v16, v17);
    }
  }
  return result;
}
