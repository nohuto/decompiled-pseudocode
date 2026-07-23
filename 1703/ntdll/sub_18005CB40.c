/*
 * XREFs of sub_18005CB40 @ 0x18005CB40
 * Callers:
 *     sub_18003660C @ 0x18003660C (sub_18003660C.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180036E50 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_18005A0E4 @ 0x18005A0E4 (sub_18005A0E4.c)
 *     LdrResGetRCConfig @ 0x18005C640 (LdrResGetRCConfig.c)
 *     LdrSetMUICacheType @ 0x18008F6C0 (LdrSetMUICacheType.c)
 * Callees:
 *     sub_180003A50 @ 0x180003A50 (sub_180003A50.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x180022260 (RtlReAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlImageNtHeader @ 0x180036560 (RtlImageNtHeader.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     sub_1800E1F0C @ 0x1800E1F0C (sub_1800E1F0C.c)
 */

char __fastcall sub_18005CB40(
        __int64 a1,
        _QWORD *a2,
        HANDLE *a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int i; // ebx
  char *v14; // rcx
  unsigned int j; // r15d
  char *v16; // rbx
  PIMAGE_NT_HEADERS v17; // rax
  __int64 CheckSum; // rdx
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  HANDLE v24; // rax
  PVOID v25; // rax
  __int64 v26; // rax
  HANDLE v27; // rax
  _QWORD *v28; // rcx
  PVOID Heap; // rax

  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 && a5 == -1 )
    return 0;
  RtlAcquireSRWLockExclusive(&stru_18015C3B0);
  v12 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_18015A268 )
      goto LABEL_11;
    v14 = (char *)BaseAddress + 72 * i;
    if ( *((_QWORD *)v14 + 1) != a1 )
    {
      if ( (a7 & 0x10) != 0
        && dword_18015A2A8
        && (unsigned __int64)(*((_QWORD *)v14 + 5) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_1800E1F0C(v14, 0LL, v11);
        v12 = 0LL;
      }
      continue;
    }
    if ( (a7 & 2) != 0 && *((_QWORD *)v14 + 2)
      || (a7 & 4) != 0 && a6 && *(_WORD *)v14 == a6 && *((_DWORD *)v14 + 15) != -1 )
    {
      goto LABEL_94;
    }
    if ( (a7 & 1) != 0 && *((_QWORD *)v14 + 4) && a6 && *(_WORD *)v14 == a6 )
      break;
  }
  if ( *a2 == -1LL || a5 != -1 )
  {
LABEL_61:
    v28 = BaseAddress;
    *a2 = *((_QWORD *)BaseAddress + 9 * i + 4);
    if ( a3 )
      *a3 = (HANDLE)v28[9 * i + 5];
    goto LABEL_94;
  }
  if ( (a7 & 0x20) == 0 )
  {
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID)(*a2 & 0xFFFFFFFFFFFFFFFCuLL));
    if ( a3 )
      ZwClose(*a3);
    goto LABEL_61;
  }
  v12 = 0LL;
  if ( *((_QWORD *)v14 + 4) == -1LL )
    *((_QWORD *)v14 + 4) = 0LL;
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    goto LABEL_94;
  if ( BaseAddress )
  {
    if ( dword_18015A268 >= (unsigned int)dword_18015A26C )
    {
      Heap = RtlReAllocateHeap(
               NtCurrentPeb()->ProcessHeap,
               8u,
               BaseAddress,
               72LL * (unsigned int)(dword_18015A26C + 32));
      v12 = 0LL;
      if ( !Heap )
        goto LABEL_94;
      BaseAddress = Heap;
      dword_18015A26C += 32;
    }
  }
  else
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x900uLL);
    v12 = 0LL;
    if ( !v25 )
      goto LABEL_94;
    BaseAddress = v25;
    dword_18015A26C = 32;
  }
  for ( j = 0; j < dword_18015A268; ++j )
  {
    v16 = (char *)BaseAddress + 72 * j;
    if ( *((_QWORD *)v16 + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && !*((_QWORD *)v16 + 2) )
      {
        *((_QWORD *)v16 + 2) = a4;
        *((_DWORD *)v16 + 16) = a8;
        goto LABEL_94;
      }
      if ( (a7 & 1) != 0 && !*((_QWORD *)v16 + 4) && (!*(_WORD *)v16 || *(_WORD *)v16 == a6) )
      {
        *((_QWORD *)v16 + 4) = *a2;
        if ( a3 )
          v24 = *a3;
        else
          v24 = 0LL;
        *((_QWORD *)v16 + 5) = v24;
        *(_WORD *)v16 = a6;
        *((_DWORD *)v16 + 16) = a8;
        *((_QWORD *)v16 + 6) = a9;
        *((_DWORD *)v16 + 14) = a5;
        if ( a5 != -1 )
        {
          sub_180003A50(a5);
          v12 = 0LL;
        }
        if ( dword_18015A2A8 )
        {
          LOBYTE(v12) = 1;
          if ( (int)sub_1800E1F0C(v16, v12, v11) >= 0
            && (dword_18015A2A8 & 2) != 0
            && *((_DWORD *)BaseAddress + 18 * j + 16) == -1073741799 )
          {
            *a2 = *((_QWORD *)BaseAddress + 9 * j + 4);
          }
        }
        goto LABEL_94;
      }
      if ( (a7 & 4) != 0 )
      {
        *((_DWORD *)v16 + 15) = a5;
        if ( a5 != -1 )
          sub_180003A50(a5);
        goto LABEL_94;
      }
    }
  }
  v17 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v17 )
  {
    CheckSum = v17->OptionalHeader.CheckSum;
    v19 = 9LL * (unsigned int)dword_18015A268;
    v20 = BaseAddress;
    *((_QWORD *)BaseAddress + v19 + 1) = a1;
    v20[v19 + 2] = a4;
    v21 = a7 & 1;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      v20[v19 + 4] = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      v20[v19 + 5] = v27;
      v20[v19 + 6] = a9;
    }
    else
    {
      v20[v19 + 4] = 0LL;
      v20[v19 + 5] = 0LL;
      v20[v19 + 6] = 0LL;
    }
    LOWORD(v20[v19]) = a6;
    LODWORD(v20[v19 + 3]) = CheckSum;
    v22 = -1;
    if ( (a7 & 4) == 0 )
      v22 = a5;
    LODWORD(v20[v19 + 7]) = v22;
    v23 = a5;
    if ( (a7 & 4) == 0 )
      v23 = -1;
    HIDWORD(v20[v19 + 7]) = v23;
    if ( a5 != -1 )
    {
      sub_180003A50(a5);
      v21 = a7 & 1;
    }
    LODWORD(v20[v19 + 8]) = a8;
    if ( dword_18015A2A8 )
    {
      if ( v21 )
      {
        LOBYTE(CheckSum) = 1;
        if ( (int)sub_1800E1F0C(&v20[9 * j], CheckSum, 0LL) >= 0
          && (dword_18015A2A8 & 2) != 0
          && *((_DWORD *)BaseAddress + 18 * j + 16) == -1073741799 )
        {
          *a2 = *((_QWORD *)BaseAddress + 9 * j + 4);
        }
      }
    }
    ++dword_18015A268;
  }
LABEL_94:
  RtlReleaseSRWLockExclusive(&stru_18015C3B0);
  return 1;
}
