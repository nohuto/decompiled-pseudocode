/*
 * XREFs of RtlLockModuleSection @ 0x180048E10
 * Callers:
 *     sub_180048CCC @ 0x180048CCC (sub_180048CCC.c)
 *     sub_180049134 @ 0x180049134 (sub_180049134.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     LdrEnumerateLoadedModules @ 0x180048720 (LdrEnumerateLoadedModules.c)
 *     sub_180048F08 @ 0x180048F08 (sub_180048F08.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlLockModuleSection(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  void *Heap; // rax
  int v8; // edi
  unsigned __int64 *v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  __int64 v14; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D2C8, a2, a3, a4);
  v5 = sub_180048F08(a1);
  v6 = v5;
  if ( v5 )
  {
    ++*(_DWORD *)(v5 + 32);
    v8 = 0;
  }
  else
  {
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    v6 = (unsigned __int64)Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      v11 = a1;
      v12 = -1073741275;
      v8 = LdrEnumerateLoadedModules(0, (void (__fastcall *)(__int64 *, __int64, char *))sub_1800487E0, (__int64)&v11);
      if ( v8 >= 0 )
      {
        v8 = v12;
        if ( v12 >= 0 )
        {
          *(_QWORD *)(v6 + 16) = v13;
          *(_QWORD *)(v6 + 24) = v14;
          *(_DWORD *)(v6 + 32) = 1;
          v9 = (unsigned __int64 *)off_180156640;
          if ( *off_180156640 != (_UNKNOWN *)&off_180156638 )
            __fastfail(3u);
          *(_QWORD *)v6 = &off_180156638;
          *(_QWORD *)(v6 + 8) = v9;
          *v9 = v6;
          off_180156640 = (_UNKNOWN **)v6;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&qword_18015D2C8);
  if ( v8 < 0 && v6 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
  return (unsigned int)v8;
}
