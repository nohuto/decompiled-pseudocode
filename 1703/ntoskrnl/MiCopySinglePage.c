/*
 * XREFs of MiCopySinglePage @ 0x140210384
 * Callers:
 *     MmCopyMemory @ 0x140210B00 (MmCopyMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140103140 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1401038C0 (MiMapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiIsPageSecured @ 0x14021057C (MiIsPageSecured.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // si
  int v14; // ebp
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdi
  const void *v17; // rdi

  if ( !MiIsPfnInline(a2) )
    return 3221225793LL;
  v12 = 48 * v10 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
    v13 = MiLockPageInline(48 * v10 - 0x58000000000LL);
  else
    v13 = 17;
  if ( !MiIsPfnInline(a2) )
  {
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 3221225793LL;
  }
  if ( *(_BYTE *)(v12 + 35) >= 0x80u || (unsigned int)MiIsPageSecured(v12) )
  {
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 3221227273LL;
  }
  else
  {
    v14 = *(unsigned __int8 *)(v12 + 34) >> 6;
    if ( v14 == 3 )
      MiChangePageAttribute(v12, 1u, 1u);
    if ( a5 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v12);
      *(_QWORD *)a5 = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u);
      if ( MiPteInShadowRange(a5) )
        MiWritePteShadow();
      v16 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v16 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736);
    }
    v17 = (const void *)(a3 + v16);
    memmove(a1, v17, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = 0LL;
      if ( MiPteInShadowRange(a5) )
        MiWritePteShadow();
    }
    else
    {
      MiUnmapPageInHyperSpaceWorker((__int64)v17, 0x11u);
    }
    if ( v14 == 3 )
      MiChangePageAttribute(v12, 3u, 3u);
    if ( v13 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v13);
    }
    return 0LL;
  }
}
