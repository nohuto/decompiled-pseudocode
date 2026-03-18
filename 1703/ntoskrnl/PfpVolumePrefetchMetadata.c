/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x140463A54
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x14010AF88 (PfpCheckPrefetchAbort.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     PfpPrefetchDirectoryStream @ 0x140463E10 (PfpPrefetchDirectoryStream.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14053D234 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14053D344 (PfpGetPageListCount.c)
 *     PfpFileSetupObjectAttributes @ 0x14053EC80 (PfpFileSetupObjectAttributes.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int *Src; // rsi
  __int64 v7; // r9
  int v8; // r8d
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r12
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // esi
  _DWORD *v18; // rbx
  int v19; // ebx
  __int64 result; // rax
  int v21; // r9d
  int v22; // eax
  unsigned __int64 v23; // r13
  unsigned int v24; // ebp
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r8
  int v28; // r10d
  volatile void *Address; // r11
  int v30; // r10d
  volatile void *Length; // r11
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+60h] [rbp-A8h]
  int v34; // [rsp+68h] [rbp-A0h]
  __int64 v35[2]; // [rsp+70h] [rbp-98h] BYREF
  char v36; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v37[120]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+110h] [rbp+8h]
  int v40; // [rsp+120h] [rbp+18h] BYREF
  __int64 v41; // [rsp+128h] [rbp+20h] BYREF

  v3 = a2;
  v33 = a2;
  v4 = 0LL;
  v5 = 5LL * a2;
  Src = (unsigned int *)a1[3];
  v7 = MEMORY[0xFFFFF78000000320];
  v8 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324];
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v10 = *(unsigned __int16 *)(*a1 + 30LL);
  v11 = *(_QWORD *)(*a1 + 32LL);
  *Src = 3;
  v38 = v10;
  v34 = (v8 << 8) + v9;
  *((_QWORD *)Src + 1) = (8 * (v10 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v7, &v41);
  v12 = 0;
  if ( (*(_DWORD *)(v11 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      Src[1] = 0;
      if ( v12 >= *(_DWORD *)(v11 + 8 * v5 + 12) >> 1 )
        break;
      do
      {
        v13 = v12++;
        v14 = *(_QWORD *)(v11 + 8 * v5 + 16) + 48 * v13;
        v15 = *(_QWORD *)(v14 + 8);
        v16 = v14;
        if ( (*(_DWORD *)v14 & 0x10) == 0 )
          v16 = v4;
        v4 = v16;
        if ( v15 )
        {
          *(_QWORD *)&Src[2 * Src[1]++ + 4] = v15;
          if ( Src[1] >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( v12 < *(_DWORD *)(v11 + 8 * v5 + 12) >> 1 );
      if ( !Src[1] )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v10)) < 0x80 )
      {
LABEL_41:
        v19 = -1073741248;
        goto LABEL_15;
      }
      LODWORD(NumberOfBytes) = 8 * v30 + 16;
      v19 = IopXxxControlFile(
              *(HANDLE *)((v3 << 6) + a1[2]),
              (__int64)v35,
              590112,
              Src,
              NumberOfBytes,
              Length,
              (ULONG)Length,
              (char)Length);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v19 < 0 )
        goto LABEL_15;
      if ( v19 == 259 )
        KeBugCheckEx(0x191u, 0x15C5uLL, 0LL, 0LL, 0LL);
      v10 = v38;
    }
    while ( v12 < *(_DWORD *)(v11 + 8 * v5 + 12) >> 1 );
    if ( v4 )
    {
      v23 = 0LL;
      v24 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v4 + 16) )
      {
        while ( 1 )
        {
          Src[1] = 0;
          if ( v24 >= *(_DWORD *)(v4 + 16) )
            break;
          do
          {
            v25 = *(_QWORD *)(v4 + 24);
            v26 = *(_QWORD *)(v25 + 16LL * v24);
            v27 = v26 + *(unsigned int *)(v25 + 16LL * v24 + 8);
            if ( v26 < v23 )
              v26 = v23;
            while ( v26 < v27 )
            {
              *(_QWORD *)&Src[2 * Src[1]++ + 4] = v26 >> 10;
              if ( Src[1] >= *((_DWORD *)a1 + 8) )
              {
                v23 = v26 + 4096;
                break;
              }
              v26 += 4096LL;
            }
            if ( Src[1] >= *((_DWORD *)a1 + 8) )
              break;
            ++v24;
          }
          while ( v24 < *(_DWORD *)(v4 + 16) );
          if ( !Src[1] )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v10)) < 0x80 )
          {
            goto LABEL_41;
          }
          LODWORD(NumberOfBytes) = 8 * v28 + 16;
          v19 = IopXxxControlFile(
                  *(HANDLE *)((v33 << 6) + a1[2]),
                  (__int64)v35,
                  590112,
                  Src,
                  NumberOfBytes,
                  Address,
                  (ULONG)Address,
                  (char)Address);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
          if ( v19 < 0 )
            goto LABEL_15;
          if ( v19 == 259 )
            KeBugCheckEx(0x191u, 0x162AuLL, 0LL, 0LL, 0LL);
          if ( v24 >= *(_DWORD *)(v4 + 16) )
            break;
          v10 = v38;
        }
      }
      LODWORD(v3) = v33;
    }
  }
  v17 = 0;
  if ( (*(_DWORD *)(v11 + 8 * v5 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v18 = (_DWORD *)(*(_QWORD *)(v11 + 8 * v5 + 16) + 48LL * v17);
      if ( (*v18 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v18, a2, (unsigned int)&v36, (__int64)v37, (__int64)&v40);
        v22 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v3 << 6),
                (_DWORD)v18,
                v21,
                (__int64)v37,
                v40);
        v19 = v22;
        if ( v22 < 0 )
        {
          if ( v22 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      ++v17;
    }
    while ( v17 < *(_DWORD *)(v11 + 8 * v5 + 12) >> 1 );
  }
  v19 = 0;
LABEL_15:
  result = (unsigned int)v19;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v34;
  return result;
}
