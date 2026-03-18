/*
 * XREFs of ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C01B4890
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C00A047C (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C01B4128 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 */

__int64 __fastcall BLTENTRY::IndirectBlt(LARGE_INTEGER *this)
{
  unsigned int v2; // ebx
  BLTQUEUE *QuadPart; // rcx
  union _LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  this[68] = PerformanceCounter;
  if ( (this[8].LowPart & 8) == 0 )
  {
    QuadPart = (BLTQUEUE *)this[3].QuadPart;
    if ( !*((_DWORD *)QuadPart + 656) )
      v2 = BLTQUEUE::CompletePresentIndirectInternal(QuadPart, (struct BLTENTRY *)this, &PerformanceCounter);
  }
  this[69] = KeQueryPerformanceCounter(0LL);
  return v2;
}
