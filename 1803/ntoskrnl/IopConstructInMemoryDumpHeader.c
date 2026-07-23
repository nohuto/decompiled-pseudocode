/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1402349A4
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14016F648 (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x140233E08 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x140232D74 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_1403CDDB8 = 0;
    if ( dword_1403CDD84
      && (result = qword_1403CDDA0 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&InMemData[2 * (((_BYTE)qword_1403CDDA0 - 1) & 1) + 2]) != 0 )
    {
      IoFillDumpHeader((_NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_1403CDDA8;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_1403CDDA0) = qword_1403CDDA0 + 1;
    }
    else
    {
      dword_1403CDDB8 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
