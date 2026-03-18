/*
 * XREFs of PfSnNameQueryWorker @ 0x14008EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PfSnVolumeKeyQuery @ 0x140539080 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v2; // rsi
  KIRQL v3; // al
  unsigned __int64 *Count; // rdi
  unsigned __int64 v5; // rbp
  void *v6; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    Count = (unsigned __int64 *)a1[67].Count;
    if ( Count )
      a1[67].Count = *Count;
    v5 = v3;
    if ( !Count )
      break;
    *Count = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    __writecr8(v5);
    v6 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_1403CD7F8 + 16))(a1[44].Count, v6, &v7) >= 0 )
      PfSnVolumeKeyQuery(a1, v7, v6);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v5);
  ExReleaseRundownProtection(a1 + 45);
}
