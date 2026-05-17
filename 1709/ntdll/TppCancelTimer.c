/*
 * XREFs of TppCancelTimer @ 0x18000FA40
 * Callers:
 *     TpReleaseTimer @ 0x18000BCB0 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18000C660 (TpWaitForTimer.c)
 *     TppWaitCompletion @ 0x18000CA10 (TppWaitCompletion.c)
 *     TpSetTimerEx @ 0x18000F800 (TpSetTimerEx.c)
 *     TppCancelWait @ 0x18000FF54 (TppCancelWait.c)
 *     TppTimerpStopCallbackGeneration @ 0x180071F60 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     TppETWTimerCancelled @ 0x18000206C (TppETWTimerCancelled.c)
 *     TppUpdateSubQueueTimer @ 0x18000FCF0 (TppUpdateSubQueueTimer.c)
 *     TppPHDelete @ 0x18001030C (TppPHDelete.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180071E24 (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3970 (NtWaitForAlertByThreadId.c)
 */

char __fastcall TppCancelTimer(__int64 a1, __int64 a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = -(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL;
    v10 = v9 + a2 + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a2) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWTimerCancelled(v10, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v10 + 16, a1 + 248);
      TppPHDelete(v10 + 8, a1 + 288);
      LOBYTE(v12) = v6;
      TppUpdateSubQueueTimer(v10, v12);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive(a1 + 240);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v13);
      RtlReleaseSRWLockExclusive(a1 + 240);
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive(a1 + 240);
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive(a1 + 240);
    return 0;
  }
}
