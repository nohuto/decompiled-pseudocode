/*
 * XREFs of NtWaitForMultipleObjects32 @ 0x140553030
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 */

NTSTATUS __stdcall NtWaitForMultipleObjects32(
        ULONG ObjectCount,
        PLONG Handles,
        WAIT_TYPE WaitType,
        BOOLEAN Alertable,
        PLARGE_INTEGER TimeOut)
{
  unsigned __int8 v7; // r11
  __int64 v8; // r9
  __int64 v9; // rax
  LONG *v10; // rax
  __int64 i; // r8
  __int64 v13; // [rsp+50h] [rbp-228h] BYREF
  _QWORD v14[64]; // [rsp+60h] [rbp-218h] BYREF

  if ( ObjectCount - 1 > 0x3F )
    return -1073741585;
  if ( (unsigned int)WaitType > WaitAny )
    return -1073741583;
  v7 = KeGetCurrentThread()->gap0[10];
  v8 = (__int64)TimeOut;
  if ( v7 )
  {
    if ( TimeOut )
    {
      if ( (unsigned __int64)TimeOut >= 0x7FFFFFFF0000LL )
        v8 = 0x7FFFFFFF0000LL;
      v13 = *(_QWORD *)v8;
      v8 = (__int64)&v13;
    }
    v9 = ObjectCount;
    if ( v9 * 4 )
    {
      v10 = &Handles[v9];
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Handles )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  for ( i = 0LL; (unsigned int)i < ObjectCount; i = (unsigned int)(i + 1) )
    v14[i] = Handles[i];
  return ObWaitForMultipleObjects(ObjectCount, (unsigned int)v14, v7, WaitType, v7, Alertable, v8);
}
