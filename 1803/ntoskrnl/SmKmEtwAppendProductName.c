/*
 * XREFs of SmKmEtwAppendProductName @ 0x1402A71F8
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1402A7610 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     SmUniqueIdParseProductName @ 0x1402A66D0 (SmUniqueIdParseProductName.c)
 *     SmKmStoreFileOpenVolume @ 0x14079EB88 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x14079EF0C (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
{
  __int64 v2; // r9
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int UniqueId; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // r15
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // r12d
  unsigned int v20; // esi
  void *v21; // rdi
  __int64 v22; // rax
  LONG_PTR result; // rax
  void *v24; // [rsp+60h] [rbp+8h] BYREF
  __int64 v25; // [rsp+68h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  v24 = 0LL;
  v25 = v2;
  v4 = 0LL;
  if ( !v2 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v24, &v25);
    v2 = v25;
    v4 = v24;
  }
  v5 = *((unsigned int *)a1 + 6) + a1[1];
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = *((_DWORD *)a1 + 2) + *((_DWORD *)a1 + 7) - (_DWORD)v6;
  if ( v2 )
  {
    v8 = 256LL;
    v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 < 0x100 )
      v8 = v7;
    UniqueId = SmKmVolumeQueryUniqueId(v2, v9, v8);
  }
  else
  {
    UniqueId = -1073741275;
  }
  if ( UniqueId < 0 )
    *v6 = 0;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v6[v12] );
  v13 = &v6[(unsigned int)v12 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v13, v7 - 2 * (_DWORD)v12 - 2) < 0 )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    do
      ++v11;
    while ( v13[v11] );
  }
  v14 = *((unsigned int *)a1 + 6);
  v15 = 2 * v11;
  v16 = a1[1];
  v17 = *a1;
  v18 = 2LL * *((unsigned int *)a1 + 4);
  v19 = v14 + 2;
  v20 = *((_DWORD *)a1 + 4) + 1;
  *((_DWORD *)a1 + 6) = v14 + 2;
  *((_DWORD *)a1 + 4) = v20;
  *(_WORD *)(v16 + v14) = v11;
  v21 = (void *)(v16 + (unsigned int)(v14 + 2));
  *(_QWORD *)(v17 + 8 * v18) = v16 + v14;
  *(_QWORD *)(v17 + 8 * v18 + 8) = 2LL;
  if ( v13 )
    memmove(v21, v13, v15);
  v22 = v17 + 16LL * v20;
  *(_DWORD *)(v22 + 12) = 0;
  *(_QWORD *)v22 = v21;
  *(_DWORD *)(v22 + 8) = v15;
  *((_DWORD *)a1 + 4) = v20 + 1;
  result = v19 + v15;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
