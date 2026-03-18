/*
 * XREFs of PfSnNameQueryWorker @ 0x1400083B0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PfSnVolumeKeyQuery @ 0x1404470F0 (PfSnVolumeKeyQuery.c)
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
    if ( (*(int (__fastcall **)(unsigned __int64, void *, __int64 *))(qword_14038D3D8 + 16))(a1[44].Count, v6, &v7) >= 0 )
      PfSnVolumeKeyQuery(a1, v7, v6);
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  a1[71].Count = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v2);
  __writecr8(v5);
  ExReleaseRundownProtection_0(a1 + 45);
}
