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

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  __int64 v9; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  _RTL_SRWLOCK *v14; // rdx
  const void **v15; // rcx
  PPEB_LDR_DATA Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v18; // [rsp+88h] [rbp+10h]
  signed __int64 v19; // [rsp+90h] [rbp+18h]

  v18 = 0;
  if ( !Pool || Pool == qword_18015D3B8 || Pool == (PTP_POOL)qword_18015D3A8 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      sub_1801086C8(Ldr, v1, v2);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      sub_1801086C8(v5, v4, v6);
    }
    else
    {
      if ( !*((_BYTE *)Pool + 376) )
      {
        *((_BYTE *)Pool + 376) = 1;
        ZwShutdownWorkerFactory(*((HANDLE *)Pool + 7), (LONG *)Pool);
      }
      while ( 1 )
      {
        _m_prefetchw((char *)Pool + 8);
        v7 = *((_QWORD *)Pool + 1);
        LODWORD(v19) = v7;
        do
        {
          if ( !HIDWORD(v7) )
            break;
          HIDWORD(v19) = HIDWORD(v7) - 1;
          v8 = v7;
          v7 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v19, v7);
          LODWORD(v19) = v7;
        }
        while ( v8 != v7 );
        if ( !HIDWORD(v7) )
          break;
        v9 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v9 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < dword_18015D044 && !v9; j = (unsigned int)(j + 1) )
          {
            v12 = sub_180089000(*((_QWORD *)Pool + i + 2) + 24 * j, i);
            if ( v12 )
              v9 = v12 - 16;
            else
              v9 = 0LL;
          }
        }
        if ( !v9 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v9 && *(_QWORD *)(*(_QWORD *)v9 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v18 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
      sub_180108810(Pool);
    if ( v18 )
    {
      if ( Pool == qword_18015D3B8 )
      {
        v14 = &stru_18015D3B0;
        v15 = (const void **)&qword_18015D3B8;
      }
      else
      {
        if ( Pool != (PTP_POOL)qword_18015D3A8 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
            sub_18007E8A0(Pool);
          return;
        }
        v14 = (_RTL_SRWLOCK *)&unk_18015D3A0;
        v15 = (const void **)&qword_18015D3A8;
      }
      sub_180047198(v15, v14);
    }
  }
}
