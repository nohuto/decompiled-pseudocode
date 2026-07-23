/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1401F7684
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140151610 (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1401F6AF8 (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x1401F5874 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140389F88 = 0;
    if ( dword_140389F54
      && (result = qword_140389F70 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&InMemData[2 * (((_BYTE)qword_140389F70 - 1) & 1) + 2]) != 0 )
    {
      IoFillDumpHeader((_NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140389F78;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140389F70) = qword_140389F70 + 1;
    }
    else
    {
      dword_140389F88 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
