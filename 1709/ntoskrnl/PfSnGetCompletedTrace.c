/*
 * XREFs of PfSnGetCompletedTrace @ 0x140448E24
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140448D5C (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
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
  dword_140389D64 = 2;
  v7 = (unsigned int *)qword_140389D18;
  if ( qword_140389D18 == &qword_140389D18 )
  {
    v10 = -2147483622;
  }
  else
  {
    v8 = *((_DWORD *)qword_140389D18 + 6);
    if ( v8 > v4 )
    {
      *a3 = v8;
      v10 = -1073741789;
    }
    else
    {
      v9 = *(_QWORD *)qword_140389D18;
      if ( *((PVOID **)qword_140389D18 + 1) != &qword_140389D18 || *(PVOID *)(v9 + 8) != qword_140389D18 )
        __fastfail(3u);
      qword_140389D18 = *(PVOID *)qword_140389D18;
      *(_QWORD *)(v9 + 8) = &qword_140389D18;
      --dword_140389D60;
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
