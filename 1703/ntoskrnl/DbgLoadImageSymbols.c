/*
 * XREFs of DbgLoadImageSymbols @ 0x1400700F0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14007009C (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     DebugService2 @ 0x140189440 (DebugService2.c)
 */

void __stdcall DbgLoadImageSymbols(PSTRING Name, PVOID Base, ULONG_PTR ProcessId)
{
  PIMAGE_NT_HEADERS v4; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int CheckSum; // [rsp+30h] [rbp-18h]
  unsigned int SizeOfImage; // [rsp+34h] [rbp-14h]

  v5[0] = Base;
  v5[1] = ProcessId;
  v4 = RtlImageNtHeader(Base);
  if ( v4 )
  {
    CheckSum = v4->OptionalHeader.CheckSum;
    SizeOfImage = v4->OptionalHeader.SizeOfImage;
  }
  else
  {
    SizeOfImage = 0;
    CheckSum = 0;
  }
  DebugService2(Name, v5, 3LL);
}
