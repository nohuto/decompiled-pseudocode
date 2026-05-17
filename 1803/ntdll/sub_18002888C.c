/*
 * XREFs of sub_18002888C @ 0x18002888C
 * Callers:
 *     TpSetTimerEx @ 0x180024F70 (TpSetTimerEx.c)
 *     sub_180028788 @ 0x180028788 (sub_180028788.c)
 *     TpWaitForTimer @ 0x18002C520 (TpWaitForTimer.c)
 *     sub_18002C670 @ 0x18002C670 (sub_18002C670.c)
 *     sub_180055240 @ 0x180055240 (sub_180055240.c)
 *     TpReleaseTimer @ 0x180058900 (TpReleaseTimer.c)
 * Callees:
 *     sub_180002A88 @ 0x180002A88 (sub_180002A88.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029428 @ 0x180029428 (sub_180029428.c)
 *     sub_18002CB04 @ 0x18002CB04 (sub_18002CB04.c)
 *     sub_1800556D0 @ 0x1800556D0 (sub_1800556D0.c)
 *     ZwWaitForAlertByThreadId @ 0x18009E3B0 (ZwWaitForAlertByThreadId.c)
 */

char __fastcall sub_18002888C(__int64 a1, volatile signed __int64 *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (__int64)a2 + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL) + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
    else
      v13 = 2147353478LL;
    if ( *(_BYTE *)v13 )
      sub_180002A88(v9, a1);
    RtlAcquireSRWLockExclusive((unsigned __int64)a2, v10, v11, v12);
    if ( *(_BYTE *)(a1 + 352) )
    {
      sub_180029428(v9 + 16, a1 + 248);
      sub_180029428(v9 + 8, a1 + 288);
      LOBYTE(v14) = v6;
      sub_18002CB04(v9, v14);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      sub_1800556D0(a1 + 336, v18);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      ZwWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive(a1 + 240, v15, v16, v17);
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    return 0;
  }
}
