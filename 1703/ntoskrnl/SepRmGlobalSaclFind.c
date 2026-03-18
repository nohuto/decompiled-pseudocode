/*
 * XREFs of SepRmGlobalSaclFind @ 0x1406F93F8
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x1402476BC (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x14046AB40 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405C5890 (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x1406F44D0 (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x1406F9224 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x1406F9340 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlCompareUnicodeString @ 0x140427380 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  __int64 v4; // rax
  char v5; // r14
  unsigned int v9; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v11; // rbp
  __int64 v12; // rcx

  v4 = SepRmGlobalSaclHead;
  v5 = 0;
  v9 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v5 = 1;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
      v4 = SepRmGlobalSaclHead;
    }
    *a1 = (__int64 *)v4;
    if ( a2 )
      *a2 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v11 = *a1;
        if ( !RtlCompareUnicodeString(a3, (PCUNICODE_STRING)(*a1 + 1), 0) )
          break;
        if ( a2 )
          *a2 = v11;
        v12 = *v11;
        *a1 = (__int64 *)*v11;
        if ( !v12 )
          goto LABEL_11;
      }
      v9 = 0;
    }
    else
    {
LABEL_11:
      if ( a2 )
        *a2 = 0LL;
    }
    if ( v5 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v9;
}
