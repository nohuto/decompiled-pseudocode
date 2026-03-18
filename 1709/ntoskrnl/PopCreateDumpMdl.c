/*
 * XREFs of PopCreateDumpMdl @ 0x140432A08
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MmMapMemoryDumpMdlEx @ 0x14021B38C (MmMapMemoryDumpMdlEx.c)
 *     PopInternalAddToDumpFile @ 0x140239DE4 (PopInternalAddToDumpFile.c)
 *     _PopInternalError @ 0x14023A308 (_PopInternalError.c)
 */

void __fastcall PopCreateDumpMdl(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 Number; // r10
  unsigned __int64 v6; // r9
  _QWORD *i; // rax

  Number = KeGetCurrentPrcb()->Number;
  if ( a3 >= a4 )
    PopInternalError(0xA14C6uLL);
  v6 = a4 - a3;
  if ( v6 >= *(unsigned int *)(a1 + 292) )
    v6 = *(unsigned int *)(a1 + 292);
  *(_QWORD *)a2 = 0LL;
  *(_WORD *)(a2 + 10) = 0;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 44) = 0;
  *(_DWORD *)(a2 + 40) = (_DWORD)v6 << 12;
  *(_WORD *)(a2 + 8) = 8 * ((((v6 << 12) + 4095) >> 12) + 6);
  for ( i = (_QWORD *)(a2 + 48); v6; --v6 )
    *i++ = a3++;
  MmMapMemoryDumpMdlEx(*(_QWORD *)((Number << 7) + *(_QWORD *)(a1 + 272) + 8), a1, a2, 0);
  if ( (*(_DWORD *)(a2 + 40) & 0xFFF) != 0 )
  {
    PopInternalAddToDumpFile(a2, 0x30u, 0LL);
    KeBugCheckEx(0xA0u, 0x106uLL, 0xAuLL, a2, 0LL);
  }
}
