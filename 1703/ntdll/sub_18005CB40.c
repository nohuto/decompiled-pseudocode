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
        _QWORD *a3,
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
  __int64 v14; // rcx
  unsigned int j; // r15d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rbx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 Heap; // rax

  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 && a5 == -1 )
    return 0;
  RtlAcquireSRWLockExclusive(&qword_18015C3B0);
  v12 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_18015A268 )
      goto LABEL_11;
    v14 = qword_18015A260 + 72LL * i;
    if ( *(_QWORD *)(v14 + 8) != a1 )
    {
      if ( (a7 & 0x10) != 0
        && dword_18015A2A8
        && (unsigned __int64)(*(_QWORD *)(v14 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_1800E1F0C(v14, 0LL, v11);
        v12 = 0LL;
      }
      continue;
    }
    if ( (a7 & 2) != 0 && *(_QWORD *)(v14 + 16)
      || (a7 & 4) != 0 && a6 && *(_WORD *)v14 == a6 && *(_DWORD *)(v14 + 60) != -1 )
    {
      goto LABEL_94;
    }
    if ( (a7 & 1) != 0 && *(_QWORD *)(v14 + 32) && a6 && *(_WORD *)v14 == a6 )
      break;
  }
  if ( *a2 == -1LL || a5 != -1 )
  {
LABEL_61:
    v28 = qword_18015A260;
    *a2 = *(_QWORD *)(qword_18015A260 + 72LL * i + 32);
    if ( a3 )
      *a3 = *(_QWORD *)(v28 + 72LL * i + 40);
    goto LABEL_94;
  }
  if ( (a7 & 0x20) == 0 )
  {
    ZwUnmapViewOfSection(-1LL, *a2 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( a3 )
      ZwClose(*a3);
    goto LABEL_61;
  }
  v12 = 0LL;
  if ( *(_QWORD *)(v14 + 32) == -1LL )
    *(_QWORD *)(v14 + 32) = 0LL;
LABEL_11:
  if ( (a7 & 0x10) != 0 )
    goto LABEL_94;
  if ( qword_18015A260 )
  {
    if ( dword_18015A268 >= (unsigned int)dword_18015A26C )
    {
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               8,
               qword_18015A260,
               72LL * (unsigned int)(dword_18015A26C + 32));
      v12 = 0LL;
      if ( !Heap )
        goto LABEL_94;
      qword_18015A260 = Heap;
      dword_18015A26C += 32;
    }
  }
  else
  {
    v25 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2304LL);
    v12 = 0LL;
    if ( !v25 )
      goto LABEL_94;
    qword_18015A260 = v25;
    dword_18015A26C = 32;
  }
  for ( j = 0; j < dword_18015A268; ++j )
  {
    v16 = qword_18015A260 + 72LL * j;
    if ( *(_QWORD *)(v16 + 8) == a1 )
    {
      if ( (a7 & 2) != 0 && !*(_QWORD *)(v16 + 16) )
      {
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 64) = a8;
        goto LABEL_94;
      }
      if ( (a7 & 1) != 0 && !*(_QWORD *)(v16 + 32) && (!*(_WORD *)v16 || *(_WORD *)v16 == a6) )
      {
        *(_QWORD *)(v16 + 32) = *a2;
        if ( a3 )
          v24 = *a3;
        else
          v24 = 0LL;
        *(_QWORD *)(v16 + 40) = v24;
        *(_WORD *)v16 = a6;
        *(_DWORD *)(v16 + 64) = a8;
        *(_QWORD *)(v16 + 48) = a9;
        *(_DWORD *)(v16 + 56) = a5;
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
            && *(_DWORD *)(qword_18015A260 + 72LL * j + 64) == -1073741799 )
          {
            *a2 = *(_QWORD *)(qword_18015A260 + 72LL * j + 32);
          }
        }
        goto LABEL_94;
      }
      if ( (a7 & 4) != 0 )
      {
        *(_DWORD *)(v16 + 60) = a5;
        if ( a5 != -1 )
          sub_180003A50(a5);
        goto LABEL_94;
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(unsigned int *)(v17 + 88);
    v19 = 9LL * (unsigned int)dword_18015A268;
    v20 = qword_18015A260;
    *(_QWORD *)(qword_18015A260 + 8 * v19 + 8) = a1;
    *(_QWORD *)(v20 + 8 * v19 + 16) = a4;
    v21 = a7 & 1;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 32) = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 40) = v27;
      *(_QWORD *)(v20 + 8 * v19 + 48) = a9;
    }
    else
    {
      *(_QWORD *)(v20 + 8 * v19 + 32) = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 40) = 0LL;
      *(_QWORD *)(v20 + 8 * v19 + 48) = 0LL;
    }
    *(_WORD *)(v20 + 8 * v19) = a6;
    *(_DWORD *)(v20 + 8 * v19 + 24) = v18;
    v22 = -1;
    if ( (a7 & 4) == 0 )
      v22 = a5;
    *(_DWORD *)(v20 + 8 * v19 + 56) = v22;
    v23 = a5;
    if ( (a7 & 4) == 0 )
      v23 = -1;
    *(_DWORD *)(v20 + 8 * v19 + 60) = v23;
    if ( a5 != -1 )
    {
      sub_180003A50(a5);
      v21 = a7 & 1;
    }
    *(_DWORD *)(v20 + 8 * v19 + 64) = a8;
    if ( dword_18015A2A8 )
    {
      if ( v21 )
      {
        LOBYTE(v18) = 1;
        if ( (int)sub_1800E1F0C(v20 + 72LL * j, v18, 0LL) >= 0
          && (dword_18015A2A8 & 2) != 0
          && *(_DWORD *)(qword_18015A260 + 72LL * j + 64) == -1073741799 )
        {
          *a2 = *(_QWORD *)(qword_18015A260 + 72LL * j + 32);
        }
      }
    }
    ++dword_18015A268;
  }
LABEL_94:
  RtlReleaseSRWLockExclusive(&qword_18015C3B0);
  return 1;
}
