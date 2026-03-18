/*
 * XREFs of PfSnReferenceProcessTrace @ 0x1400602F0
 * Callers:
 *     PfSnLogPageFault @ 0x14005F114 (PfSnLogPageFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     PfSnEndProcessTrace @ 0x140454310 (PfSnEndProcessTrace.c)
 *     PfSnLogHelper @ 0x140497128 (PfSnLogHelper.c)
 *     PfSnAsyncContextInitialize @ 0x1405674B4 (PfSnAsyncContextInitialize.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x140061C00 (ExAcquireRundownProtectionEx.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx
  unsigned int v5; // r8d
  BOOLEAN v6; // si
  signed __int64 *v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  KIRQL v11; // bl
  unsigned __int64 v12; // rdi
  signed __int64 v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  unsigned __int64 v16; // rdx

  _m_prefetchw((const void *)(a1 + 1192));
  v2 = *(_QWORD *)(a1 + 1192);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = v2 & 0xF;
    v6 = 1;
    if ( v5 <= 1 )
    {
      if ( v5 )
      {
        v8 = (signed __int64 *)&v4[45];
        if ( ExAcquireRundownProtectionEx(v4 + 45, 0xFu) )
        {
          _m_prefetchw((const void *)(a1 + 1192));
          v9 = *(_QWORD *)(a1 + 1192);
          while ( (v9 & 0xF) == 0 && v4 == (struct _EX_RUNDOWN_REF *)(v9 & 0xFFFFFFFFFFFFFFF0uLL) )
          {
            v10 = v9;
            v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v9 + 15, v9);
            if ( v10 == v9 )
              return (__int64)v4;
          }
          _m_prefetchw(v8);
          v13 = *v8;
          if ( (*v8 & 1) != 0 )
          {
LABEL_21:
            v16 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFF1uLL) == 15
              && !_interlockedbittestandreset((volatile signed __int32 *)(v16 + 32), 0) )
            {
              KeSetEvent((PRKEVENT)(v16 + 8), 0, 0);
            }
          }
          else
          {
            while ( 1 )
            {
              v15 = _InterlockedCompareExchange64(v8, v13 - 30, v13);
              v14 = v13 == v15;
              v13 = v15;
              if ( v14 )
                break;
              if ( (v15 & 1) != 0 )
                goto LABEL_21;
            }
          }
        }
      }
      else
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_14036DFD0);
        v12 = *(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF0uLL;
        if ( v12 )
          v6 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v12 + 360));
        KxReleaseSpinLock(&qword_14036DFD0);
        __writecr8(v11);
        return v12 & -(__int64)(v6 != 0);
      }
    }
  }
  return (__int64)v4;
}
