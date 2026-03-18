/*
 * XREFs of ?HMGrowHandleTable@@YAHXZ @ 0x1C0006C54
 * Callers:
 *     HMAllocObject @ 0x1C003E6C0 (HMAllocObject.c)
 *     HMCreateHandleForObject @ 0x1C0091B60 (HMCreateHandleForObject.c)
 *     HMInitHandleTable @ 0x1C01DD870 (HMInitHandleTable.c)
 * Callees:
 *     CommitReadOnlyMemory @ 0x1C0006E20 (CommitReadOnlyMemory.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 HMGrowHandleTable(void)
{
  char *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  _QWORD *v3; // r8
  _WORD *v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)gpsi + 1) == 65534LL )
    return 0LL;
  v0 = (char *)qword_1C018E9B8 + *((unsigned int *)gpsi + 212);
  if ( v0 >= gpvSharedAlloc )
    return 0LL;
  v6 = 4096LL;
  if ( (int)CommitReadOnlyMemory(ghSectionShared, &v6, (unsigned int)((_DWORD)v0 - (_DWORD)gpvSharedBase), 0LL) < 0
    || (int)MmCommitSessionMappedView((char *)gpKernelHandleTable + 24 * *((_QWORD *)gpsi + 1), v6) < 0 )
  {
    return 0LL;
  }
  *((_DWORD *)gpsi + 212) += 4096;
  *((_QWORD *)gpsi + 1) = (unsigned __int64)*((unsigned int *)gpsi + 212) >> 5;
  if ( *((_QWORD *)gpsi + 1) > 0xFFFEuLL )
    *((_QWORD *)gpsi + 1) = 65534LL;
  v1 = gHandlePages;
  memset((char *)qword_1C018E9B8 + 32 * gHandlePages, 0, 32LL * (*((_QWORD *)gpsi + 1) - gHandlePages));
  memset((char *)gpKernelHandleTable + 24 * v1, 0, 24 * (*((_QWORD *)gpsi + 1) - v1));
  v2 = *((_QWORD *)gpsi + 1) - 1LL;
  v3 = (char *)gpKernelHandleTable + 24 * v2;
  if ( v2 >= v1 )
  {
    v4 = (char *)qword_1C018E9B8 + 32 * *((_QWORD *)gpsi + 1) - 6;
    do
    {
      *v4 = 1;
      if ( (v2 & 1) != 0 )
      {
        *v3 = qword_1C018FA78;
        qword_1C018FA78 = v2;
      }
      else
      {
        *v3 = qword_1C018FA70;
        qword_1C018FA70 = v2;
      }
      --v2;
      v4 -= 16;
      v3 -= 3;
    }
    while ( v2 >= v1 );
  }
  result = 1LL;
  gHandlePages = *((_QWORD *)gpsi + 1);
  return result;
}
