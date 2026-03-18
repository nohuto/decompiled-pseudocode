/*
 * XREFs of PfSnGetCompletedTrace @ 0x140449F58
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140449D1C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(void *a1, SIZE_T Length, unsigned int *a3)
{
  unsigned int v4; // r12d
  char v6; // r14
  unsigned int *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // edi

  v4 = Length;
  v6 = 1;
  ExAcquireFastMutex(&Mutex);
  dword_14036E024 = 2;
  v7 = (unsigned int *)qword_14036DFD8;
  if ( qword_14036DFD8 == &qword_14036DFD8 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_14036DFD8 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_14036DFD8;
      if ( *((PVOID **)qword_14036DFD8 + 1) != &qword_14036DFD8 || *(PVOID *)(v9 + 8) != qword_14036DFD8 )
        __fastfail(3u);
      qword_14036DFD8 = *(PVOID *)qword_14036DFD8;
      *(_QWORD *)(v9 + 8) = &qword_14036DFD8;
      --dword_14036E020;
      KeReleaseGuardedMutex(&Mutex);
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
    KeReleaseGuardedMutex(&Mutex);
  return v10;
}
