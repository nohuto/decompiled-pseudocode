/*
 * XREFs of TppUpdateSubQueueTimer @ 0x18000FCF0
 * Callers:
 *     TppCancelTimer @ 0x18000FA40 (TppCancelTimer.c)
 *     TppSetTimer @ 0x18000FBB4 (TppSetTimer.c)
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 * Callees:
 *     TppETWTimerSetNtTimer @ 0x180001D10 (TppETWTimerSetNtTimer.c)
 *     TppETWTimerCancelNtTimer @ 0x180002BAC (TppETWTimerCancelNtTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwCancelTimer2 @ 0x1800A12D0 (ZwCancelTimer2.c)
 *     ZwSetTimer2 @ 0x1800A3530 (ZwSetTimer2.c)
 */

void __fastcall TppUpdateSubQueueTimer(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = a2;
  v14 = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
    v6 = *(_QWORD *)(v3 + 32) - v5;
    v7 = (unsigned __int128)(v6 * (__int128)0x346DC5D63886594BLL) >> 64;
    v8 = v6 / 10000;
    if ( *(_QWORD *)a1 == v5 && *(_DWORD *)(a1 + 112) == (_DWORD)v8 )
      return;
    v9 = 10000LL * (unsigned int)v8;
    *(_QWORD *)a1 = v5;
    v14 = v9;
    *(_DWORD *)(a1 + 112) = v8;
    if ( !v4 )
    {
      v7 = RtlpFreezeTimeBias;
      v9 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias;
      if ( v9 <= v5 )
      {
        v9 -= v5;
        v5 = v9;
        v12 = v9;
LABEL_8:
        if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v7) )
        {
          v5 = v12;
          v10 = (__int64)NtCurrentPeb()->SharedData + 556;
        }
        else
        {
          v10 = 2147353478LL;
        }
        if ( *(_BYTE *)v10 )
          TppETWTimerSetNtTimer(a1, v5, v8);
        ZwSetTimer2(*(_QWORD *)(a1 + 24), &v12, 0LL, &v13);
        return;
      }
      v5 = 0LL;
    }
    v12 = v5;
    goto LABEL_8;
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(0LL, a2) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWTimerCancelNtTimer(a1);
    ZwCancelTimer2(*(_QWORD *)(a1 + 24), 0LL);
  }
}
