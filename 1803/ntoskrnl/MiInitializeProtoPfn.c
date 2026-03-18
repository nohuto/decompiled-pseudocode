/*
 * XREFs of MiInitializeProtoPfn @ 0x1402681CC
 * Callers:
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiDecrementShareCount @ 0x140054240 (MiDecrementShareCount.c)
 *     MiInitializePfn @ 0x140056084 (MiInitializePfn.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 */

__int64 __fastcall MiInitializeProtoPfn(__int64 a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  __int64 v7; // rbx
  ULONG_PTR v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+58h] [rbp+20h] BYREF

  v17 = a4;
  v7 = 48 * a1 - 0x58000000000LL;
  while ( 1 )
  {
    v8 = MiLockProtoPoolPage((unsigned __int64)a2, (unsigned __int8 *)&v17);
    if ( v8 )
      break;
    MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
  }
  MiLockPageAtDpcInline(v7);
  MiInitializePfn(v7, (unsigned __int64)a2, a3, 279);
  *a2 = MiMakeValidPte(0LL, a1, a3 | 0x80000000, v9) & 0xFFFFFFFFFFFFFEFFuLL;
  if ( MiPteInShadowRange((unsigned __int64)a2) )
    MiWritePteShadow(v11, v10, v12);
  ++*(_WORD *)(v7 + 32);
  MiDecrementShareCount(v7);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v13) = v17;
  return MiUnlockProtoPoolPage(v8, v13, v14, v15);
}
