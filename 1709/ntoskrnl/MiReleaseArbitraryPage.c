/*
 * XREFs of MiReleaseArbitraryPage @ 0x14000A0A0
 * Callers:
 *     MiCombinePte @ 0x14009F2D0 (MiCombinePte.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCombineAllPhysicalMemory @ 0x1406ECD38 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // al
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  unsigned __int8 v6; // r10
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 48);
  v3 = MiLockPageInline(v1);
  v4 = *(_QWORD **)(a1 + 56);
  v5 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  v6 = v3;
  *v4 = 0LL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v4, 0LL);
  *(_QWORD *)(a1 + 56) = v5;
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v6;
  __writecr8(v6);
  return result;
}
