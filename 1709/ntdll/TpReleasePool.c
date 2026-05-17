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

__int64 __fastcall TpReleasePool(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
  __int64 v16; // rcx
  void *v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  char v22; // [rsp+88h] [rbp+10h]
  signed __int64 v23; // [rsp+90h] [rbp+18h]

  v22 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    result = (__int64)NtCurrentPeb();
    v19 = *(_QWORD *)(result + 24);
    if ( !*(_BYTE *)(v19 + 72) )
      return TppRaiseInvalidParameter(v19, a2, a3, a4);
  }
  else
  {
    RtlAcquireSRWLockExclusive(a1 + 368, a2, a3, a4);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter(v6, v5, v7, v8);
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
        LODWORD(v23) = v9;
        do
        {
          if ( !HIDWORD(v9) )
            break;
          HIDWORD(v23) = HIDWORD(v9) - 1;
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v23, v9);
          LODWORD(v23) = v9;
        }
        while ( v10 != v9 );
        if ( !HIDWORD(v9) )
          break;
        v11 = 0LL;
        for ( i = 0; ; ++i )
        {
          HIDWORD(v20) = i;
          if ( i >= 3 )
            break;
          if ( v11 )
            goto LABEL_27;
          for ( j = 0LL; ; j = (unsigned int)(j + 1) )
          {
            LODWORD(v20) = j;
            if ( (unsigned int)j >= TppNumberNodes || v11 )
              break;
            v14 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j, i, v7, v8, v20);
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
      v22 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    result = (__int64)RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result )
    {
      result = (__int64)NtCurrentPeb();
      v16 = *(_QWORD *)(result + 144) + 556LL;
    }
    else
    {
      v16 = 2147353478LL;
    }
    if ( *(_BYTE *)v16 )
      result = TppETWPoolClose(a1);
    if ( v22 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v17 = &TppPoolpGlobalPoolLock;
        v18 = &TppPoolpGlobalPool;
        return TppPoolpDereferenceGlobalPool((const void **)v18, (__int64)v17);
      }
      if ( a1 == TppPoolpSerializedPool )
      {
        v17 = &TppPoolpSerializedPoolLock;
        v18 = &TppPoolpSerializedPool;
        return TppPoolpDereferenceGlobalPool((const void **)v18, (__int64)v17);
      }
      result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return TppPoolpFree(a1);
    }
  }
  return result;
}
