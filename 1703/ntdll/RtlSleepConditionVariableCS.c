/*
 * XREFs of RtlSleepConditionVariableCS @ 0x180071240
 * Callers:
 *     sub_180060180 @ 0x180060180 (sub_180060180.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_1800711F0 @ 0x1800711F0 (sub_1800711F0.c)
 *     sub_18007139C @ 0x18007139C (sub_18007139C.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A8B30 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlSleepConditionVariableCS(signed __int64 *a1, __int64 a2, __int64 a3)
{
  signed __int64 v6; // rdi
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  signed __int64 v9; // rax
  int i; // ecx
  unsigned int v11; // ebx
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  HANDLE UniqueThread; // [rsp+38h] [rbp-18h]
  signed __int32 v18; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v19; // [rsp+48h] [rbp-8h]

  _m_prefetchw(a1);
  v6 = *a1;
  v7 = 0;
  v16 = 0LL;
  v19 = 0LL;
  v18 = 2;
  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  while ( 1 )
  {
    v8 = (unsigned __int64)&v14 | v6 & 0xF;
    v14 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( (v6 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      v15 = 0LL;
      v8 |= 8uLL;
    }
    else
    {
      v15 = &v14;
    }
    v9 = _InterlockedCompareExchange64(a1, v8, v6);
    if ( v6 == v9 )
      break;
    v6 = v9;
  }
  RtlLeaveCriticalSection(a2);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)v8) & 8) != 0 )
    sub_1800711F0(a1, v8);
  for ( i = dword_180159A14; i; --i )
  {
    if ( (v18 & 2) == 0 )
      break;
    _mm_pause();
  }
  v11 = 0;
  if ( _interlockedbittestandreset(&v18, 1u) )
    v11 = ZwWaitForAlertByThreadId(a2, a3);
  else
    _InterlockedOr(&v18, 4u);
  if ( v11 == 258 || (v18 & 4) == 0 )
  {
    if ( (unsigned __int8)sub_18007139C(a1, &v14) )
    {
      if ( v11 != 258 )
        v11 = 0;
      v7 = v11;
    }
    else
    {
      do
        ZwWaitForAlertByThreadId(a2, 0LL);
      while ( (v18 & 4) == 0 );
    }
  }
  RtlEnterCriticalSection(a2);
  return v7;
}
