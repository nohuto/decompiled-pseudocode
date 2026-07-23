/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180051B90
 * Callers:
 *     sub_1800527EC @ 0x1800527EC (sub_1800527EC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180050C68 @ 0x180050C68 (sub_180050C68.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180051CBC @ 0x180051CBC (sub_180051CBC.c)
 *     sub_180051D04 @ 0x180051D04 (sub_180051D04.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180104D80 @ 0x180104D80 (sub_180104D80.c)
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
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // ebp
  int v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (unsigned int *)(a1 + 72);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  v4 = sub_180051CBC(a1 + 72);
  if ( v4 )
    goto LABEL_18;
  v5 = v3[1];
  v6 = *v3;
  v17 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015C350);
  v10 = v5 - 1;
  if ( !v10 )
  {
    v14 = sub_180051D04(v8, &v18, &v17, v3);
    goto LABEL_10;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    v14 = sub_180051190(v8, v7, v9, (__int64)v3);
    goto LABEL_10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v14 = sub_180050FCC(v6, &v18, &v17, (__int64)v3);
    goto LABEL_10;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    v14 = sub_180104D80(v6, &v18, &v17, v3);
    goto LABEL_10;
  }
  if ( v13 == 1 )
  {
    v14 = sub_180050C68(v6, &v18, &v17, (__int64)v3);
LABEL_10:
    v4 = v14;
    goto LABEL_11;
  }
  v4 = 87;
LABEL_11:
  RtlReleaseSRWLockExclusive(&stru_18015C350);
  if ( v4 )
  {
LABEL_18:
    v15 = 76;
    goto LABEL_13;
  }
  v15 = *v3 + 72;
LABEL_13:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v15;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v4 )
    *v3 = v4;
  return 0LL;
}
