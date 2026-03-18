/*
 * XREFs of MiCanGrantExecute @ 0x14021BD68
 * Callers:
 *     MiValidFault @ 0x1400FCBC0 (MiValidFault.c)
 *     MiLargePageFault @ 0x14021C114 (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  __int16 v4; // ax
  unsigned int v5; // r10d
  char v6; // cl
  unsigned __int64 Address; // rax
  int v9; // eax
  int v10; // ecx

  v2 = *(_QWORD *)(a1 + 1064);
  if ( v2
    && ((v4 = *(_WORD *)(v2 + 8), v4 == 332) || v4 == 452)
    && ((v5 = 1, (KeFeatureBits & 0x40000000) != 0)
     || (v6 = *(_BYTE *)(a1 + 447), (v6 & 2) != 0)
     || (KeFeatureBits & 0x80000000) == 0 && (v6 & 1) == 0)
    && ((a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1740) & 1) == 0
     || (Address = MiLocateAddress(a2)) != 0
     && (v9 = *(_DWORD *)(Address + 48), v10 = v9 & 7, v10 != 3)
     && (v10 != 2 || (v9 & 0xF8) != 8)) )
  {
    return v5;
  }
  else
  {
    return 0LL;
  }
}
