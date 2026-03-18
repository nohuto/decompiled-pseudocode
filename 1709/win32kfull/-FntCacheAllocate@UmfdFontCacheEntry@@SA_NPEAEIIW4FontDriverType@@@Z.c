/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C01426D4
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0036F60 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C0040114 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     EngFntCacheAlloc @ 0x1C0142780 (EngFntCacheAlloc.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     EngFntCacheFault @ 0x1C02686B0 (EngFntCacheFault.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(char *a1, unsigned int a2, ULONG a3, int a4)
{
  size_t v6; // rbx
  _QWORD *v8; // rax

  v6 = a2;
  Win32ProbeForRead(a1, a2, 1);
  if ( (unsigned int)v6 >= 0xFFFFFFF0 )
    return 0;
  v8 = EngFntCacheAlloc(a3, (int)v6 + 16);
  if ( !v8 )
    return 0;
  *v8 = 0LL;
  v8[1] = 0LL;
  *(_DWORD *)v8 = a4;
  memmove(v8 + 2, a1, v6);
  return 1;
}
