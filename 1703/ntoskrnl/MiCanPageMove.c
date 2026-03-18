/*
 * XREFs of MiCanPageMove @ 0x14007507C
 * Callers:
 *     MiObtainTransitionPage @ 0x140074E48 (MiObtainTransitionPage.c)
 *     MiReferenceInPageFile @ 0x140097390 (MiReferenceInPageFile.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiReplaceLockedPage @ 0x14021670C (MiReplaceLockedPage.c)
 *     MiSwapNumaStandbyPage @ 0x14021FD48 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiCanPageMove(__int64 a1)
{
  unsigned int v1; // r9d
  int IsPfnFileOnly; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *PrototypePteDirect; // rax
  __int64 v8; // rdx

  v1 = 1;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 || (*(_DWORD *)(a1 + 16) & 0x400LL) == 0 )
    return v1;
  IsPfnFileOnly = MiIsPfnFileOnly(a1);
  if ( IsPfnFileOnly == (_DWORD)v6 )
    return 0LL;
  PrototypePteDirect = (_QWORD *)MiGetPrototypePteDirect(*(_QWORD *)(v5 + 16), v4, v5, v6);
  v8 = *PrototypePteDirect;
  if ( PrototypePteDirect == (_QWORD *)(*PrototypePteDirect + 128LL) || (*(_DWORD *)(v8 + 56) & 0x20) == 0 )
    return v1;
  return v1 & ~(*(_DWORD *)(v8 + 92) >> 20);
}
