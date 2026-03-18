/*
 * XREFs of MiShowBadMapper @ 0x14020CCEC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     MiInsertPhysicalPteMapping @ 0x140123724 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemory @ 0x1401243E0 (MiMapContiguousMemory.c)
 *     MiMapMdlCommon @ 0x14020F120 (MiMapMdlCommon.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14006E01C (MmLockLoadedModuleListExclusive.c)
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  unsigned int v4; // edi
  unsigned __int64 *v5; // rsi
  PVOID *v6; // rax
  unsigned __int8 v7[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = byte_14036CA3E;
  if ( !byte_14036CA3E )
  {
    if ( (a2 & 1) != 0 && KdPitchDebugger == byte_14036CA3E && (_BYTE)KdDebuggerNotPresent == byte_14036CA3E )
LABEL_14:
      KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v7);
    v4 = 0;
    v5 = (unsigned __int64 *)BackTrace;
    while ( *v5 > 0x7FFFFFFEFFFFLL )
    {
      v6 = MiLookupDataTableEntry(*v5, 1);
      if ( v6 && ((_DWORD)v6[13] & 0x2000000) != 0 )
      {
        v2 = 1;
        break;
      }
      ++v4;
      ++v5;
      if ( v4 >= 8 )
        break;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PsLoadedModuleSpinLock);
    __writecr8(v7[0]);
  }
  if ( v2 == 1 )
    goto LABEL_14;
}
