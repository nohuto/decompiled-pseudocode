/*
 * XREFs of xxxCancelTracking @ 0x1C00CB4A0
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 * Callees:
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v5; // r15
  int v6; // ebx
  __int64 *v7; // rcx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD v11[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v2 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v5 = i - 89;
    if ( *(i - 8) )
    {
      if ( (unsigned int)v2 < 0xC )
      {
        LockW32Thread(i - 89, &v11[3 * v2 + 48]);
        v7 = &v11[3 * v2 + 12];
        a2 = *(_QWORD *)(v5[81] + 16LL);
        result = *(_QWORD *)(gptiCurrent + 392LL);
        *v7 = result;
        *(_QWORD *)(gptiCurrent + 392LL) = v7;
        v11[3 * v2 + 13] = a2;
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
        v11[v2] = v5;
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  v6 = v2 - 1;
  if ( (int)v2 - 1 >= 0 )
  {
    v8 = &v11[v6];
    v9 = &v11[3 * v6 + 48];
    do
    {
      v10 = *v8;
      if ( (*(_DWORD *)(*v8 + 464LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v10, a2);
      result = PopAndFreeW32ThreadLock(v9);
      v9 -= 3;
      --v8;
      --v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}
