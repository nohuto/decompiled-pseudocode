/*
 * XREFs of PiCollapseRebalanceRequests @ 0x14023DE98
 * Callers:
 *     PnpProcessRebalance @ 0x14023E0DC (PnpProcessRebalance.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 */

bool __fastcall PiCollapseRebalanceRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  KIRQL v5; // bl
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // rax
  __int64 *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v6 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      if ( *(_DWORD *)(v3 + 24) == 6 && *(_BYTE *)(v3 + 32) )
      {
        if ( v6[1] != v3 || (v7 = *(__int64 ***)(v3 + 8), *v7 != (__int64 *)v3) )
          __fastfail(3u);
        *v7 = v6;
        v6[1] = (__int64)v7;
        v8 = *(__int64 **)(a1 + 8);
        if ( *v8 != a1 )
          __fastfail(3u);
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v8;
        *v8 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v6;
    }
    while ( v6 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
