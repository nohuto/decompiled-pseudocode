/*
 * XREFs of PfpPrefetchFilesTrickle @ 0x140442F2C
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14043FA98 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400020BC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140103060 (MmQueryMemoryListInformation.c)
 *     PfpReadSupportInitialize @ 0x14012B044 (PfpReadSupportInitialize.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     PfpFileBuildReadSupport @ 0x140441A30 (PfpFileBuildReadSupport.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404432A8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1404433AC (PfpGetPageListCount.c)
 *     PfpReadSupportCleanup @ 0x1404433C8 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x14048E088 (MmPrefetchPagesEx.c)
 */

__int64 __fastcall PfpPrefetchFilesTrickle(_QWORD *a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r14d
  int *v7; // r14
  int v8; // eax
  char v9; // r12
  __int64 v10; // r9
  __int64 v11; // rbp
  unsigned int v12; // r13d
  unsigned int v13; // r10d
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  bool v17; // cf
  __int64 result; // rax
  unsigned int v19; // [rsp+30h] [rbp-B8h]
  unsigned int v20; // [rsp+34h] [rbp-B4h]
  __int64 v21; // [rsp+38h] [rbp-B0h]
  __int64 v22; // [rsp+40h] [rbp-A8h]
  __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-98h] BYREF
  __int64 v25; // [rsp+58h] [rbp-90h]
  _QWORD v26[17]; // [rsp+60h] [rbp-88h] BYREF
  char v27; // [rsp+F0h] [rbp+8h]
  int v28; // [rsp+F8h] [rbp+10h]
  unsigned int v29; // [rsp+100h] [rbp+18h]
  unsigned int v30; // [rsp+108h] [rbp+20h]

  v1 = *a1;
  v3 = 0;
  v4 = 0;
  v27 = 0;
  v29 = 0;
  v30 = *(unsigned __int16 *)(*a1 + 30LL);
  v25 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  while ( v4 < *(_DWORD *)(v1 + 8) )
  {
    if ( (*(_QWORD *)(((unsigned __int64)v4 << 6) + a1[2] + 24) & 0x400000000LL) == 0 )
      goto LABEL_27;
    v5 = *(_QWORD *)(v1 + 32);
    v22 = 5LL * v4;
    v6 = 0;
    v20 = 0;
    v21 = v5;
    if ( (*(_DWORD *)(v5 + 40LL * v4 + 12) & 0xFFFFFFFE) == 0 )
      goto LABEL_27;
    do
    {
      v7 = (int *)(*(_QWORD *)(v5 + 8 * v22 + 16) + 48LL * v6);
      v8 = *v7;
      if ( (*v7 & 2) != 0 || !v7[4] )
        goto LABEL_26;
      v9 = 0;
      while ( v9 )
      {
        if ( (v8 & 1) != 0 )
          goto LABEL_9;
LABEL_23:
        v17 = v9++ == -1;
        if ( !v17 && v9 != 1 )
          goto LABEL_24;
      }
      if ( (v8 & 1) != 0 )
        goto LABEL_23;
LABEL_9:
      PfpReadSupportInitialize((char *)v26);
      if ( (int)PfpFileBuildReadSupport(a1, v7, v4, v9, (__int64)v26) >= 0 )
      {
        v11 = v26[0];
        v24 = v26[0];
        *(_QWORD *)v26[0] = v26[2];
        v12 = 0;
        v19 = *(_DWORD *)(v11 + 8);
        v28 = 0;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v10, &v23);
        if ( v19 )
        {
          while ( !PfpCheckPrefetchAbort(a1)
               && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL, v30)) >= 0x80 )
          {
            if ( v12 + 16 > v13 )
              *(_DWORD *)(v11 + 8) = v13 - v12;
            else
              *(_DWORD *)(v11 + 8) = 16;
            memmove((void *)(v11 + 16), (const void *)(v11 + 16 + 8LL * v12), 8LL * *(unsigned int *)(v11 + 8));
            *(_QWORD *)(v11 + 16) |= (8 * (v30 & 7)) | (unsigned __int64)(*(_DWORD *)(*a1 + 28LL) & 7);
            v14 = MmPrefetchPagesEx(1LL, &v24, 0LL);
            PfpUpdateRepurposedByPrefetch(a1 + 6, *(unsigned int *)(v11 + 8));
            v15 = v28;
            if ( v14 >= 0 )
            {
              v16 = *(_DWORD *)(v11 + 8);
              v15 = v16 + v28;
              v12 += v16;
              v28 += v16;
              if ( v12 < v19 )
                continue;
            }
            v4 = v29;
            goto LABEL_18;
          }
          v4 = v29;
          v15 = v28;
          v27 = 1;
        }
        else
        {
          v15 = 0;
        }
LABEL_18:
        if ( v9 )
          *(_DWORD *)(v1 + 100) += v15;
        else
          *(_DWORD *)(v1 + 96) += v15;
      }
      PfpReadSupportCleanup(a1[5], v26);
      if ( v27 || PfpCheckPrefetchAbort(a1) )
      {
        v3 = -1073741248;
        goto LABEL_28;
      }
      v8 = *v7;
      if ( (*v7 & 8) == 0 )
        goto LABEL_23;
LABEL_24:
      v5 = v21;
      if ( (*v7 & 8) == 0 )
        ++*(_DWORD *)(v1 + 84);
LABEL_26:
      v6 = v20 + 1;
      v20 = v6;
    }
    while ( v6 < *(_DWORD *)(v5 + 8 * v22 + 12) >> 1 );
LABEL_27:
    v29 = ++v4;
  }
LABEL_28:
  result = v3;
  *(_DWORD *)(*a1 + 112LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v25;
  return result;
}
