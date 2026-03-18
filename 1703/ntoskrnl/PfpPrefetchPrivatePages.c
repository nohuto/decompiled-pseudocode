/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1405789F4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1404636DC (PfpPrefetchRequestPerform.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     PfpCheckPrefetchAbort @ 0x14010AF88 (PfpCheckPrefetchAbort.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MmPrefetchVirtualMemory @ 0x1404C9B00 (MmPrefetchVirtualMemory.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14053D234 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x14053D344 (PfpGetPageListCount.c)
 *     PfpSourceGetPrefetchSupport @ 0x140578C50 (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x140578DC4 (PfpSourceBuildVaArray.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // r8
  int v3; // r12d
  int v4; // ebx
  int v5; // eax
  __int64 v6; // r14
  __int64 v7; // rax
  char *v8; // rsi
  __int64 v9; // r15
  int PrefetchSupport; // eax
  __int64 v11; // r9
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 result; // rax
  unsigned int v18; // eax
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  char *v20; // [rsp+38h] [rbp-40h]
  __int64 v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+50h] [rbp-28h]
  __int64 v24; // [rsp+58h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-18h]
  int v27; // [rsp+C8h] [rbp+50h]
  int v28; // [rsp+D0h] [rbp+58h]
  unsigned int v29; // [rsp+D8h] [rbp+60h]

  v1 = *a1;
  v22 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v27 = 0;
  v29 = *(unsigned __int16 *)(*a1 + 30LL);
  v4 = (8 * (v29 & 7)) | *(_DWORD *)(*a1 + 28LL) & 7;
  v21 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  if ( (v5 & 0x10) == 0 )
    v4 |= 0x100u;
  if ( (v5 & 8) != 0 )
    v4 |= 0x200u;
  if ( (v5 & 0x20) != 0 )
    v4 |= 0x800u;
  v6 = 0LL;
  v28 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_26:
    v16 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v1 + 56);
    v8 = 0LL;
    v24 = 0LL;
    Handle = 0LL;
    v9 = v7 + 40 * v6;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
      v27 = 1;
    }
    else if ( (int)PfpSourceBuildVaArray(v9, &v22) >= 0 )
    {
      PrefetchSupport = PfpSourceGetPrefetchSupport(v9, &v24);
      v8 = (char *)Handle;
      if ( PrefetchSupport >= 0 )
      {
        if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
        {
          v18 = v22;
          *(_DWORD *)(v1 + 104) += v22;
          MmPrefetchVirtualMemory(v8, v18, (__int64)P, v4);
LABEL_21:
          ++*(_DWORD *)(v1 + 92);
          goto LABEL_22;
        }
        v12 = v22;
        v20 = (char *)P;
        MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v11, &v19);
        if ( !v12 )
          goto LABEL_21;
        while ( !PfpCheckPrefetchAbort(a1)
             && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount((__int64)(a1 + 11), 0, v29)) >= 0x80 )
        {
          v13 = v12;
          if ( v12 > 0x10 )
            v13 = 16;
          if ( MmPrefetchVirtualMemory(v8, v13, (__int64)v20, v4) >= 0 )
            *(_DWORD *)(v1 + 104) += v13;
          PfpUpdateRepurposedByPrefetch((_OWORD *)a1 + 3, v13, v14, v15);
          v20 += 16 * v13;
          v12 -= v13;
          if ( !v12 )
          {
            LODWORD(v6) = v28;
            v3 = v27;
            goto LABEL_21;
          }
        }
        LODWORD(v6) = v28;
        v3 = 1;
        v27 = 1;
      }
    }
LABEL_22:
    if ( v8 )
      NtClose(v8);
    if ( v3 )
      break;
    v6 = (unsigned int)(v6 + 1);
    v28 = v6;
    if ( (unsigned int)v6 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_26;
    v2 = a1;
  }
  v16 = -1073741248;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v16;
  *(_DWORD *)(*a1 + 120LL) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                            + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                            - v21;
  return result;
}
