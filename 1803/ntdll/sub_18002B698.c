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

char __fastcall sub_18002B698(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int16 a5,
        int a6,
        int a7,
        __int64 a8)
{
  unsigned int i; // edi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned int j; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r8d
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 Heap; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rcx

  if ( !a1 || (a6 & 0xFFFFFFCC) != 0 || (a6 & 3) == 3 || (a6 & 1) != 0 && !a2 )
    return 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3E8, (unsigned __int64)a2, a3, a4);
  for ( i = 0; ; ++i )
  {
    if ( i >= dword_18015B2A0 )
      goto LABEL_10;
    v12 = (unsigned __int64)i << 6;
    v13 = v12 + qword_18015B298;
    if ( *(_QWORD *)(v12 + qword_18015B298 + 8) != a1 )
    {
      if ( (a6 & 0x10) != 0
        && dword_18015B2AC
        && (unsigned __int64)(*(_QWORD *)(v13 + 40) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        sub_1800DBBCC(v13, 0LL);
      }
      continue;
    }
    if ( (a6 & 2) != 0 && *(_QWORD *)(v13 + 16) )
      goto LABEL_73;
    if ( (a6 & 1) != 0 && *(_QWORD *)(v13 + 32) && a5 && *(_WORD *)v13 == a5 )
      break;
  }
  if ( *a2 == -1LL )
  {
LABEL_45:
    v25 = qword_18015B298;
    *a2 = *(_QWORD *)(v12 + qword_18015B298 + 32);
    if ( a3 )
      *a3 = *(_QWORD *)(v12 + v25 + 40);
    goto LABEL_73;
  }
  if ( (a6 & 0x20) == 0 )
  {
    ZwUnmapViewOfSection(-1LL);
    if ( a3 )
      ZwClose(*a3);
    goto LABEL_45;
  }
  if ( *(_QWORD *)(v13 + 32) == -1LL )
    *(_QWORD *)(v13 + 32) = 0LL;
LABEL_10:
  if ( (a6 & 0x10) != 0 )
    goto LABEL_73;
  if ( qword_18015B298 )
  {
    if ( dword_18015B2A0 >= (unsigned int)dword_18015B2A4 )
    {
      Heap = RtlReAllocateHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               8,
               qword_18015B298,
               (unsigned __int64)(unsigned int)(dword_18015B2A4 + 32) << 6);
      if ( !Heap )
        goto LABEL_73;
      qword_18015B298 = Heap;
      dword_18015B2A4 += 32;
    }
  }
  else
  {
    v24 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2048LL);
    if ( !v24 )
      goto LABEL_73;
    qword_18015B298 = v24;
    dword_18015B2A4 = 32;
  }
  for ( j = 0; j < dword_18015B2A0; ++j )
  {
    v15 = (unsigned __int64)j << 6;
    v16 = qword_18015B298;
    if ( *(_QWORD *)(v15 + qword_18015B298 + 8) == a1 )
    {
      if ( (a6 & 2) != 0 && !*(_QWORD *)(v15 + qword_18015B298 + 16) )
      {
        *(_QWORD *)(v15 + qword_18015B298 + 16) = a4;
        *(_DWORD *)(v15 + v16 + 56) = a7;
        goto LABEL_73;
      }
      if ( (a6 & 1) != 0 )
      {
        v21 = (unsigned __int64)j << 6;
        v22 = v21 + qword_18015B298;
        if ( !*(_QWORD *)(v21 + qword_18015B298 + 32) && (!*(_WORD *)v22 || *(_WORD *)v22 == a5) )
        {
          *(_QWORD *)(v22 + 32) = *a2;
          if ( a3 )
            v23 = *a3;
          else
            v23 = 0LL;
          *(_QWORD *)(v22 + 40) = v23;
          *(_WORD *)v22 = a5;
          *(_DWORD *)(v22 + 56) = a7;
          *(_QWORD *)(v22 + 48) = a8;
          if ( dword_18015B2AC )
          {
            LOBYTE(v16) = 1;
            if ( (int)sub_1800DBBCC(v22, v16) >= 0
              && (dword_18015B2AC & 2) != 0
              && *(_DWORD *)(v21 + qword_18015B298 + 56) == -1073741799 )
            {
              *a2 = *(_QWORD *)(v21 + qword_18015B298 + 32);
            }
          }
          goto LABEL_73;
        }
      }
    }
  }
  v17 = RtlImageNtHeader(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 88);
    v19 = (unsigned __int64)(unsigned int)dword_18015B2A0 << 6;
    v20 = qword_18015B298;
    *(_QWORD *)(v19 + qword_18015B298 + 8) = a1;
    *(_QWORD *)(v19 + v20 + 16) = a4;
    if ( (a6 & 1) != 0 )
    {
      if ( a2 )
        v26 = *a2;
      else
        v26 = 0LL;
      *(_QWORD *)(v19 + v20 + 32) = v26;
      if ( a3 )
        v27 = *a3;
      else
        v27 = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = v27;
      *(_QWORD *)(v19 + v20 + 48) = a8;
    }
    else
    {
      *(_QWORD *)(v19 + v20 + 32) = 0LL;
      *(_QWORD *)(v19 + v20 + 40) = 0LL;
      *(_QWORD *)(v19 + v20 + 48) = 0LL;
    }
    *(_WORD *)(v19 + v20) = a5;
    *(_DWORD *)(v19 + v20 + 24) = v18;
    *(_DWORD *)(v19 + v20 + 56) = a7;
    if ( dword_18015B2AC )
    {
      if ( (a6 & 1) != 0 )
      {
        v29 = (unsigned __int64)j << 6;
        v30 = v29 + v20;
        LOBYTE(v20) = 1;
        if ( (int)sub_1800DBBCC(v30, v20) >= 0
          && (dword_18015B2AC & 2) != 0
          && *(_DWORD *)(v29 + qword_18015B298 + 56) == -1073741799 )
        {
          *a2 = *(_QWORD *)(v29 + qword_18015B298 + 32);
        }
      }
    }
    ++dword_18015B2A0;
  }
LABEL_73:
  RtlReleaseSRWLockExclusive(&qword_18015D3E8);
  return 1;
}
