/*
 * XREFs of PspInitializeProtectedProcessParameters @ 0x140649280
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 *     PspInitPhase2 @ 0x1408C12D4 (PspInitPhase2.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspInitializeProtectedProcessParameters(__int64 a1)
{
  unsigned __int16 v2; // ax
  _WORD *PoolWithTag; // rax
  char *v4; // rdi
  char *v5; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  *(_OWORD *)(a1 + 992) = *(_OWORD *)(a1 + 1048);
  v7 = *(_OWORD *)(a1 + 1048);
  v2 = 2 * (*(_WORD *)(a1 + 1048) + 42);
  *(_WORD *)(a1 + 1008) = v2;
  v2 += 2;
  *(_WORD *)(a1 + 1010) = v2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x6C537350u);
  *(_QWORD *)(a1 + 1016) = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_QWORD *)PoolWithTag = *(_QWORD *)L"Path=";
  PoolWithTag[4] = aPath[4];
  v4 = (char *)(PoolWithTag + 5);
  memmove(PoolWithTag + 5, *(const void **)(a1 + 1056), *(unsigned __int16 *)(a1 + 1048));
  v5 = &v4[*(unsigned __int16 *)(a1 + 1048)];
  *(_OWORD *)v5 = *(_OWORD *)L"\\System32";
  *((_WORD *)v5 + 8) = aSystem32[8];
  v5 += 18;
  *(_WORD *)v5 = 0;
  v5 += 2;
  *(_OWORD *)v5 = *(_OWORD *)L"SystemDrive=";
  *((_QWORD *)v5 + 2) = *(_QWORD *)L"ive=";
  *((_DWORD *)v5 + 6) = **((_DWORD **)&v7 + 1);
  v5 += 28;
  *(_WORD *)v5 = 0;
  v5 += 2;
  *(_OWORD *)v5 = *(_OWORD *)L"SystemRoot=";
  *((_DWORD *)v5 + 4) = *(_DWORD *)L"ot=";
  *((_WORD *)v5 + 10) = aSystemroot_8[10];
  memmove(v5 + 22, *(const void **)(a1 + 1056), *(unsigned __int16 *)(a1 + 1048));
  *(_DWORD *)&v5[*(unsigned __int16 *)(a1 + 1048) + 22] = 0;
  return 0LL;
}
