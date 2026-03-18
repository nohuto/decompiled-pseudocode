/*
 * XREFs of MiShowBadMapper @ 0x140213CEC
 * Callers:
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1401184C0 (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x14014EA10 (MiMapMdlCommon.c)
 * Callees:
 *     MmLockLoadedModuleListExclusive @ 0x140015FE0 (MmLockLoadedModuleListExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     MiLookupDataTableEntry @ 0x1400DCDF4 (MiLookupDataTableEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
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

  v2 = byte_140388C36;
  if ( !byte_140388C36 )
  {
    if ( (a2 & 1) != 0 && KdPitchDebugger == byte_140388C36 && (_BYTE)KdDebuggerNotPresent == byte_140388C36 )
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
