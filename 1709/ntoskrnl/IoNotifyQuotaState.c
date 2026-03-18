/*
 * XREFs of IoNotifyQuotaState @ 0x1400072C0
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireReferencesFromIoAttributionHandle @ 0x1400077E4 (IopAcquireReferencesFromIoAttributionHandle.c)
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     PsIoRateControlOverQuotaNotify @ 0x140007E20 (PsIoRateControlOverQuotaNotify.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140083060 (ObReferenceObjectSafeWithTag.c)
 */

__int64 __fastcall IoNotifyQuotaState(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v8; // edi
  PVOID v9; // rbx
  struct _EX_RUNDOWN_REF *v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  struct _EX_RUNDOWN_REF *v13; // [rsp+38h] [rbp-10h] BYREF

  v13 = 0LL;
  Object = 0LL;
  v8 = IopAcquireReferencesFromIoAttributionHandle(a1, &v13, &Object);
  if ( v8 >= 0 )
  {
    v9 = Object;
    if ( (unsigned __int8)ObReferenceObjectSafeWithTag(Object, 1953261124LL) )
    {
      PsIoRateControlOverQuotaNotify((_DWORD)v9, a2, a3, a4, a5);
      v8 = 0;
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
    }
    else
    {
      v8 = -1073741431;
    }
  }
  v10 = v13;
  if ( v13 )
  {
    ExReleaseRundownProtection_0(v13 + 21);
    IoDiskIoAttributionDereference(v10);
  }
  return (unsigned int)v8;
}
