/*
 * XREFs of PfpVolumePrefetchMetadata @ 0x1404401F8
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14043FA98 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400020BC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140103060 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     PfpPrefetchDirectoryStream @ 0x140440598 (PfpPrefetchDirectoryStream.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404432A8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1404433AC (PfpGetPageListCount.c)
 *     PfpFileSetupObjectAttributes @ 0x140443424 (PfpFileSetupObjectAttributes.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 */

__int64 __fastcall PfpVolumePrefetchMetadata(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned int *Src; // rsi
  __int64 v6; // r9
  int v7; // r8d
  unsigned __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  _DWORD *v17; // rbx
  int v18; // ebx
  __int64 result; // rax
  int v20; // r9d
  int v21; // eax
  unsigned __int64 v22; // r13
  unsigned int v23; // r14d
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned int v27; // r10d
  int v28; // r10d
  int v29; // r10d
  __int64 v30; // r11
  SIZE_T v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-A8h]
  int v33; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v34[2]; // [rsp+70h] [rbp-98h] BYREF
  char v35; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v36[120]; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v37; // [rsp+110h] [rbp+8h]
  int v39; // [rsp+120h] [rbp+18h] BYREF
  __int64 v40; // [rsp+128h] [rbp+20h] BYREF

  v32 = a2;
  v3 = 0LL;
  v4 = 5LL * a2;
  Src = (unsigned int *)a1[3];
  v6 = MEMORY[0xFFFFF78000000320];
  v7 = MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324];
  v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v9 = *(unsigned __int16 *)(*a1 + 30LL);
  v10 = *(_QWORD *)(*a1 + 32LL);
  *Src = 3;
  v37 = v9;
  v33 = (v7 << 8) + v8;
  *((_QWORD *)Src + 1) = (8 * (v9 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
    MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v6, &v40);
  v11 = 0LL;
  if ( (*(_DWORD *)(v10 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      Src[1] = 0;
      if ( (unsigned int)v11 >= *(_DWORD *)(v10 + 8 * v4 + 12) >> 1 )
        break;
      do
      {
        v12 = 3 * v11;
        v11 = (unsigned int)(v11 + 1);
        v13 = *(_QWORD *)(v10 + 8 * v4 + 16) + 16 * v12;
        v14 = *(_QWORD *)(v13 + 8);
        v15 = v13;
        if ( (*(_DWORD *)v13 & 0x10) == 0 )
          v15 = v3;
        v3 = v15;
        if ( v14 )
        {
          *(_QWORD *)&Src[2 * Src[1]++ + 4] = v14;
          if ( Src[1] >= *((_DWORD *)a1 + 8) )
            break;
        }
      }
      while ( (unsigned int)v11 < *(_DWORD *)(v10 + 8 * v4 + 12) >> 1 );
      if ( !Src[1] )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
      {
LABEL_52:
        v18 = -1073741248;
        goto LABEL_15;
      }
      LODWORD(v31) = 0;
      v18 = IopXxxControlFile(*(HANDLE *)((v30 << 6) + a1[2]), (__int64)v34, 590112, Src, 8 * v29 + 16, 0LL, v31, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v18 < 0 )
        goto LABEL_15;
      if ( v18 == 259 )
        KeBugCheckEx(0x191u, 0x15C5uLL, 0LL, 0LL, 0LL);
      v9 = v37;
    }
    while ( (unsigned int)v11 < *(_DWORD *)(v10 + 8 * v4 + 12) >> 1 );
    if ( v3 )
    {
      v22 = 0LL;
      v23 = 0;
      ++*(_DWORD *)(*a1 + 88LL);
      if ( *(_DWORD *)(v3 + 16) )
      {
        while ( 1 )
        {
          Src[1] = 0;
          if ( v23 >= *(_DWORD *)(v3 + 16) )
            break;
          do
          {
            v24 = *(_QWORD *)(v3 + 24);
            v25 = *(_QWORD *)(v24 + 16LL * v23);
            v26 = v25 + *(unsigned int *)(v24 + 16LL * v23 + 8);
            if ( v25 < v22 )
              v25 = v22;
            while ( v25 < v26 )
            {
              *(_QWORD *)&Src[2 * Src[1]++ + 4] = v25 >> 10;
              if ( Src[1] >= *((_DWORD *)a1 + 8) )
              {
                v22 = v25 + 4096;
                break;
              }
              v25 += 4096LL;
            }
            v27 = Src[1];
            if ( v27 >= *((_DWORD *)a1 + 8) )
              break;
            ++v23;
          }
          while ( v23 < *(_DWORD *)(v3 + 16) );
          if ( !v27 )
            break;
          if ( PfpCheckPrefetchAbort(a1)
            || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
            && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v9)) < 0x80 )
          {
            goto LABEL_52;
          }
          LODWORD(v31) = 0;
          v18 = IopXxxControlFile(*(HANDLE *)((v32 << 6) + a1[2]), (__int64)v34, 590112, Src, 8 * v28 + 16, 0LL, v31, 0);
          if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
            PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
          if ( v18 < 0 )
            goto LABEL_15;
          if ( v18 == 259 )
            KeBugCheckEx(0x191u, 0x162AuLL, 0LL, 0LL, 0LL);
          if ( v23 >= *(_DWORD *)(v3 + 16) )
            break;
          v9 = v37;
        }
      }
    }
  }
  v16 = 0LL;
  if ( (*(_DWORD *)(v10 + 8 * v4 + 12) & 0xFFFFFFFE) != 0 )
  {
    do
    {
      v17 = (_DWORD *)(*(_QWORD *)(v10 + 8 * v4 + 16) + 48 * v16);
      if ( (*v17 & 2) != 0 )
      {
        PfpFileSetupObjectAttributes((_DWORD)a1, (_DWORD)v17, a2, (unsigned int)&v35, (__int64)v36, (__int64)&v39);
        v21 = PfpPrefetchDirectoryStream(
                (_DWORD)a1,
                *((_DWORD *)a1 + 4) + ((_DWORD)v32 << 6),
                (_DWORD)v17,
                v20,
                (__int64)v36,
                v39);
        v18 = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741248 )
            goto LABEL_15;
        }
        else
        {
          ++*(_DWORD *)(*a1 + 88LL);
        }
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < *(_DWORD *)(v10 + 8 * v4 + 12) >> 1 );
  }
  v18 = 0;
LABEL_15:
  result = (unsigned int)v18;
  *(_DWORD *)(*a1 + 108LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v33;
  return result;
}
