/*
 * XREFs of TpReleasePool @ 0x180081D20
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolpFree @ 0x180081F4C (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x18008D900 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x1800A3610 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x18010AED8 (TppRaiseInvalidParameter.c)
 *     TppETWPoolClose @ 0x18010B020 (TppETWPoolClose.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  int i; // edi
  __int64 j; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  _RTL_SRWLOCK *v12; // rdx
  const void **v13; // rcx
  _PEB_LDR_DATA *Ldr; // rcx
  __int64 v15; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v17; // [rsp+88h] [rbp+10h]
  signed __int64 v18; // [rsp+90h] [rbp+18h]

  v17 = 0;
  if ( !Pool
    || Pool == TppPoolpGlobalPool
    || Pool == (PTP_POOL)TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr);
  }
  else
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( *((_BYTE *)Pool + 377) )
    {
      TppRaiseInvalidParameter(v2);
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
        v5 = *((_QWORD *)Pool + 1);
        LODWORD(v18) = v5;
        do
        {
          if ( !HIDWORD(v5) )
            break;
          HIDWORD(v18) = HIDWORD(v5) - 1;
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)Pool + 1, v18, v5);
          LODWORD(v18) = v5;
        }
        while ( v6 != v5 );
        if ( !HIDWORD(v5) )
          break;
        v7 = 0LL;
        for ( i = 0; ; ++i )
        {
          HIDWORD(v15) = i;
          if ( i >= 3 )
            break;
          if ( v7 )
            goto LABEL_27;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            LODWORD(v15) = j;
            if ( (unsigned int)j >= TppNumberNodes || v7 )
              break;
            v10 = TppQueueRemoveHead(*((_QWORD *)Pool + i + 2) + 24 * j, i, v3, v4, v15);
            if ( v10 )
              v7 = v10 - 16;
            else
              v7 = 0LL;
          }
        }
        if ( !v7 )
          continue;
LABEL_27:
        if ( *(_QWORD *)v7 && *(_QWORD *)(*(_QWORD *)v7 + 8LL) )
          _guard_dispatch_icall_fptr();
      }
      *((_QWORD *)Pool + 51) = retaddr;
      *((_BYTE *)Pool + 377) = 1;
      v17 = 1;
    }
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Pool + 46);
    if ( RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWPoolClose(Pool);
    if ( v17 )
    {
      if ( Pool == TppPoolpGlobalPool )
      {
        v12 = &TppPoolpGlobalPoolLock;
        v13 = (const void **)&TppPoolpGlobalPool;
LABEL_38:
        TppPoolpDereferenceGlobalPool(v13, v12);
        return;
      }
      if ( Pool == (PTP_POOL)TppPoolpSerializedPool )
      {
        v12 = (_RTL_SRWLOCK *)&TppPoolpSerializedPoolLock;
        v13 = (const void **)&TppPoolpSerializedPool;
        goto LABEL_38;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Pool, 0xFFFFFFFF) == 1 )
        TppPoolpFree(Pool);
    }
  }
}
