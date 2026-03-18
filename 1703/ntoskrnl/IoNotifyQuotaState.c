/*
 * XREFs of IoNotifyQuotaState @ 0x140004710
 * Callers:
 *     <none>
 * Callees:
 *     PsIoRateControlOverQuotaNotify @ 0x1400047D0 (PsIoRateControlOverQuotaNotify.c)
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x14002589C (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x1400AE074 (IoDiskIoAttributionDereference.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400EFD50 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall IoNotifyQuotaState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v7; // edi
  PVOID v8; // rbx
  struct _EX_RUNDOWN_REF *v9; // rbx
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v12; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0LL;
  Object = 0LL;
  v7 = IopAcquireReferencesFromIoAttributionHandle(a1, &v12, &Object);
  if ( v7 >= 0 )
  {
    v8 = Object;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(Object, 1953261124LL) )
    {
      PsIoRateControlOverQuotaNotify(v8, a2, a3, a4);
      v7 = 0;
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    }
    else
    {
      v7 = -1073741431;
    }
  }
  v9 = v12;
  if ( v12 )
  {
    ExReleaseRundownProtection(v12 + 19);
    IoDiskIoAttributionDereference(v9);
  }
  return (unsigned int)v7;
}
