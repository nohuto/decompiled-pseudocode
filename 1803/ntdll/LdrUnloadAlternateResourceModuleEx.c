/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180047210
 * Callers:
 *     sub_1800107D4 @ 0x1800107D4 (sub_1800107D4.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     LdrUnloadAlternateResourceModule @ 0x180047200 (LdrUnloadAlternateResourceModule.c)
 *     LdrResRelease @ 0x180088510 (LdrResRelease.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800486A8 @ 0x1800486A8 (sub_1800486A8.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  __int16 v2; // r12
  BOOLEAN v4; // bl
  unsigned int v5; // edi
  int v6; // esi
  int v7; // r13d
  char *v8; // r14
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  void *v11; // rdx
  void *v12; // rcx
  PVOID Heap; // rax
  int i; // [rsp+24h] [rbp-34h]
  char *v16; // [rsp+60h] [rbp+8h]

  v2 = Flags;
  v4 = 0;
  if ( !DllHandle )
    return 0;
  RtlAcquireSRWLockExclusive(&stru_18015D3E8);
  v5 = dword_18015B2A0;
  if ( dword_18015B2A0 )
  {
    v6 = dword_18015B2A0;
    for ( i = dword_18015B2A0; ; i = v7 )
    {
      if ( v6 <= 0 )
        goto LABEL_30;
      v7 = v6 - 1;
      v8 = (char *)BaseAddress + 64 * (__int64)(v6 - 1);
      if ( *((PVOID *)v8 + 1) == DllHandle )
        break;
LABEL_6:
      v6 = v7;
    }
    v16 = (char *)BaseAddress + 64 * (__int64)v7;
    v9 = v8 + 32;
    v10 = *((_QWORD *)v8 + 4);
    if ( v10 && (!v2 || v2 == *(_WORD *)v8) && v10 != -1 )
    {
      v11 = (void *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( *((_DWORD *)v8 + 14) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
        v6 = i;
        v8 = v16;
      }
      else
      {
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v11);
      }
      v12 = (void *)*((_QWORD *)v8 + 5);
      if ( v12 )
      {
        ZwClose(v12);
        *((_QWORD *)v8 + 5) = 0LL;
      }
      *v9 = 0LL;
      v5 = dword_18015B2A0;
    }
    if ( v6 != v5 )
      sub_1800486A8((unsigned int)(v6 - 1));
    dword_18015B2A0 = --v5;
    if ( v5 )
    {
      if ( v5 >= dword_18015B2A4 - 32 )
      {
LABEL_19:
        v4 = 1;
        goto LABEL_6;
      }
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               0,
               BaseAddress,
               (unsigned __int64)(unsigned int)(dword_18015B2A4 - 32) << 6);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_30;
      }
      BaseAddress = Heap;
      dword_18015B2A4 -= 32;
    }
    else
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      BaseAddress = 0LL;
      dword_18015B2A4 = 0;
    }
    v5 = dword_18015B2A0;
    goto LABEL_19;
  }
  v4 = 1;
LABEL_30:
  RtlReleaseSRWLockExclusive(&stru_18015D3E8);
  return v4;
}
