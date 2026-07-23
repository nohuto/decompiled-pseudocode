/*
 * XREFs of sub_18002B698 @ 0x18002B698
 * Callers:
 *     sub_180033B60 @ 0x180033B60 (sub_180033B60.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034390 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResGetRCConfig @ 0x1800539B0 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18008ACF0 (LdrSetMUICacheType.c)
 * Callees:
 *     RtlReAllocateHeap @ 0x180013CC0 (RtlReAllocateHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlImageNtHeader @ 0x18002DC30 (RtlImageNtHeader.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x18009B000 (ZwUnmapViewOfSection.c)
 *     sub_1800DBBCC @ 0x1800DBBCC (sub_1800DBBCC.c)
 */

char __fastcall sub_18002B698(__int64 a1, _QWORD *a2, HANDLE *a3, __int64 a4, __int16 a5, int a6, int a7, __int64 a8)
{
  unsigned int i; // edi
  unsigned __int64 v12; // rsi
  char *v13; // rcx
  unsigned int j; // edi
  unsigned __int64 v15; // rcx
  char *v16; // rdx
  PIMAGE_NT_HEADERS v17; // rax
  DWORD CheckSum; // r8d
  unsigned __int64 v19; // rcx
  char *v20; // rdx
  unsigned __int64 v21; // rsi
  char *v22; // rcx
  HANDLE v23; // rax
  PVOID v24; // rax
  char *v25; // rcx
  __int64 v26; // rax
  HANDLE v27; // rax
  PVOID Heap; // rax
  unsigned __int64 v29; // rbx
  char *v30; // rcx

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive(&stru_18015D3E8);
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_18015B2A0 )
      goto LABEL_10;
    v12 = (unsigned __int64)i << 6;
    v13 = (char *)BaseAddress + v12;
    if ( *(_QWORD *)((char *)BaseAddress + v12 + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0
        && dword_18015B2AC
        && (unsigned __int64)(*((_QWORD *)v13 + 5) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_1800DBBCC(v13, 0LL);
      }
      continue;
    }
    if ( (a6 & 2) != 0 && *((_QWORD *)v13 + 2) )
      goto LABEL_73;
    if ( (a6 & 1) != 0 && *((_QWORD *)v13 + 4) && a5 && *(_WORD *)v13 == a5 )
      break;
  }
  if ( *a2 == -1LL )
  {
LABEL_45:
    v25 = (char *)BaseAddress;
    *a2 = *(_QWORD *)((char *)BaseAddress + v12 + 32);
    if ( a3 )
      *a3 = *(HANDLE *)&v25[v12 + 40];
    goto LABEL_73;
  }
  if ( (a6 & 0x20) == 0 )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*a2 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( a3 )
      ZwClose(*a3);
    goto LABEL_45;
  }
  if ( *((_QWORD *)v13 + 4) == -1LL )
    *((_QWORD *)v13 + 4) = 0LL;
LABEL_10:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_73;
  if ( BaseAddress )
  {
    if ( dword_18015B2A0 >= (unsigned int)dword_18015B2A4 )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8u,
               BaseAddress,
               (unsigned __int64)(unsigned int)(dword_18015B2A4 + 32) << 6);
      if ( !Heap )
        goto LABEL_73;
      BaseAddress = Heap;
      dword_18015B2A4 += 32;
    }
  }
  else
  {
    v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x800uLL);
    if ( !v24 )
      goto LABEL_73;
    BaseAddress = v24;
    dword_18015B2A4 = 32;
  }
  for ( j = 0; j < dword_18015B2A0; ++j )
  {
    v15 = (unsigned __int64)j << 6;
    v16 = (char *)BaseAddress;
    if ( *(_QWORD *)((char *)BaseAddress + v15 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)((char *)BaseAddress + v15 + 16) )
      {
        *(_QWORD *)((char *)BaseAddress + v15 + 16) = a4;
        *(_DWORD *)&v16[v15 + 56] = a7;
        goto LABEL_73;
      }
      if ( (a6 & 1) != 0 )
      {
        v21 = (unsigned __int64)j << 6;
        v22 = (char *)BaseAddress + v21;
        if ( !*(_QWORD *)((char *)BaseAddress + v21 + 32) && (!*(_WORD *)v22 || *(_WORD *)v22 == a5) )
        {
          *((_QWORD *)v22 + 4) = *a2;
          if ( a3 )
            v23 = *a3;
          else
            v23 = 0LL;
          *((_QWORD *)v22 + 5) = v23;
          *(_WORD *)v22 = a5;
          *((_DWORD *)v22 + 14) = a7;
          *((_QWORD *)v22 + 6) = a8;
          if ( dword_18015B2AC )
          {
            LOBYTE(v16) = 1;
            if ( (int)sub_1800DBBCC(v22, v16) >= 0
              && (dword_18015B2AC & 2) != 0
              && *(_DWORD *)((char *)BaseAddress + v21 + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)((char *)BaseAddress + v21 + 32);
            }
          }
          goto LABEL_73;
        }
      }
    }
  }
  v17 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v17 )
  {
    CheckSum = v17->OptionalHeader.CheckSum;
    v19 = (unsigned __int64)(unsigned int)dword_18015B2A0 << 6;
    v20 = (char *)BaseAddress;
    *(_QWORD *)((char *)BaseAddress + v19 + 8) = a1;
    *(_QWORD *)&v20[v19 + 16] = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      *(_QWORD *)&v20[v19 + 32] = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      *(_QWORD *)&v20[v19 + 40] = v27;
      *(_QWORD *)&v20[v19 + 48] = a8;
    }
    else
    {
      *(_QWORD *)&v20[v19 + 32] = 0LL;
      *(_QWORD *)&v20[v19 + 40] = 0LL;
      *(_QWORD *)&v20[v19 + 48] = 0LL;
    }
    *(_WORD *)&v20[v19] = a5;
    *(_DWORD *)&v20[v19 + 24] = CheckSum;
    *(_DWORD *)&v20[v19 + 56] = a7;
    if ( dword_18015B2AC )
    {
      if ( (a6 & 1) != 0 )
      {
        v29 = (unsigned __int64)j << 6;
        v30 = &v20[v29];
        LOBYTE(v20) = 1;
        if ( (int)sub_1800DBBCC(v30, v20) >= 0
          && (dword_18015B2AC & 2) != 0
          && *(_DWORD *)((char *)BaseAddress + v29 + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)((char *)BaseAddress + v29 + 32);
        }
      }
    }
    ++dword_18015B2A0;
  }
LABEL_73:
  RtlReleaseSRWLockExclusive(&stru_18015D3E8);
  return 1;
}
