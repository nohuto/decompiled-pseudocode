/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x1400077E4
 * Callers:
 *     IoNotifyQuotaState @ 0x1400072C0 (IoNotifyQuotaState.c)
 *     IoGetIoRateControl @ 0x140007660 (IoGetIoRateControl.c)
 * Callees:
 *     IopFindDiskIoAttribution @ 0x1400078F0 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x1400079D0 (IoDiskIoAttributionDereference.c)
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(
        __int64 a1,
        struct _EX_RUNDOWN_REF **a2,
        unsigned __int64 *a3)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  unsigned __int64 Count; // rax
  unsigned int v8; // edi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution();
  v6 = DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection_0(DiskIoAttribution + 21) )
    {
      Count = v6[20].Count;
      *a2 = v6;
      v6 = 0LL;
      *a3 = Count;
      v8 = 0;
    }
    else
    {
      v8 = -1073741431;
    }
    if ( v6 )
      IoDiskIoAttributionDereference(v6);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v8;
}
