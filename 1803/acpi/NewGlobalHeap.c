/*
 * XREFs of NewGlobalHeap @ 0x1C004995C
 * Callers:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     AMLIInitialize @ 0x1C009B7E4 (AMLIInitialize.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall NewGlobalHeap(_QWORD *a1)
{
  unsigned int v2; // esi
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)gdwGlobalHeapBlkSize, 0x486C6D41u);
  *a1 = PoolWithTag;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = (unsigned int)gdwGlobalHeapBlkSize;
    memset(PoolWithTag, 0, (unsigned int)gdwGlobalHeapBlkSize);
    *(_DWORD *)v4 = 1346454856;
    v4[1] = (char *)v4 + v5;
    v4[4] = v4 + 7;
    v4[6] = v4 + 5;
    v4[5] = v4 + 5;
  }
  else
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(0LL, -1073741670);
    PrintDebugMessage(110, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1073741670;
  }
  return v2;
}
