/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180004A40
 * Callers:
 *     sub_180005CCC @ 0x180005CCC (sub_180005CCC.c)
 * Callees:
 *     sub_18000469C @ 0x18000469C (sub_18000469C.c)
 *     sub_18000499C @ 0x18000499C (sub_18000499C.c)
 *     sub_180004B48 @ 0x180004B48 (sub_180004B48.c)
 *     sub_1800051E4 @ 0x1800051E4 (sub_1800051E4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_180106ED0 @ 0x180106ED0 (sub_180106ED0.c)
 *     sub_180107460 @ 0x180107460 (sub_180107460.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  unsigned int *v3; // rdi
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // ebp
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v4 = sub_180004B48(a1 + 72);
  if ( v4 )
    goto LABEL_14;
  v5 = v3[1];
  v6 = *v3;
  v18 = 0;
  v17 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015D388);
  v10 = v5 - 1;
  if ( !v10 )
  {
    v11 = sub_1800051E4(v8, &v18, &v17, v3);
LABEL_5:
    v4 = v11;
    goto LABEL_6;
  }
  v14 = v10 - 1;
  if ( !v14 )
  {
    v11 = sub_18000469C(v8, v7, v9, (__int64)v3);
    goto LABEL_5;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v11 = sub_18000499C(v6, &v18, &v17, (__int64)v3);
    goto LABEL_5;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v11 = sub_180107460(v6, &v18, &v17, v3);
    goto LABEL_5;
  }
  if ( v16 == 1 )
  {
    v11 = sub_180106ED0(v6, &v18, &v17, v3);
    goto LABEL_5;
  }
  v4 = 87;
LABEL_6:
  RtlReleaseSRWLockExclusive(&stru_18015D388);
  if ( v4 )
  {
LABEL_14:
    v12 = 76;
    goto LABEL_8;
  }
  v12 = *v3 + 72;
LABEL_8:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v12;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}
