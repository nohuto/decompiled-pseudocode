/*
 * XREFs of MmAddVerifierThunks @ 0x1406B4680
 * Callers:
 *     NtSetSystemInformation @ 0x140562590 (NtSetSystemInformation.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x140773F3C (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // ebx
  _QWORD *v6; // r14
  struct _KTHREAD *Lock; // rsi
  PVOID *v8; // rax
  PVOID *v9; // r8
  char *v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  PVOID *v13; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rax
  NTSTATUS v16; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  Lock = MmAcquireLoadLock();
  v8 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 1);
  v9 = v8;
  if ( v8 )
  {
    v10 = (char *)v8[6];
    v11 = *((unsigned int *)v8 + 16);
    v12 = 0;
    v13 = (PVOID *)PsLoadedModuleList;
    v14 = &v10[v11];
    while ( 1 )
    {
      if ( v13 == &PsLoadedModuleList )
        goto LABEL_11;
      if ( v9 == v13 )
        break;
      v13 = (PVOID *)*v13;
      if ( (unsigned int)++v12 >= 2 )
      {
LABEL_11:
        while ( *v6 >= (unsigned __int64)v10 )
        {
          if ( *v6 >= (unsigned __int64)v14 )
            break;
          v15 = v6[1];
          if ( v15 < (unsigned __int64)v10 || v15 >= (unsigned __int64)v14 )
            break;
          v6 += 2;
          if ( ++v5 >= ThunkBufferSize >> 4 )
          {
            v16 = VfThunkAddDriverThunks(ThunkBuffer, ThunkBufferSize);
            goto LABEL_17;
          }
        }
        v16 = -1073741584;
LABEL_17:
        MmReleaseLoadLock((__int64)Lock);
        return v16;
      }
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741584;
}
