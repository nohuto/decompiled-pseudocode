/*
 * XREFs of EtwpCaptureString @ 0x140551AE8
 * Callers:
 *     EtwpFlushTrace @ 0x140451AD4 (EtwpFlushTrace.c)
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContext @ 0x140551674 (EtwpAcquireLoggerContext.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpSetSoftRestartInformation @ 0x140714364 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateUnicodeString @ 0x1404C1CA0 (RtlCreateUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpCaptureString(unsigned __int16 *a1, UNICODE_STRING *a2)
{
  unsigned int v4; // edi
  char PreviousMode; // bl
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  WCHAR *PoolWithTag; // rax
  WCHAR *v9; // rbx

  v4 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RtlInitUnicodeString(a2, 0LL);
  if ( PreviousMode && *a1 )
  {
    v6 = *((_QWORD *)a1 + 1);
    if ( (v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = v6 + *a1;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, *a1 + 2LL, 0x50777445u);
  v9 = PoolWithTag;
  if ( !PoolWithTag
    || (memmove(PoolWithTag, *((const void **)a1 + 1), *a1),
        v9[(unsigned __int64)*a1 >> 1] = 0,
        !RtlCreateUnicodeString(a2, v9)) )
  {
    v4 = -1073741801;
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return v4;
}
