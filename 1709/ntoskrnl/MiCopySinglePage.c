/*
 * XREFs of MiCopySinglePage @ 0x1402179B4
 * Callers:
 *     MmCopyMemory @ 0x140218220 (MmCopyMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1400ED258 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1400ED9A0 (MiMapPageInHyperSpaceWorker.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     MiIsPageSecured @ 0x140217BEC (MiIsPageSecured.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v9; // rdx
  __int64 v11; // rbx
  unsigned __int8 v12; // si
  int v13; // r15d
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v15; // rbp
  const void *v16; // rbp
  __int64 v17; // rdx

  if ( !MiIsPfnInline(a2) )
    return 3221225793LL;
  v11 = 48 * v9 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
    v12 = MiLockPageInline(48 * v9 - 0x58000000000LL);
  else
    v12 = 17;
  if ( !MiIsPfnInline(a2) )
  {
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v11 + 35) < 0 || (unsigned int)MiIsPageSecured(v11) )
  {
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 3221227273LL;
  }
  else
  {
    v13 = *(unsigned __int8 *)(v11 + 34) >> 6;
    if ( v13 == 3 )
      MiChangePageAttribute(v11, 1u, 1);
    if ( a5 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
      *(_QWORD *)a5 = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
      if ( a5 >= 0xFFFFF6FB7DBED000uLL && a5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
      v15 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v15 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    }
    v16 = (const void *)(a3 + v15);
    memmove(a1, v16, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      if ( a5 >= 0xFFFFF6FB7DBED000uLL && a5 <= 0xFFFFF6FB7DBED7F8uLL )
        MiWritePteShadow();
    }
    else
    {
      LOBYTE(v17) = 17;
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v16, v17, 0x80000000LL);
    }
    if ( v13 == 3 )
      MiChangePageAttribute(v11, 3u, 3);
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 0LL;
  }
}
