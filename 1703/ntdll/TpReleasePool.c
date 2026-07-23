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

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v2; // rcx
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  __int64 v5; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  _RTL_SRWLOCK *v10; // rdx
  const void **v11; // rcx
  PPEB_LDR_DATA Ldr; // rcx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char v14; // [rsp+78h] [rbp+10h]
  signed __int64 v15; // [rsp+80h] [rbp+18h]

  v14 = 0;
  if ( !Pool || Pool == qword_18015C378 || Pool == (PTP_POOL)qword_18015C368 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      sub_1801058B8(Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      sub_1801058B8(v2);
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
        v3 = *((_QWORD *)Pool + 1);
        LODWORD(v15) = v3;
        do
        {
          if ( !HIDWORD(v3) )
            break;
          HIDWORD(v15) = HIDWORD(v3) - 1;
          v4 = v3;
          v3 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v15, v3);
          LODWORD(v15) = v3;
        }
        while ( v4 != v3 );
        if ( !HIDWORD(v3) )
          break;
        v5 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v5 )
            goto LABEL_27;
          for ( j = 0LL; (unsigned int)j < dword_18015BFF0 && !v5; j = (unsigned int)(j + 1) )
          {
            v8 = sub_18008FDBC(*((_QWORD *)Pool + i + 2) + 24 * j);
            if ( v8 )
              v5 = v8 - 16;
            else
              v5 = 0LL;
          }
        }
        if ( !v5 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v5 && *(_QWORD *)(*(_QWORD *)v5 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v14 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[3];
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
      sub_180005054((__int64)Pool);
    if ( v14 )
    {
      if ( Pool == qword_18015C378 )
      {
        v10 = &stru_18015C380;
        v11 = (const void **)&qword_18015C378;
LABEL_38:
        sub_180018928(v11, v10);
        return;
      }
      if ( Pool == (PTP_POOL)qword_18015C368 )
      {
        v10 = (_RTL_SRWLOCK *)&unk_18015C370;
        v11 = (const void **)&qword_18015C368;
        goto LABEL_38;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
        sub_180082A08(Pool);
    }
  }
}
