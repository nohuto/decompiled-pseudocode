/*
 * XREFs of MmAddVerifierSpecialThunks @ 0x1406B4580
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14006CE70 (MiLookupDataTableEntry.c)
 *     MmReleaseLoadLock @ 0x1404B2930 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404B2970 (MmAcquireLoadLock.c)
 *     VfThunkAddSpecialDriverThunks @ 0x140773FC0 (VfThunkAddSpecialDriverThunks.c)
 */

NTSTATUS __stdcall MmAddVerifierSpecialThunks(ULONG_PTR EntryRoutine, PVOID ThunkBuffer, ULONG ThunkBufferSize)
{
  int v7; // edi
  struct _KTHREAD *Lock; // rsi
  PVOID *v9; // rax
  PVOID *v10; // r9
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 *v14; // rax
  unsigned __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( (MiFlags & 1) == 0 )
    return -1073741637;
  v7 = 0;
  if ( !(ThunkBufferSize >> 4) )
    return -1073741583;
  Lock = MmAcquireLoadLock();
  v9 = MiLookupDataTableEntry(EntryRoutine, 1);
  v10 = v9;
  if ( !v9 )
  {
    v11 = -1073741585;
LABEL_15:
    MmReleaseLoadLock((__int64)Lock);
    return v11;
  }
  v12 = (unsigned __int64)v9[6];
  v13 = v12 + *((unsigned int *)v9 + 16);
  if ( retaddr >= v12 && retaddr < v13 )
  {
    v14 = (unsigned __int64 *)((char *)ThunkBuffer + 8);
    while ( *v14 >= v12 && *v14 < v13 )
    {
      v14 += 2;
      if ( ++v7 >= ThunkBufferSize >> 4 )
      {
        v11 = VfThunkAddSpecialDriverThunks(EntryRoutine, ThunkBuffer, ThunkBufferSize, v10);
        goto LABEL_15;
      }
    }
    v11 = -1073741584;
    goto LABEL_15;
  }
  MmReleaseLoadLock((__int64)Lock);
  return -1073741585;
}
