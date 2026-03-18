/*
 * XREFs of MiCanGrantExecute @ 0x140261800
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r10d
  char v5; // cl
  unsigned __int64 Address; // rax
  int v8; // eax
  int v9; // ecx

  v2 = *(_QWORD *)(a1 + 1064);
  if ( v2
    && *(_WORD *)(v2 + 8) == 332
    && ((v4 = 1, (KeFeatureBits & 0x40000000) != 0)
     || (v5 = *(_BYTE *)(a1 + 447), (v5 & 2) != 0)
     || (KeFeatureBits & 0x80000000) == 0 && (v5 & 1) == 0)
    && ((a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1740) & 1) == 0
     || (Address = MiLocateAddress(a2)) != 0
     && (v8 = *(_DWORD *)(Address + 48), v9 = v8 & 7, v9 != 3)
     && (v9 != 2 || (v8 & 0xF8) != 8)) )
  {
    return v4;
  }
  else
  {
    return 0LL;
  }
}
