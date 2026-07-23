/*
 * XREFs of RtlWakeAllConditionVariable @ 0x180062FF0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x180060DE0 (EtwpStopLoggerInstance.c)
 *     EtwpFlushActiveBuffers @ 0x180062C30 (EtwpFlushActiveBuffers.c)
 *     RtlCloneUserProcess @ 0x1800D75D0 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D78C0 (RtlCompleteProcessCloning.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A0E90 (ZwAlertThreadByThreadId.c)
 */

void __cdecl RtlWakeAllConditionVariable(PRTL_CONDITION_VARIABLE ConditionVariable)
{
  signed __int64 Ptr; // rdx
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx

  Ptr = (signed __int64)ConditionVariable->Ptr;
  if ( ConditionVariable->Ptr )
  {
    while ( (Ptr & 7) != 7 )
    {
      if ( (Ptr & 8) != 0 )
      {
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, Ptr | 7, Ptr);
        if ( Ptr == v2 )
          return;
      }
      else
      {
        v2 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, 0LL, Ptr);
        if ( Ptr == v2 )
        {
          v3 = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v3 )
          {
            do
            {
              v4 = *(_QWORD *)v3;
              _interlockedbittestandset((volatile signed __int32 *)(v3 + 36), 2u);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v3 + 36), 1u) )
                ZwAlertThreadByThreadId(*(HANDLE *)(v3 + 24));
              v3 = v4;
            }
            while ( v4 );
          }
          return;
        }
      }
      Ptr = v2;
      if ( !v2 )
        return;
    }
  }
}
