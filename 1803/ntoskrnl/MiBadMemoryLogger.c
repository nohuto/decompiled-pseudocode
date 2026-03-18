/*
 * XREFs of MiBadMemoryLogger @ 0x140753CB0
 * Callers:
 *     <none>
 * Callees:
 *     IoWriteErrorLogEntry @ 0x140163CC0 (IoWriteErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1402365A8 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall MiBadMemoryLogger(__int64 a1)
{
  _WORD *GenericErrorLogEntry; // rax

  GenericErrorLogEntry = IoAllocateGenericErrorLogEntry(48);
  if ( GenericErrorLogEntry )
  {
    *((_DWORD *)GenericErrorLogEntry + 3) = -1073740023;
    *((_DWORD *)GenericErrorLogEntry + 4) = *(_DWORD *)a1;
    *((_QWORD *)GenericErrorLogEntry + 4) = *(_QWORD *)(a1 + 16);
    *((_DWORD *)GenericErrorLogEntry + 10) = *(_DWORD *)(a1 + 8);
    GenericErrorLogEntry[1] = 4;
    IoWriteErrorLogEntry(GenericErrorLogEntry);
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 4));
}
