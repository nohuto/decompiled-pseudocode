/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140581DF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  char PreviousMode; // r8
  ULONG v9; // edx
  __int64 v10; // rax
  LONG *v11; // rax
  LARGE_INTEGER *v13; // [rsp+48h] [rbp-230h]
  __int64 v14; // [rsp+50h] [rbp-228h] BYREF
  unsigned __int64 v15[64]; // [rsp+60h] [rbp-218h] BYREF

  v13 = TimeOut;
  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0;
  if ( PreviousMode )
  {
    v10 = (__int64)TimeOut;
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v14 = *(_QWORD *)v10;
      v13 = (LARGE_INTEGER *)&v14;
    }
    if ( 4LL * ObjectCount )
    {
      v11 = &Handles[ObjectCount];
      if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  while ( v9 < ObjectCount )
  {
    v15[v9] = Handles[v9];
    ++v9;
  }
  return ObWaitForMultipleObjects(ObjectCount, v15, PreviousMode, WaitType, PreviousMode, Alertable, v13);
}
