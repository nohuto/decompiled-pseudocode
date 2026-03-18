/*
 * XREFs of MiCopySinglePage @ 0x14015B52C
 * Callers:
 *     MmCopyMemory @ 0x14015B270 (MmCopyMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPageSecured @ 0x14015B694 (MiIsPageSecured.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall MiCopySinglePage(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, unsigned __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int8 v12; // si
  __int64 v13; // r9
  int v14; // ebp
  int ProtectionPfnCompatible; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  const void *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8

  if ( !MiIsPfnInline(a2) )
    return 3221225793LL;
  v11 = 48 * v10 - 0x58000000000LL;
  if ( (a6 & 1) != 0 )
    v12 = MiLockPageInline(48 * v10 - 0x58000000000LL);
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
    v14 = *(unsigned __int8 *)(v11 + 34) >> 6;
    if ( v14 == 3 )
      MiChangePageAttribute(v11, 1, 1u);
    if ( a5 )
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1, v11);
      *(_QWORD *)a5 = MiMakeValidPte(a5, a2, ProtectionPfnCompatible | 0x20000000u, v16);
      if ( MiPteInShadowRange(a5) )
        MiWritePteShadow(v18, v17, v19);
      v20 = (__int64)(a5 << 25) >> 16;
    }
    else
    {
      v20 = MiMapPageInHyperSpaceWorker(a2, 0LL, -1610612736, v13);
    }
    v21 = (const void *)(a3 + v20);
    memmove(a1, v21, a4);
    if ( a5 )
    {
      *(_QWORD *)a5 = ZeroPte;
      if ( MiPteInShadowRange(a5) )
        MiWritePteShadow(v23, v22, v24);
    }
    else
    {
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v21, 0x11u, 0x80000000);
    }
    if ( v14 == 3 )
      MiChangePageAttribute(v11, 3, 3u);
    if ( v12 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v12);
    }
    return 0LL;
  }
}
