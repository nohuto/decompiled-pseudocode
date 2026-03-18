/*
 * XREFs of SmHpBufferUpdateFullness @ 0x140271F94
 * Callers:
 *     SmHpBufferAlloc @ 0x140271CC0 (SmHpBufferAlloc.c)
 *     SmHpBufferCleanup @ 0x140271E10 (SmHpBufferCleanup.c)
 *     SmHpChunkAlloc @ 0x1402720E4 (SmHpChunkAlloc.c)
 *     SmHpChunkFree @ 0x140272174 (SmHpChunkFree.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x140271E6C (SmHpBufferProtectEx.c)
 *     SmHpUnprotectListNeighbors @ 0x14027223C (SmHpUnprotectListNeighbors.c)
 */

__int64 __fastcall SmHpBufferUpdateFullness(ULONG_PTR a1, __int64 a2, __int16 a3)
{
  unsigned __int16 v3; // ax
  int v4; // ebp
  ULONG_PTR v6; // rdi
  int v7; // esi
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rsi

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
    result = SmHpBufferProtectEx(a1, a2, 1, 0);
    v9 = *(_QWORD **)a2;
    if ( v7 >= 0 )
    {
      SmHpUnprotectListNeighbors(v6, v6 + 16 * (v7 + 18LL), v9);
      v10 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (result = v9[1], *(_QWORD **)result != v9) )
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
      v9[1] = v9;
      *v9 = v9;
    }
    else
    {
      v11 = (_QWORD *)(v6 + 16 * (v4 + 18LL));
      if ( (_QWORD *)*v11 == v11 )
        *(_DWORD *)(v6 + 284) ^= 1 << v4;
      else
        SmHpUnprotectListNeighbors(v6, v6 + 16 * (v4 + 18LL), 0LL);
      result = v11[1];
      if ( *(_QWORD **)result != v11 )
        __fastfail(3u);
      *v9 = v11;
      v9[1] = result;
      *(_QWORD *)result = v9;
      v11[1] = v9;
    }
  }
  return result;
}
