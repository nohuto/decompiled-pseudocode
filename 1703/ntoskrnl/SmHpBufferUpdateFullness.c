/*
 * XREFs of SmHpBufferUpdateFullness @ 0x140059C7C
 * Callers:
 *     SmHpBufferCleanup @ 0x14001FF18 (SmHpBufferCleanup.c)
 *     SmHpBufferAlloc @ 0x140030354 (SmHpBufferAlloc.c)
 *     SmHpChunkAlloc @ 0x140059BEC (SmHpChunkAlloc.c)
 *     SmHpChunkFree @ 0x14005C1EC (SmHpChunkFree.c)
 * Callees:
 *     SmHpUnprotectListNeighbors @ 0x1400384C4 (SmHpUnprotectListNeighbors.c)
 *     SmHpBufferProtect @ 0x140059A00 (SmHpBufferProtect.c)
 */

ULONG_PTR __fastcall SmHpBufferUpdateFullness(ULONG_PTR a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v3; // ax
  int v4; // esi
  __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR result; // rax
  unsigned __int8 *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rbp
  __int64 v12; // r9
  ULONG_PTR v13; // rcx

  v3 = *(_WORD *)(a2 + 10);
  v4 = -1;
  v6 = a1;
  if ( v3 )
  {
    LOBYTE(a1) = *(_BYTE *)(a1 + 552);
    v7 = v3 >> a1;
  }
  else
  {
    v7 = -1;
  }
  *(_WORD *)(a2 + 10) = a3 + v3;
  *(_DWORD *)(v6 + 560) += a3;
  result = *(unsigned __int16 *)(a2 + 10);
  if ( (_WORD)result )
  {
    LOBYTE(a1) = *(_BYTE *)(v6 + 552);
    v4 = (unsigned __int16)result >> a1;
  }
  if ( v7 != v4 )
  {
    result = SmHpBufferProtect(a1, (const unsigned __int8 **)a2, 1);
    v9 = *(unsigned __int8 **)a2;
    if ( v7 >= 0 )
    {
      SmHpUnprotectListNeighbors(v6, v6 + 16 * (v7 + 18LL), v9);
      v10 = *(_QWORD *)v9;
      result = *((_QWORD *)v9 + 1);
      if ( *(unsigned __int8 **)(*(_QWORD *)v9 + 8LL) != v9 || *(unsigned __int8 **)result != v9 )
        __fastfail(3u);
      *(_QWORD *)result = v10;
      *(_QWORD *)(v10 + 8) = result;
      if ( *(_QWORD *)(v6 + 16 * (v7 + 18LL)) == v6 + 16 * (v7 + 18LL) )
      {
        result = (unsigned int)(1 << v7);
        *(_DWORD *)(v6 + 284) ^= result;
      }
    }
    if ( v4 < 0 )
    {
      *((_QWORD *)v9 + 1) = v9;
      *(_QWORD *)v9 = v9;
    }
    else
    {
      v11 = (_QWORD *)(v6 + 16 * (v4 + 18LL));
      if ( (_QWORD *)*v11 == v11 )
      {
        *(_DWORD *)(v6 + 284) ^= 1 << v4;
      }
      else
      {
        v12 = *(unsigned int *)(v11[1] + 16LL);
        _BitScanReverse((unsigned int *)&v13, v12);
        SmHpBufferProtect(
          v13,
          (const unsigned __int8 **)(*(_QWORD *)(v6 + 8 * v13) + 16 * (v12 ^ (unsigned int)(1 << v13))),
          1);
      }
      result = v11[1];
      if ( *(_QWORD **)result != v11 )
        __fastfail(3u);
      *(_QWORD *)v9 = v11;
      *((_QWORD *)v9 + 1) = result;
      *(_QWORD *)result = v9;
      v11[1] = v9;
    }
  }
  return result;
}
