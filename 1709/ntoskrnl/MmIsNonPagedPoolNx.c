/*
 * XREFs of MmIsNonPagedPoolNx @ 0x140145AF0
 * Callers:
 *     ExFreeLargePool @ 0x14002E0E0 (ExFreeLargePool.c)
 *     EtwTracePool @ 0x14017D2D8 (EtwTracePool.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

_BOOL8 __fastcall MmIsNonPagedPoolNx(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  __int64 *v2; // rcx
  unsigned __int64 v3; // r11
  __int64 PteShadow; // rax
  unsigned __int64 v5; // r10
  __int64 *v6; // r9

  v1 = a1;
  v2 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = 0xFFFFF6FB7DBED000uLL;
  PteShadow = *v2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( (unsigned __int64)v2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v2, *v2);
  if ( (PteShadow & 0x80u) == 0LL )
  {
    v6 = (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v6;
    if ( (unsigned __int64)v6 >= v3 && (unsigned __int64)v6 <= v5 )
      PteShadow = MiReadPteShadow(v6, *v6);
  }
  return PteShadow < 0;
}
