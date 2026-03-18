/*
 * XREFs of MiPrepareHotPatchBaseImageList @ 0x1406B5AB0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1406B5468 (MiApplyDriverHotPatch.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlFindHotPatchBase @ 0x1406EF020 (RtlFindHotPatchBase.c)
 */

__int64 __fastcall MiPrepareHotPatchBaseImageList(__int64 a1, int a2, __int64 a3, _QWORD *a4, unsigned int *a5)
{
  unsigned int v5; // r11d
  __int64 v6; // rdi
  _DWORD *HotPatchBase; // r15
  unsigned int v8; // r10d
  __int64 i; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // r9d
  _DWORD *v18; // rax
  int v19; // r9d
  unsigned int v20; // r11d
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // r9
  _DWORD *v23; // rax
  unsigned int v24; // r11d
  _DWORD *v25; // r10
  int v26; // eax
  __int64 v27; // rcx

  v5 = *(_DWORD *)(a3 + 16);
  v6 = a1 + 160;
  HotPatchBase = 0LL;
  v8 = 0;
  for ( i = a1 + 160; v8 < v5; ++v8 )
  {
    HotPatchBase = (_DWORD *)RtlFindHotPatchBase(a3, v8);
    if ( *HotPatchBase == a2 )
      break;
  }
  if ( v8 == v5 )
    return 3221225781LL;
  v15 = v8 + 1;
  v16 = 1;
  v17 = v8 + 1;
  if ( v8 + 1 >= v5 )
  {
LABEL_12:
    *a5 = v16;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v16, 0x41535048u);
    v22 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *PoolWithTag = a1;
      PoolWithTag[1] = HotPatchBase;
      while ( v15 < *(_DWORD *)(a3 + 16) )
      {
        v23 = (_DWORD *)RtlFindHotPatchBase(a3, v15);
        v25 = v23;
        if ( (v23[1] & 1) != 0 )
        {
          v26 = *v23;
          do
            v6 = *(_QWORD *)(v6 + 96) - 96LL;
          while ( *(_DWORD *)(v6 + 112) != v26 );
          v27 = 4LL * v24;
          v22[v27 + 3] = 0LL;
          v22[v27] = v6 - 160;
          v22[v27 + 1] = v25;
        }
        ++v15;
      }
      *a4 = v22;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    while ( 1 )
    {
      v18 = (_DWORD *)RtlFindHotPatchBase(a3, v17);
      if ( (v18[1] & 1) != 0 )
        break;
LABEL_11:
      v17 = v19 + 1;
      if ( v17 >= v20 )
        goto LABEL_12;
    }
    while ( 1 )
    {
      i = *(_QWORD *)(i + 96) - 96LL;
      if ( !*(_QWORD *)(i + 88) )
        return 3221225561LL;
      if ( *(_DWORD *)(i + 112) == *v18 )
      {
        ++v16;
        goto LABEL_11;
      }
    }
  }
}
