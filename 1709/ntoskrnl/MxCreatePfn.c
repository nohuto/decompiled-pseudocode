/*
 * XREFs of MxCreatePfn @ 0x14082C120
 * Callers:
 *     MxCreatePfns @ 0x14082BE2C (MxCreatePfns.c)
 * Callees:
 *     MiPageToChannel @ 0x1400C7124 (MiPageToChannel.c)
 *     MiPageToNode @ 0x1400C7140 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MxCreatePfn(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // r10
  __int64 result; // rax

  v5 = 48 * a1 - 0x58000000000LL;
  if ( a4 == 1 )
  {
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_QWORD *)(v5 + 40) = 0LL;
  }
  v6 = a3 ^ *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 40) ^= v6 & 0xFFFFFFFFFLL;
  v7 = *(_QWORD *)(v5 + 24) ^ (*(_QWORD *)(v5 + 24) ^ (*(_QWORD *)(v5 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_WORD *)(v5 + 32) = 1;
  LOBYTE(v6) = *(_BYTE *)(v5 + 34) & 0xFE;
  *(_QWORD *)(v5 + 24) = v7;
  *(_BYTE *)(v5 + 34) = v6 | 6;
  *(_BYTE *)(v5 + 34) = *(_BYTE *)(v5 + 34) & 0x3F | 0x40;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(4);
  *(_BYTE *)(v5 + 34) |= 0x10u;
  *(_QWORD *)(v5 + 40) = ((unsigned __int64)(unsigned int)MiPageToNode(a1, 0LL) << 58) | *(_QWORD *)(v5 + 40) & 0x3FFFFFFFFFFFFFFLL;
  v8 = *(_QWORD *)(v5 + 40) & 0xFFFFFFCFFFFFFFFFuLL | ((MiPageToChannel(a1) & 3) << 36);
  result = 0x20000000000000LL;
  *(_QWORD *)(v5 + 40) = v8 | 0x20000000000000LL;
  return result;
}
