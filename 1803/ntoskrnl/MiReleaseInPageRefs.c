/*
 * XREFs of MiReleaseInPageRefs @ 0x1400ACD80
 * Callers:
 *     MiInvalidateCollidedIos @ 0x1400ACB34 (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockAndDecrementShareCount @ 0x1400AD83C (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 */

char __fastcall MiReleaseInPageRefs(__int64 a1)
{
  unsigned __int8 v2; // dl
  __int64 *PrototypePteDirect; // rax
  __int64 v4; // r8
  char result; // al

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  v2 = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v2);
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
    return MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, v4, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= ~4uLL;
    *(_QWORD *)(a1 + 16) &= ~2uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v2;
    __writecr8(v2);
  }
  return result;
}
