/*
 * XREFs of ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C012CA04
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C012C778 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C012CAAC (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C012CB30 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpandScanline(STACKOBJ *this, unsigned int a2, int a3)
{
  unsigned int *v5; // rsi
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  _DWORD *v8; // rdi

  if ( a3 == 1 )
    v5 = (unsigned int *)*((_QWORD *)this + 3);
  else
    v5 = (unsigned int *)*((_QWORD *)this + 2);
  v6 = a2 + 160;
  if ( a2 + 160 < a2 )
    return 0LL;
  v7 = PALLOCMEM2(v6, 1684817479LL, 0);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  memmove(v7, v5, v5[2]);
  v8[2] = v6;
  Win32FreePool(v5);
  if ( a3 == 1 )
    *((_QWORD *)this + 3) = v8;
  else
    *((_QWORD *)this + 2) = v8;
  return 1LL;
}
