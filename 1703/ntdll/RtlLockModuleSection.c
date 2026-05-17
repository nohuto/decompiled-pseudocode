/*
 * XREFs of RtlLockModuleSection @ 0x180083C60
 * Callers:
 *     sub_1800839B4 @ 0x1800839B4 (sub_1800839B4.c)
 *     sub_180083B74 @ 0x180083B74 (sub_180083B74.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_180083E00 @ 0x180083E00 (sub_180083E00.c)
 *     LdrEnumerateLoadedModules @ 0x180083E40 (LdrEnumerateLoadedModules.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rbx
  void *Heap; // rax
  int v5; // edi
  unsigned __int64 *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&qword_18015C288);
  v2 = sub_180083E00(a1);
  v3 = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 32);
    v5 = 0;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    v3 = (unsigned __int64)Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      v8 = a1;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0LL, sub_180083F00, &v8);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          *(_QWORD *)(v3 + 16) = v10;
          *(_QWORD *)(v3 + 24) = v11;
          *(_DWORD *)(v3 + 32) = 1;
          v6 = (unsigned __int64 *)off_180155638[0];
          if ( *(_UNKNOWN ***)off_180155638[0] != &off_180155630 )
            __fastfail(3u);
          *(_QWORD *)v3 = &off_180155630;
          *(_QWORD *)(v3 + 8) = v6;
          *v6 = v3;
          off_180155638[0] = (_UNKNOWN *)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015C288);
  if ( v5 < 0 && v3 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  return (unsigned int)v5;
}
