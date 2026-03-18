/*
 * XREFs of xxxCancelTracking @ 0x1C00B6D04
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 */

__int64 __fastcall xxxCancelTracking(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  _QWORD *i; // rsi
  _QWORD *v5; // r15
  int v6; // ebx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD v12[84]; // [rsp+20h] [rbp-2C8h] BYREF

  v2 = 0LL;
  result = grpdeskRitInput;
  for ( i = *(_QWORD **)(grpdeskRitInput + 168LL); i != (_QWORD *)(grpdeskRitInput + 168LL); i = (_QWORD *)*i )
  {
    v5 = i - 82;
    if ( *(i - 8) )
    {
      if ( (unsigned int)v2 < 0xC )
      {
        LockW32Thread((__int64)(i - 82), &v12[3 * v2 + 48]);
        v7 = (__int64 *)v5[74];
        v8 = &v12[3 * v2 + 12];
        v12[v2] = v5;
        a2 = *v7;
        result = *(_QWORD *)(gptiCurrent + 368LL);
        *v8 = result;
        *(_QWORD *)(gptiCurrent + 368LL) = v8;
        v12[3 * v2 + 13] = a2;
        ++*(_DWORD *)(a2 + 8);
        v2 = (unsigned int)(v2 + 1);
      }
    }
  }
  v6 = v2 - 1;
  if ( (int)v2 - 1 >= 0 )
  {
    v9 = &v12[v6];
    v10 = &v12[3 * v6 + 48];
    do
    {
      v11 = *v9;
      if ( (*(_DWORD *)(*v9 + 440LL) & 1) == 0 )
        xxxCancelTrackingForThread();
      ThreadUnlock1(v11, a2);
      result = PopAndFreeW32ThreadLock(v10);
      v10 -= 3;
      --v9;
      --v6;
    }
    while ( v6 >= 0 );
  }
  return result;
}
