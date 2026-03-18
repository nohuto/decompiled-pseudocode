/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x14074B4B0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14013F6A8 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1405BC7A0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1405BC900 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140823A70 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v7; // edi
  struct _KTHREAD *Lock; // rsi
  __int64 v9; // rax
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 *v13; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v7 = 0;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  Lock = MmAcquireLoadLock();
  v9 = MiLookupDataTableEntry(EntryRoutine, 0LL);
  if ( !v9 )
  {
    v10 = -1073741585;
LABEL_15:
    MmReleaseLoadLock((__int64)Lock);
    return v10;
  }
  v11 = *(_QWORD *)(v9 + 48);
  if ( retaddr >= v11 )
  {
    v12 = v11 + *(unsigned int *)(v9 + 64);
    if ( retaddr < v12 )
    {
      v13 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
      while ( *v13 >= v11 && *v13 < v12 )
      {
        v13 += 2;
        if ( ++v7 >= ThunkBufferSize >> 4 )
        {
          v10 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize);
          goto LABEL_15;
        }
      }
      v10 = -1073741584;
      goto LABEL_15;
    }
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741585;
}
