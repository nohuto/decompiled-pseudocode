/*
 * XREFs of PfSnNameQueryWorker @ 0x140022230
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PfSnVolumeKeyQuery @ 0x14043E4E4 (PfSnVolumeKeyQuery.c)
 */

void __fastcall PfSnNameQueryWorker(struct _EX_RUNDOWN_REF *a1)
{
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  unsigned __int64 *Count; // rsi
  KIRQL v5; // bp
  void *v6; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (volatile LONG *)&a1[72];
  while ( 1 )
  {
    v3 = ExAcquireSpinLockExclusive(v2);
    Count = (unsigned __int64 *)a1[67].Count;
    v5 = v3;
    if ( !Count )
      break;
    a1[67].Count = *Count;
    *Count = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    __writecr8(v5);
    v6 = (void *)Count[1];
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_14036DF78 + 16))(a1[44].Count, v6, &v7) >= 0 )
      PfSnVolumeKeyQuery(a1, v7, v6);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v5);
  ExReleaseRundownProtection(a1 + 45);
}
