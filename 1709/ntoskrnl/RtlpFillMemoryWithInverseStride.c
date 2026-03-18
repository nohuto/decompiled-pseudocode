/*
 * XREFs of RtlpFillMemoryWithInverseStride @ 0x140257560
 * Callers:
 *     RtlpGenericStrideWorker @ 0x140257D80 (RtlpGenericStrideWorker.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpFillMemoryWithInverseStride(unsigned int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned __int64 result; // rax
  char *v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _DWORD *v14; // rdi
  unsigned __int64 i; // rcx
  char *v16; // r9
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  char *v20; // rdi
  unsigned __int64 j; // rcx
  unsigned __int64 v22; // rcx
  char *v23; // rdi

  v4 = 2 * a2;
  v5 = a1;
  v6 = a4 + 4096;
  v7 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  if ( (unsigned int)v7 > 2 * a2 )
    v8 = 12 - v7 + v4;
  else
    v8 = v4 - v7;
  v9 = 4096LL;
  result = 4LL * v8 + a4;
  if ( result <= v6 )
    v9 = 4LL * v8;
  v11 = (char *)(a4 + v9);
  v12 = (unsigned __int64)&v11[-a4 + 3] >> 2;
  if ( a4 > (unsigned __int64)v11 )
    v12 = 0LL;
  if ( v12 )
  {
    v13 = 4 * v12;
    v14 = (_DWORD *)a4;
    result = a1;
    for ( i = v13 >> 2; i; --i )
      *v14++ = v5;
    a4 += v13;
  }
  v16 = (char *)(a4 + 8);
  if ( (unsigned __int64)v11 < v6 )
  {
    result = 4LL * ((unsigned int)((__int64)(v6 - (_QWORD)v11) >> 2) % 0xC);
    v17 = v6 - result;
    if ( v11 != (char *)(v6 - result) )
    {
      while ( 1 )
      {
        v11 += 48;
        if ( (unsigned __int64)v16 >= v17 )
          break;
        v18 = (unsigned __int64)(v11 - v16 + 3) >> 2;
        if ( v16 > v11 )
          v18 = 0LL;
        if ( v18 )
        {
          v19 = 4 * v18;
          v20 = v16;
          result = v5;
          for ( j = v19 >> 2; j; --j )
          {
            *(_DWORD *)v20 = v5;
            v20 += 4;
          }
          v16 += v19;
        }
        v16 += 8;
      }
    }
  }
  v22 = (v6 - (unsigned __int64)v16 + 3) >> 2;
  if ( (unsigned __int64)v16 > v6 )
    v22 = 0LL;
  if ( v22 )
  {
    result = v5;
    v23 = v16;
    while ( v22 )
    {
      *(_DWORD *)v23 = v5;
      v23 += 4;
      --v22;
    }
  }
  return result;
}
