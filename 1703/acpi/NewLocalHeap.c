/*
 * XREFs of NewLocalHeap @ 0x1C0025B14
 * Callers:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall NewLocalHeap(PSLIST_ENTRY *a1)
{
  unsigned int v2; // esi
  PSLIST_ENTRY v3; // rdi
  __int64 v4; // rbx

  ++dword_1C00779D4;
  v2 = 0;
  v3 = ExpInterlockedPopEntrySList(&AMLIContextLookAsideList);
  if ( !v3 )
  {
    ++dword_1C00779D8;
    v3 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1C00779F0)(
                         (unsigned int)dword_1C00779E4,
                         (unsigned int)dword_1C00779EC,
                         (unsigned int)dword_1C00779E8);
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
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(111, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
