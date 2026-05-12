/*
 * XREFs of RaidLogAllocationFailure @ 0x1C00398B4
 * Callers:
 *     RaidAllocatePool @ 0x1C0007658 (RaidAllocatePool.c)
 * Callees:
 *     memset @ 0x1C0018140 (memset.c)
 */

void __fastcall RaidLogAllocationFailure(void *a1, int a2, __int64 a3, int a4)
{
  _DWORD *ErrorLogEntry; // rax
  _DWORD *v8; // rbx

  ErrorLogEntry = IoAllocateErrorLogEntry(a1, 0x48u);
  v8 = ErrorLogEntry;
  if ( ErrorLogEntry )
  {
    memset(ErrorLogEntry, 0, 0x48uLL);
    v8[6] = 0;
    *v8 = 0x200000;
    v8[3] = -2147221448;
    v8[4] = 10;
    v8[5] = -1073741801;
    v8[12] = a2;
    *((_QWORD *)v8 + 7) = a3;
    v8[16] = a4;
    IoWriteErrorLogEntry(v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
  }
}
