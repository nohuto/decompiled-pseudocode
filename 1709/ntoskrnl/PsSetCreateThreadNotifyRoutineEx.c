/*
 * XREFs of PsSetCreateThreadNotifyRoutineEx @ 0x14071A8E0
 * Callers:
 *     <none>
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401499C8 (MmVerifyCallbackFunctionCheckFlags.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405CC228 (PspSetCreateThreadNotifyRoutine.c)
 */

__int64 __fastcall PsSetCreateThreadNotifyRoutineEx(int a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx

  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    v4 = 2;
  }
  else
  {
    v4 = 1;
  }
  if ( (unsigned int)MmVerifyCallbackFunctionCheckFlags(a2, 32) )
    return PspSetCreateThreadNotifyRoutine(a2, v4);
  else
    return 3221225506LL;
}
