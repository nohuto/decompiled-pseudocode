/*
 * XREFs of RtlSleepConditionVariableCS @ 0x180075E10
 * Callers:
 *     sub_18000881C @ 0x18000881C (sub_18000881C.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180028580 @ 0x180028580 (sub_180028580.c)
 *     sub_180075F40 @ 0x180075F40 (sub_180075F40.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlSleepConditionVariableCS(
        PRTL_CONDITION_VARIABLE ConditionVariable,
        PRTL_CRITICAL_SECTION CriticalSection,
        PLARGE_INTEGER Timeout)
{
  signed __int64 Ptr; // rbx
  NTSTATUS v7; // edi
  unsigned __int64 v8; // r15
  _QWORD *v9; // rax
  signed __int64 v10; // rax
  int i; // ecx
  NTSTATUS v12; // ebx
  _QWORD v15[4]; // [rsp+20h] [rbp-30h] BYREF
  signed __int32 v16; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h]

  _m_prefetchw(ConditionVariable);
  Ptr = (signed __int64)ConditionVariable->Ptr;
  v7 = 0;
  v15[2] = 0LL;
  v17 = 0LL;
  v16 = 2;
  v15[3] = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)v15 | Ptr & 0xF;
    v9 = v15;
    v15[0] = Ptr & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v9 = 0LL;
    v15[1] = v9;
    if ( (Ptr & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
      v8 |= 8uLL;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)ConditionVariable, v8, Ptr);
    if ( Ptr == v10 )
      break;
    Ptr = v10;
  }
  RtlLeaveCriticalSection(CriticalSection);
  if ( (((unsigned __int8)Ptr ^ (unsigned __int8)v8) & 8) != 0 )
    sub_180075F40(ConditionVariable, v8);
  for ( i = dword_18015AA5C; i; --i )
  {
    if ( (v16 & 2) == 0 )
      break;
    _mm_pause();
  }
  v12 = 0;
  if ( _interlockedbittestandreset(&v16, 1u) )
    v12 = ZwWaitForAlertByThreadId(CriticalSection, Timeout);
  else
    _InterlockedOr(&v16, 4u);
  if ( v12 == 258 || (v16 & 4) == 0 )
  {
    if ( sub_180028580((volatile signed __int64 *)ConditionVariable, (__int64)v15) )
    {
      if ( v12 != 258 )
        v12 = 0;
      v7 = v12;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(CriticalSection, 0LL);
      while ( (v16 & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(CriticalSection);
  return v7;
}
