/*
 * XREFs of SepRmGlobalSaclFind @ 0x140730E4C
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14025EDE8 (SepExamineGlobalSaclEx.c)
 *     NtSetSecurityObject @ 0x140488560 (NtSetSecurityObject.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A7FC0 (SepRmGlobalSaclSetWrkr.c)
 *     SeAuditingFileOrGlobalEvents @ 0x14072BF80 (SeAuditingFileOrGlobalEvents.c)
 *     SeExamineGlobalSacl @ 0x140730C80 (SeExamineGlobalSacl.c)
 *     SeMaximumAuditMaskFromGlobalSacl @ 0x140730D94 (SeMaximumAuditMaskFromGlobalSacl.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     RtlCompareUnicodeString @ 0x140523C80 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall SepRmGlobalSaclFind(__int64 **a1, __int64 **a2, const UNICODE_STRING *a3, char a4)
{
  char v4; // bp
  unsigned int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rcx

  v4 = 0;
  v8 = -1073741772;
  if ( SepRmGlobalSaclHead )
  {
    if ( a4 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v4 = 1;
      ExAcquireResourceSharedLite(&SepRmGlobalSaclLock, 1u);
    }
    v10 = SepRmGlobalSaclHead;
    *a1 = (__int64 *)SepRmGlobalSaclHead;
    if ( a2 )
      *a2 = 0LL;
    if ( v10 )
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
      v8 = 0;
    }
    else
    {
LABEL_11:
      if ( a2 )
        *a2 = 0LL;
    }
    if ( v4 )
    {
      ExReleaseResourceLite(&SepRmGlobalSaclLock);
      KeLeaveCriticalRegion();
    }
  }
  return v8;
}
