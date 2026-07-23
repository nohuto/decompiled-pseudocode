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

  RtlAcquireSRWLockExclusive(&stru_18015D2C8);
  v2 = sub_180048F08(Address);
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
      v5 = LdrEnumerateLoadedModules(0, (PLDR_ENUM_CALLBACK)EnumProc, &Context);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          v3[2] = v10;
          v3[3] = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_180156640;
          if ( *off_180156640 != (_UNKNOWN *)&off_180156638 )
            __fastfail(3u);
          *v3 = &off_180156638;
          v3[1] = v6;
          *v6 = v3;
          off_180156640 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015D2C8);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
