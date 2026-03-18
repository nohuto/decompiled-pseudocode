/*
 * XREFs of PfSnGetCompletedTrace @ 0x140573A84
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140573844 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r15
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&stru_1403CD868);
  dword_1403CD8A4 = 2;
  v7 = (unsigned int *)qword_1403CD858;
  if ( qword_1403CD858 == &qword_1403CD858 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_1403CD858 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_1403CD858;
      if ( *((PVOID **)qword_1403CD858 + 1) != &qword_1403CD858 || *(PVOID *)(v9 + 8) != qword_1403CD858 )
        __fastfail(3u);
      qword_1403CD858 = *(PVOID *)qword_1403CD858;
      *(_QWORD *)(v9 + 8) = &qword_1403CD858;
      --dword_1403CD8A0;
      KeReleaseGuardedMutex(&stru_1403CD868);
      v6 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, v4, 8u);
      memmove(a1, v7 + 4, v7[6]);
      *a3 = v7[6];
      ExFreePoolWithTag(v7, 0);
      v10 = 0;
    }
  }
  if ( v6 )
    KeReleaseGuardedMutex(&stru_1403CD868);
  return v10;
}
