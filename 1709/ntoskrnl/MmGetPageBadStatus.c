/*
 * XREFs of MmGetPageBadStatus @ 0x140214C34
 * Callers:
 *     WheapPfaMemoryCheck @ 0x140763E1C (WheapPfaMemoryCheck.c)
 * Callees:
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 */

__int64 __fastcall MmGetPageBadStatus(_QWORD *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rbx
  unsigned __int8 v5; // al

  v2 = 0;
  if ( !MiIsPfnInline(*a1 >> 12) )
    return 3221225711LL;
  v4 = 48 * v1 - 0x58000000000LL;
  v5 = MiLockPageInline(v4);
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
  {
    if ( (*(_QWORD *)(v4 + 8) | 0x8000000000000000uLL) != 0xFFFFFFFFFFFFFFFCuLL
      || (v2 = -1073740023, (*(_BYTE *)(v4 + 34) & 7) != 5) )
    {
      v2 = 259;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  return v2;
}
