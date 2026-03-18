/*
 * XREFs of PopAddPagesToCompressedPageSet @ 0x1404321C8
 * Callers:
 *     PopCompressHiberBlocks @ 0x140432774 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140435DD4 (PopWriteHiberImage.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlCompressBufferProgress @ 0x140257FD4 (RtlCompressBufferProgress.c)
 */

const void *__fastcall PopAddPagesToCompressedPageSet(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        const void *a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v7; // esi
  __int64 v8; // r15
  unsigned int v10; // edi
  _BYTE *v13; // rbp
  unsigned int v14; // r10d
  __int64 v15; // r8
  int v16; // r9d
  unsigned int v17; // edx
  unsigned __int64 v18; // rbx
  int v19; // ecx
  unsigned __int64 v20; // rax
  const void *result; // rax
  __int64 v22; // [rsp+20h] [rbp-58h]

  v7 = 0;
  v8 = *(_QWORD *)(a2 + 24);
  v10 = a6 << 12;
  if ( v8 )
  {
    if ( a5 )
    {
      v13 = *(_BYTE **)a2;
      memmove(*(void **)a2, a4, v10);
    }
    else
    {
      v13 = a4;
      v14 = *(_DWORD *)(a2 + 120);
      v15 = *((_QWORD *)qword_140365B98 + 5) - *((_QWORD *)qword_140365B98 + 7);
      if ( v14 && (v16 = *(_DWORD *)(a2 + 124), (int)(100 * v16 / v14) <= dword_140365B44) )
      {
        v17 = *((_DWORD *)qword_140365B98 + 2);
        if ( v15 >= (__int64)((unsigned __int64)v17 >> 1) )
        {
          *(_DWORD *)(a2 + 124) = v16 + 1;
          if ( v15 >= (__int64)((unsigned __int64)(3 * v17) >> 2) )
            v7 = 3;
          else
            v7 = 2;
        }
      }
      else
      {
        LOBYTE(v7) = v15 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140365B98 + 2) >> 1);
      }
      *(_DWORD *)(a2 + 120) = v14 + 1;
    }
    v18 = __rdtsc();
    v19 = RtlCompressBufferProgress(PopCompressMethodMap[v7], v13, v10, v8, v22, &a6, *(_QWORD *)(a2 + 16), a7, a1);
    v20 = __rdtsc();
    *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v20) << 32) | (unsigned int)v20) - v18;
    if ( v19 < 0 || a6 >= (7 * v10) >> 3 )
    {
      a4 = v13;
    }
    else
    {
      v10 = a6;
      a4 = (const void *)v8;
    }
  }
  result = a4;
  *a3 = (v7 << 30) | ((v10 << 8) | (unsigned __int8)*a3) & 0x3FFFFFFF;
  return result;
}
