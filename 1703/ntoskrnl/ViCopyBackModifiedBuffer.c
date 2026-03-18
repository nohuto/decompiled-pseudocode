/*
 * XREFs of ViCopyBackModifiedBuffer @ 0x14076BB20
 * Callers:
 *     ViFlushDoubleBuffer @ 0x14076BD8C (ViFlushDoubleBuffer.c)
 * Callees:
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ViGetMdlBufferSa @ 0x14076C348 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViCopyBackModifiedBuffer(ULONG_PTR a1, int a2, char *a3, char *a4, SIZE_T Length)
{
  SIZE_T v5; // rbx
  SIZE_T v11; // rdx
  char *v12; // rax
  size_t v13; // rbx
  char *v14; // rbp
  SIZE_T i; // rcx
  ULONG_PTR v16; // rax
  size_t v17; // rcx
  size_t v18; // r14
  void *MdlBufferSa; // rax
  size_t v20; // rax
  size_t v21; // rcx
  bool v22; // cc

  v5 = Length;
  if ( !Length )
    return 0LL;
  v11 = RtlCompareMemory(a3, a4, Length);
  if ( Length > v11 )
  {
    v12 = &a4[Length - 1];
    do
    {
      if ( v12[a3 - a4] != *v12 )
        break;
      --v5;
      --v12;
    }
    while ( v5 > v11 );
  }
  if ( v5 == v11 )
    return 0LL;
  v13 = v5 - v11;
  v14 = &a3[v11];
  for ( i = (unsigned int)(*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44) - a2);
        v11 >= i;
        i = *(unsigned int *)(v16 + 40) )
  {
    v16 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v11 -= i;
    a1 = *(_QWORD *)a1;
  }
  v17 = i - v11;
  v18 = v13;
  if ( *(_QWORD *)a1 )
    v18 = v17;
  while ( 1 )
  {
    MdlBufferSa = (void *)ViGetMdlBufferSa(a1);
    if ( !MdlBufferSa )
      break;
    if ( !*(_QWORD *)a1 )
    {
      memmove(MdlBufferSa, v14, v13);
      return 0LL;
    }
    if ( v18 > v13 )
      v18 = v13;
    memmove(MdlBufferSa, v14, v18);
    a1 = *(_QWORD *)a1;
    v14 += v18;
    v20 = 0LL;
    v21 = v13 - v18;
    v22 = v18 <= v13;
    v18 = *(unsigned int *)(a1 + 40);
    if ( v22 )
      v20 = v21;
    v13 = v20;
    if ( !v20 )
      return 0LL;
  }
  return 3221225473LL;
}
