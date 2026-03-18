/*
 * XREFs of RtlCopyBitMap @ 0x1400D4E00
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     HvpAddBin @ 0x1404E4EF8 (HvpAddBin.c)
 *     MiSelectRelocationStartHint @ 0x140504844 (MiSelectRelocationStartHint.c)
 *     PspQueryRateControlHistory @ 0x14051041C (PspQueryRateControlHistory.c)
 * Callees:
 *     RtlpCopyBitMapTailToHead @ 0x1400D4F0C (RtlpCopyBitMapTailToHead.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMap(int *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10
  unsigned int v6; // r8d
  unsigned int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  int *v11; // rsi
  int *v12; // r11
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  size_t v16; // rdi
  _BYTE *v17; // r9
  unsigned __int64 v18; // rdi
  int v19; // r12d
  unsigned int v20; // edx
  char v21; // r9

  result = *(_DWORD *)a2 - a3;
  v5 = a3;
  v6 = *a1;
  if ( *a1 <= (unsigned int)result )
  {
    v8 = *a1;
    result = v6;
  }
  else
  {
    v8 = result;
  }
  v9 = (unsigned int)result;
  if ( (_DWORD)result )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v11 = (int *)*((_QWORD *)a1 + 1);
    result = v5 >> 5;
    v12 = (int *)(v10 + 4 * (v5 >> 5));
    if ( v11 > v12 || (result = (unsigned __int64)&v11[(v9 - 1) >> 5], (unsigned __int64)v12 > result) )
    {
      v13 = v5 >> 3;
      if ( (v5 & 7) != 0 )
      {
        if ( v9 >= 0x20 )
        {
          v18 = v9 >> 5;
          v19 = 1 << (32 - (v5 & 0x1F));
          v9 += -32LL * (v9 >> 5);
          do
          {
            *v12 = ((*v11 & (v19 - 1)) << (v5 & 0x1F)) | ((1 << (v5 & 0x1F)) - 1) & *v12;
            ++v12;
            v20 = (*v11++ & (unsigned int)~(v19 - 1)) >> (32 - (v5 & 0x1F));
            result = v20 | *v12 & ~((1 << (v5 & 0x1F)) - 1);
            *v12 = result;
            --v18;
          }
          while ( v18 );
        }
        if ( v9 )
        {
          v21 = 32 - (v5 & 0x1F);
          if ( v9 > 32 - (v5 & 0x1F) )
          {
            *v12 = ((*v11 & ((1 << v21) - 1)) << (v5 & 0x1F)) | *v12 & ((1 << (v5 & 0x1F)) - 1);
            result = ((*v11 & (unsigned int)(((1 << (v9 + (v5 & 0x1F) - 32)) - 1) << v21)) >> v21) | v12[1] & ~((1 << (v9 + (v5 & 0x1F) - 32)) - 1);
            v12[1] = result;
          }
          else
          {
            result = ((*v11 & ((1 << v9) - 1)) << (v5 & 0x1F)) | *v12 & (unsigned int)~(((1 << v9) - 1) << (v5 & 0x1F));
            *v12 = result;
          }
        }
      }
      else
      {
        v14 = v9;
        v15 = v9 & 7;
        v16 = v14 >> 3;
        if ( v16 )
          result = (unsigned __int64)memmove((void *)(v10 + v13), *((const void **)a1 + 1), v16);
        if ( v15 )
        {
          v17 = (_BYTE *)(v13 + v16 + *(_QWORD *)(a2 + 8));
          *v17 &= ~((1 << v15) - 1);
          result = *((_QWORD *)a1 + 1);
          *v17 |= (unsigned __int8)((1 << v15) - 1) & *(_BYTE *)(v16 + result);
        }
      }
    }
    else
    {
      return RtlpCopyBitMapTailToHead(a1, a2, v5, v8);
    }
  }
  return result;
}
