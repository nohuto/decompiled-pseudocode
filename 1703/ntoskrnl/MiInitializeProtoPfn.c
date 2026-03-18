/*
 * XREFs of MiInitializeProtoPfn @ 0x14022136C
 * Callers:
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiLockProtoPoolPage @ 0x1400A1530 (MiLockProtoPoolPage.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x1401099F8 (MiInitializePfn.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rbx
  __int64 v8; // rsi
  int v10; // [rsp+58h] [rbp+20h] BYREF

  v10 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v8 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v10);
    if ( v8 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  MiLockPageAtDpcInline(v7);
  MiInitializePfn(v7, (__int64)a2, a3, 279);
  *a2 = MiMakeValidPte(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow();
  ++*(_WORD *)(v7 + 32);
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v8, v10);
}
