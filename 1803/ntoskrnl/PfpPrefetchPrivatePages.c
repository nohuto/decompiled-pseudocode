/*
 * XREFs of PfpPrefetchPrivatePages @ 0x1405E85E4
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140491840 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x1400466E0 (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140106490 (MmQueryMemoryListInformation.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404BB98C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x1404BBA90 (PfpGetPageListCount.c)
 *     MmPrefetchVirtualMemory @ 0x14052C778 (MmPrefetchVirtualMemory.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     PfpSourceGetPrefetchSupport @ 0x1405E883C (PfpSourceGetPrefetchSupport.c)
 *     PfpSourceBuildVaArray @ 0x1405E89B0 (PfpSourceBuildVaArray.c)
 */

__int64 __fastcall PfpPrefetchPrivatePages(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r15
  int v3; // r13d
  int v4; // edx
  int v5; // r8d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r12d
  __int64 v10; // rsi
  char *v11; // rdi
  __int64 v12; // r14
  int PrefetchSupport; // eax
  __int64 v14; // r9
  __int64 *v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 result; // rax
  unsigned int v22; // eax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+48h] [rbp-30h] BYREF
  PVOID P; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-18h]
  int v31; // [rsp+C8h] [rbp+50h]
  int v32; // [rsp+D0h] [rbp+58h]
  unsigned int v33; // [rsp+D8h] [rbp+60h]

  v1 = *a1;
  v26 = 0LL;
  v2 = a1;
  P = 0LL;
  v3 = 0;
  v33 = *(unsigned __int16 *)(*a1 + 30);
  v4 = *(_DWORD *)(*a1 + 28);
  v25 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v5 = *(_DWORD *)(v1 + 80);
  v6 = (8 * (v33 & 7)) | v4 & 7;
  v7 = v6 | 0x100;
  if ( (v5 & 0x10) != 0 )
    v7 = v6;
  v8 = v7 | 0x200;
  if ( (v5 & 8) == 0 )
    v8 = v7;
  v9 = v8 | 0x800;
  if ( (v5 & 0x20) == 0 )
    v9 = v8;
  v10 = 0LL;
  v32 = v9;
  v31 = 0;
  if ( !*(_DWORD *)(v1 + 20) )
  {
LABEL_26:
    v20 = 0;
    goto LABEL_27;
  }
  while ( 1 )
  {
    v11 = 0LL;
    v28 = 0LL;
    Handle = 0LL;
    if ( PfpCheckPrefetchAbort(v2) )
    {
      v3 = 1;
    }
    else
    {
      v12 = *(_QWORD *)(v1 + 56) + 40 * v10;
      if ( (int)PfpSourceBuildVaArray(v12, &v26) >= 0 )
      {
        PrefetchSupport = PfpSourceGetPrefetchSupport(v12, &v28);
        v11 = (char *)Handle;
        if ( PrefetchSupport >= 0 )
        {
          if ( (*(_DWORD *)(v1 + 80) & 4) == 0 )
          {
            v22 = v26;
            *(_DWORD *)(v1 + 104) += v26;
            MmPrefetchVirtualMemory(v11, v22, (__int64)P, v9);
LABEL_21:
            ++*(_DWORD *)(v1 + 92);
            goto LABEL_22;
          }
          v15 = v2 + 6;
          v16 = v26;
          v24 = (char *)P;
          MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)v2 + 3, 0xB0u, v14, &v23);
          if ( !v16 )
            goto LABEL_21;
          while ( !PfpCheckPrefetchAbort(v2)
               && (unsigned __int64)(*v15 + v15[1] + PfpGetPageListCount((__int64)(v15 + 5), 0, v33)) >= 0x80 )
          {
            v17 = v16;
            if ( v16 > 0x10 )
              v17 = 16;
            if ( MmPrefetchVirtualMemory(v11, v17, (__int64)v24, v32) >= 0 )
              *(_DWORD *)(v1 + 104) += v17;
            PfpUpdateRepurposedByPrefetch(v15, v17, v18, v19);
            v24 += 16 * v17;
            v16 -= v17;
            v2 = a1;
            if ( !v16 )
            {
              LODWORD(v10) = v31;
              goto LABEL_21;
            }
          }
          LODWORD(v10) = v31;
          v3 = 1;
        }
      }
    }
LABEL_22:
    if ( v11 )
      NtClose(v11);
    if ( v3 )
      break;
    v9 = v32;
    v10 = (unsigned int)(v10 + 1);
    v31 = v10;
    if ( (unsigned int)v10 >= *(_DWORD *)(v1 + 20) )
      goto LABEL_26;
  }
  v20 = -1073741248;
LABEL_27:
  if ( P )
    ExFreePoolWithTag(P, 0);
  result = v20;
  *(_DWORD *)(*v2 + 120) += ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
                          + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
                          - v25;
  return result;
}
