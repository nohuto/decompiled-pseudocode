/*
 * XREFs of TpCaptureCaller @ 0x18007ADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl TpCaptureCaller(TP_TRACE_TYPE Type)
{
  _DWORD *ThreadPoolData; // r8
  __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]

  ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    if ( (unsigned int)(Type - 1) <= 1 )
    {
      v2 = ((unsigned __int8)ThreadPoolData[32] - 1) & 1;
      ThreadPoolData[32] = v2;
      ThreadPoolData[4 * v2 + 26] = Type;
      *(_QWORD *)&ThreadPoolData[4 * (unsigned int)v2 + 24] = retaddr;
    }
  }
}
