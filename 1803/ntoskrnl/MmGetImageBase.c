/*
 * XREFs of MmGetImageBase @ 0x14058C804
 * Callers:
 *     RtlpLookupUserFunctionTable @ 0x1400C9E60 (RtlpLookupUserFunctionTable.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x14058CB5C (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     MiCheckForConflictingVad @ 0x14003E910 (MiCheckForConflictingVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400FE990 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140117300 (LOCK_ADDRESS_SPACE_SHARED.c)
 */

__int64 __fastcall MmGetImageBase(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v7; // edi
  __int64 Process; // r14
  int v9; // ebp
  __int64 **v10; // rax

  if ( a1 > 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v9 = (__int64)CurrentThread[1].Queue & 3;
  if ( !v9 )
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)CurrentThread->ApcState.Process);
  v10 = MiCheckForConflictingVad(Process, a1, a1);
  if ( v10 )
  {
    if ( ((_DWORD)v10[6] & 7) == 2 )
    {
      *a2 = (*((unsigned int *)v10 + 6) | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32)) << 12;
      *a3 = ((*((unsigned int *)v10 + 7) | ((unsigned __int64)*((unsigned __int8 *)v10 + 33) << 32))
           - (*((unsigned int *)v10 + 6) | ((unsigned __int64)*((unsigned __int8 *)v10 + 32) << 32))
           + 1) << 12;
    }
    else
    {
      v7 = -1073741751;
    }
  }
  else
  {
    v7 = -1073741800;
  }
  if ( !v9 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
  return v7;
}
