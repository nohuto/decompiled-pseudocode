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

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD *Heap; // rax
  int v5; // edi
  _QWORD *v6; // rax
  PVOID Context; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&stru_18015C288);
  v2 = sub_180083E00(Address);
  v3 = (_QWORD *)v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      Context = Address;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, EnumProc, &Context);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          v3[2] = v10;
          v3[3] = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_180155638[0];
          if ( *(_UNKNOWN ***)off_180155638[0] != &off_180155630 )
            __fastfail(3u);
          *v3 = &off_180155630;
          v3[1] = v6;
          *v6 = v3;
          off_180155638[0] = v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C288);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
