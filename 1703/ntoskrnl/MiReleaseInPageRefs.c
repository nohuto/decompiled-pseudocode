/*
 * XREFs of MiReleaseInPageRefs @ 0x1400387AC
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14003855C (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiLockAndDecrementShareCount @ 0x140102090 (MiLockAndDecrementShareCount.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 */

void __fastcall MiReleaseInPageRefs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 *PrototypePteDirect; // rax
  __int64 v6; // r8

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0LL);
  LOBYTE(v2) = MiLockPageInline(a1);
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v2);
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v2, v3, v4);
    MiDereferenceControlAreaPfnList(*PrototypePteDirect, (__int64)PrototypePteDirect, v6, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v2);
  }
}
