/*
 * XREFs of NewLocalHeap @ 0x1C000D00C
 * Callers:
 *     HeapAlloc @ 0x1C000B3C0 (HeapAlloc.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall NewLocalHeap(PSLIST_ENTRY *a1)
{
  unsigned int v2; // esi
  PSLIST_ENTRY v3; // rdi
  __int64 v4; // rbx

  ++dword_1C0079C54;
  v2 = 0;
  v3 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v3 )
  {
    ++dword_1C0079C58;
    v3 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C0079C70)(
                         (unsigned int)dword_1C0079C64,
                         (unsigned int)dword_1C0079C6C,
                         (unsigned int)dword_1C0079C68);
  }
  *a1 = v3;
  if ( v3 )
  {
    v4 = (unsigned int)gdwCtxtBlkSize;
    memset(v3, 0, (unsigned int)gdwCtxtBlkSize);
    LODWORD(v3->Next) = 1346454856;
    *((_QWORD *)&v3->Next + 1) = (char *)v3 + v4;
    v3[2].Next = (PSLIST_ENTRY)((char *)v3 + 56);
    v3[3].Next = (PSLIST_ENTRY)((char *)v3 + 40);
    *((_QWORD *)&v3[2].Next + 1) = (char *)v3 + 40;
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(111, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
