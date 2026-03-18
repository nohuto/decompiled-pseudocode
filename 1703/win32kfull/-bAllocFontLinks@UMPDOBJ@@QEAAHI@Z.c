/*
 * XREFs of ?bAllocFontLinks@UMPDOBJ@@QEAAHI@Z @ 0x1C028BB6C
 * Callers:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009B524 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDOBJ::bAllocFontLinks(UMPDOBJ *this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rcx
  void *v6; // rcx

  v2 = 0;
  v3 = a2;
  if ( a2 > *((_DWORD *)this + 104) )
  {
    v5 = *((_QWORD *)this + 53);
    if ( v5 )
    {
      Win32FreePool(v5);
      *((_DWORD *)this + 104) = 0;
    }
    *((_QWORD *)this + 53) = PALLOCMEM2((unsigned int)(4 * v3), 1886221639LL, 0);
  }
  v6 = (void *)*((_QWORD *)this + 53);
  if ( v6 )
  {
    *((_DWORD *)this + 104) = v3;
    memset(v6, 0, 4 * v3);
  }
  LOBYTE(v2) = *((_QWORD *)this + 53) != 0LL;
  return v2;
}
