/*
 * XREFs of RtlFindNextForwardRunClearCappedEx @ 0x1400D7BF0
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x1400D79E0 (MiScanNonPagedPoolVa.c)
 *     MiScanLeafNonPagedPool @ 0x1400D7D50 (MiScanLeafNonPagedPool.c)
 *     MiMirrorPerformBlackWrites @ 0x140156348 (MiMirrorPerformBlackWrites.c)
 *     MiMirrorPerformBrownWrites @ 0x14015649C (MiMirrorPerformBrownWrites.c)
 *     MiMirrorVerify @ 0x140157168 (MiMirrorVerify.c)
 *     MiCheckPoolForContiguousPages @ 0x140162B78 (MiCheckPoolForContiguousPages.c)
 *     IopAddPageToPageMap @ 0x140234738 (IopAddPageToPageMap.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402882D0 (RtlFindNextForwardRunClearEx.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearCappedEx(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 i; // r8
  const signed __int64 *v7; // r11
  _DWORD *v8; // r9
  _DWORD *v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r11
  unsigned __int64 j; // rax
  unsigned __int64 result; // rax
  _DWORD *v14; // rax

  v4 = *(_QWORD *)a1;
  i = a2;
  if ( *(_QWORD *)a1 > a2 )
  {
    v7 = *(const signed __int64 **)(a1 + 8);
    v8 = (_DWORD *)v7 + ((v4 - 1) >> 5);
    v9 = (_DWORD *)v7 + (a2 >> 5);
    if ( v9 != v8 && (*v9 | dword_1402F9540[a2 & 0x1F]) == -1 )
    {
      ++v9;
      for ( i = (a2 & 0xFFFFFFFFFFFFFFE0uLL) + 32; v9 < v8; i += 32LL )
      {
        if ( *v9 != -1 )
          break;
        ++v9;
      }
    }
    for ( ; i < v4; ++i )
    {
      if ( _bittest64(v7, i) != 1 )
        break;
    }
    v10 = 0LL;
    if ( v9 != v8 )
    {
      v11 = i & 0x1F;
      if ( (~dword_1402F9540[v11] & *v9) == 0 )
      {
        v10 = 32 - v11;
        if ( v11 == 33 )
        {
LABEL_13:
          *a4 = i;
          return v10;
        }
        v14 = v9 + 1;
        while ( v14 < v8 )
        {
          if ( *v14 )
            break;
          ++v14;
          v10 += 32LL;
          if ( v10 == -1LL )
            goto LABEL_13;
        }
      }
    }
    for ( j = v10 + i; j < *(_QWORD *)a1; ++v10 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v10 == -1LL )
        break;
      ++j;
    }
    goto LABEL_13;
  }
  result = 0LL;
  *a4 = a2;
  return result;
}
