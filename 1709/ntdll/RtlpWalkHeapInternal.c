/*
 * XREFs of RtlpWalkHeapInternal @ 0x180061978
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180012E80 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHpTagDestroyHeap @ 0x180061908 (RtlpHpTagDestroyHeap.c)
 *     RtlWalkHeap @ 0x1800EFC50 (RtlWalkHeap.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180100870 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpHpHeapWalk @ 0x1800619F0 (RtlpHpHeapWalk.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x18006206C (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpWalkHeap @ 0x1800F111C (RtlpWalkHeap.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char v3; // r14
  int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)RtlpWalkHeap(a1);
  v6 = 0;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
  {
    v11 = *a2;
    if ( *a2 )
    {
      if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
      {
        if ( (_WORD)v11 )
        {
          v13 = 0;
        }
        else
        {
          v12 = RtlCSparseBitmapBitmaskRead(a1, 2 * (v11 >> 20));
          if ( !v12 )
          {
LABEL_13:
            *a2 = v11;
            goto LABEL_3;
          }
          v13 = v12 - 1;
        }
        if ( v13 != 2 )
          v11 -= 16LL;
        goto LABEL_13;
      }
    }
  }
LABEL_3:
  LOBYTE(a3) = v3;
  v7 = RtlpHpHeapWalk(a1, a2, a3);
  v9 = v7;
  if ( (RtlpHpAppCompatFlags & 2) == 0 || v7 == -2147483622 || (*((_BYTE *)a2 + 18) & 1) == 0 )
    return v9;
  v14 = *a2;
  if ( (unsigned __int16)*a2 )
    goto LABEL_19;
  v15 = RtlCSparseBitmapBitmaskRead(v8, 2 * (v14 >> 20));
  if ( v15 )
  {
    v6 = v15 - 1;
LABEL_19:
    if ( v6 != 2 )
      v14 += 16LL;
  }
  v16 = a2[1];
  *a2 = v14;
  if ( (RtlpHpAppCompatFlags & 2) != 0 )
    v16 -= 16LL;
  a2[1] = v16;
  return v9;
}
