/*
 * XREFs of MmAddVerifierThunks @ 0x14074B5B0
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     VfThunkAddDriverThunks @ 0x1408239EC (VfThunkAddDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierThunks(PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v5; // ebx
  unsigned __int64 *v6; // r14
  struct _KTHREAD *Lock; // rsi
  __int64 v8; // rax
  PVOID *v9; // r8
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int v12; // ecx
  PVOID *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  NTSTATUS v16; // ebx

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v5 = 0;
  v6 = (unsigned __int64 *)ThunkBuffer;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741585;
  Lock = MmAcquireLoadLock();
  v8 = MiLookupDataTableEntry(*(_QWORD *)ThunkBuffer, 0LL);
  v9 = (PVOID *)v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 48);
    v11 = *(unsigned int *)(v8 + 64);
    v12 = 0;
    v13 = (PVOID *)PsLoadedModuleList;
    v14 = v10 + v11;
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
        while ( *v6 >= v10 )
        {
          if ( *v6 >= v14 )
            break;
          v15 = v6[1];
          if ( v15 < v10 || v15 >= v14 )
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
