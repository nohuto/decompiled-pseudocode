/*
 * XREFs of MiShowBadMapper @ 0x140251FB0
 * Callers:
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140137EEC (MiInsertPhysicalPteMapping.c)
 *     MiMapMdlCommon @ 0x14013B6DC (MiMapMdlCommon.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlCaptureStackBackTrace @ 0x140130B00 (RtlCaptureStackBackTrace.c)
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MmLockLoadedModuleListExclusive @ 0x14016113C (MmLockLoadedModuleListExclusive.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

void __fastcall MiShowBadMapper(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  unsigned int v4; // edi
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  unsigned __int8 v7[4]; // [rsp+30h] [rbp-68h] BYREF
  ULONG BackTraceHash[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID BackTrace[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = byte_1403CBEDA;
  if ( !byte_1403CBEDA )
  {
    if ( (a2 & 1) != 0 && KdPitchDebugger == byte_1403CBEDA && (_BYTE)KdDebuggerNotPresent == byte_1403CBEDA )
LABEL_14:
      KeBugCheckEx(0x1Au, 0x1233uLL, BugCheckParameter2, 0LL, 0LL);
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(1u, 8u, BackTrace, BackTraceHash);
    MmLockLoadedModuleListExclusive(v7);
    v4 = 0;
    v5 = (unsigned __int64 *)BackTrace;
    while ( *v5 > 0x7FFFFFFEFFFFLL )
    {
      v6 = MiLookupDataTableEntry(*v5, 0LL);
      if ( v6 && (*(_DWORD *)(v6 + 104) & 0x2000000) != 0 )
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
