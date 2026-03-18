/*
 * XREFs of IopAcquireReferencesFromIoAttributionHandle @ 0x1400A42D4
 * Callers:
 *     IoNotifyQuotaState @ 0x1400020D0 (IoNotifyQuotaState.c)
 *     IoGetIoRateControl @ 0x1400A4150 (IoGetIoRateControl.c)
 * Callees:
 *     IopFindDiskIoAttribution @ 0x14008D0B0 (IopFindDiskIoAttribution.c)
 *     IoDiskIoAttributionDereference @ 0x14008E6C8 (IoDiskIoAttributionDereference.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 */

__int64 __fastcall IopAcquireReferencesFromIoAttributionHandle(__int64 a1, __int64 *a2, _QWORD *a3)
{
  struct _EX_RUNDOWN_REF *DiskIoAttribution; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edi

  DiskIoAttribution = (struct _EX_RUNDOWN_REF *)IopFindDiskIoAttribution(a1);
  v6 = (__int64)DiskIoAttribution;
  if ( DiskIoAttribution )
  {
    if ( ExAcquireRundownProtection(DiskIoAttribution + 21) )
    {
      v7 = *(_QWORD *)(v6 + 160);
      *a2 = v6;
      v6 = 0LL;
      *a3 = v7;
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
