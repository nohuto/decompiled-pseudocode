/*
 * XREFs of PfSnReferenceProcessTrace @ 0x140012760
 * Callers:
 *     PfSnLogPageFault @ 0x140010A60 (PfSnLogPageFault.c)
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     MiDispatchFault @ 0x1400429F0 (MiDispatchFault.c)
 *     MiMakeSystemCacheRangeValid @ 0x140079590 (MiMakeSystemCacheRangeValid.c)
 *     PfSnAsyncContextInitialize @ 0x140452EEC (PfSnAsyncContextInitialize.c)
 *     PfSnEndProcessTrace @ 0x140455060 (PfSnEndProcessTrace.c)
 *     PfSnLogHelper @ 0x140456164 (PfSnLogHelper.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtectionEx @ 0x1400FA410 (ExAcquireRundownProtectionEx.c)
 */

struct _EX_RUNDOWN_REF *__fastcall PfSnReferenceProcessTrace(__int64 a1)
{
  signed __int64 v2; // r8
  struct _EX_RUNDOWN_REF *v3; // rbx
  unsigned int v5; // r8d
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  BOOLEAN v9; // si
  KIRQL v10; // bp
  signed __int64 Count; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  unsigned __int64 v14; // rdx

  _m_prefetchw((const void *)(a1 + 1192));
  v2 = *(_QWORD *)(a1 + 1192);
  if ( (v2 & 0xF) != 0 )
  {
    do
    {
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v2 - 1, v2);
      if ( v2 == v8 )
        break;
      v2 = v8;
    }
    while ( (v8 & 0xF) != 0 );
  }
  v3 = (struct _EX_RUNDOWN_REF *)(v2 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v2 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
    return v3;
  v5 = v2 & 0xF;
  if ( v5 > 1 )
    return v3;
  if ( v5 )
  {
    if ( ExAcquireRundownProtectionEx(v3 + 45, 0xFu) )
    {
      _m_prefetchw((const void *)(a1 + 1192));
      v6 = *(_QWORD *)(a1 + 1192);
      while ( (v6 & 0xF) == 0 )
      {
        if ( v3 != (struct _EX_RUNDOWN_REF *)(v6 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v7 = v6;
        v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1192), v6 + 15, v6);
        if ( v7 == v6 )
          return v3;
      }
      _m_prefetchw(&v3[45]);
      Count = v3[45].Count;
      if ( (Count & 1) != 0 )
      {
LABEL_23:
        v14 = Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFF1uLL) == 15
          && !_interlockedbittestandreset((volatile signed __int32 *)(v14 + 32), 0) )
        {
          KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
        }
      }
      else
      {
        while ( 1 )
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)&v3[45], Count - 30, Count);
          v12 = Count == v13;
          Count = v13;
          if ( v12 )
            break;
          if ( (v13 & 1) != 0 )
            goto LABEL_23;
        }
      }
    }
  }
  else
  {
    v9 = 1;
    v10 = KeAcquireSpinLockRaiseToDpc(&qword_140389D10);
    v3 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)(a1 + 1192) & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v3 )
      v9 = ExAcquireRundownProtection_0(v3 + 45);
    KxReleaseSpinLock(&qword_140389D10);
    __writecr8(v10);
    if ( !v9 )
      return 0LL;
  }
  return v3;
}
