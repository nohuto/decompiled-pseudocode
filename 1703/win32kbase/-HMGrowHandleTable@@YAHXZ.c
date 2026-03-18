/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x1C0075754
 * Callers:
 *     HMAllocObject @ 0x1C0040370 (HMAllocObject.c)
 *     HMCreateHandleForObject @ 0x1C008B430 (HMCreateHandleForObject.c)
 *     HMInitHandleTable @ 0x1C01D73A0 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0075910 (CommitReadOnlyMemory.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 HMGrowHandleTable(void)
{
  char *v0; // rax
  _QWORD *v1; // r8
  __int64 v2; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _WORD *v6; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)gpsi + 1) == 65534LL )
    return 0LL;
  v0 = (char *)qword_1C0189E38 + *((unsigned int *)gpsi + 212);
  if ( v0 >= gpvSharedAlloc )
    return 0LL;
  v9 = 4096LL;
  if ( (int)CommitReadOnlyMemory(ghSectionShared, &v9, (unsigned int)((_DWORD)v0 - (_DWORD)gpvSharedBase), 0LL) < 0
    || (int)MmCommitSessionMappedView((char *)gpKernelHandleTable + 16 * *((_QWORD *)gpsi + 1), v9) < 0 )
  {
    return 0LL;
  }
  *((_DWORD *)gpsi + 212) += 4096;
  *((_QWORD *)gpsi + 1) = (unsigned __int64)*((unsigned int *)gpsi + 212) >> 5;
  v1 = gpsi;
  if ( *((_QWORD *)gpsi + 1) > 0xFFFEuLL )
  {
    *((_QWORD *)gpsi + 1) = 65534LL;
    v1 = gpsi;
  }
  v2 = gHandlePages;
  memset((char *)qword_1C0189E38 + 32 * gHandlePages, 0, 32LL * (v1[1] - gHandlePages));
  memset((char *)gpKernelHandleTable + 16 * v2, 0, 16 * (*((_QWORD *)gpsi + 1) - v2));
  v3 = gpsi;
  v4 = *((_QWORD *)gpsi + 1) - 1LL;
  v5 = (char *)gpKernelHandleTable + 16 * v4;
  if ( v4 >= v2 )
  {
    v6 = (char *)qword_1C0189E38 + 32 * *((_QWORD *)gpsi + 1) - 6;
    do
    {
      *v6 = 1;
      if ( (v4 & 1) != 0 )
      {
        *v5 = qword_1C018AE28;
        qword_1C018AE28 = v4;
      }
      else
      {
        *v5 = qword_1C018AE20;
        qword_1C018AE20 = v4;
      }
      --v4;
      v6 -= 16;
      v5 -= 2;
    }
    while ( v4 >= v2 );
    v3 = gpsi;
  }
  v7 = v3[1];
  result = 1LL;
  gHandlePages = v7;
  return result;
}
