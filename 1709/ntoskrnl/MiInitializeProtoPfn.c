/*
 * XREFs of MiInitializeProtoPfn @ 0x14022E010
 * Callers:
 *     MiFillPerSessionProtos @ 0x1406EB4D0 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiInitializePfn @ 0x140027CC0 (MiInitializePfn.c)
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x140030E90 (MiLockProtoPoolPage.c)
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, __int64 *a2, unsigned int a3, int a4)
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
    MmAccessFault(2uLL, (signed __int64)a2, 0LL, 0LL);
  }
  MiLockPageAtDpcInline(v7);
  MiInitializePfn(v7, a2, a3, 279);
  *a2 = MiMakeValidPte(0LL, a1, a3 | 0x80000000) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( (unsigned __int64)a2 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a2 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow();
  ++*(_WORD *)(v7 + 32);
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return MiUnlockProtoPoolPage(v8, v10);
}
