/*
 * XREFs of xxxIsDragging @ 0x1C0139758
 * Callers:
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     NtUserDragDetect @ 0x1C01D7610 (NtUserDragDetect.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C003C4E8 (xxxSetCapture.c)
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxSleepThread @ 0x1C01B27FC (xxxSleepThread.c)
 */

__int64 __fastcall xxxIsDragging(__int64 a1, __int64 a2)
{
  int v4; // r14d
  int v5; // edx
  int v6; // r8d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  __int64 v12; // [rsp+40h] [rbp-21h] BYREF
  __int64 v13; // [rsp+48h] [rbp-19h]
  _QWORD v14[6]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v15[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (GetKeyState(1u) & 0x8000u) == 0LL )
    return 0LL;
  xxxSetCapture(a1);
  v4 = 1;
  v12 = a2;
  v13 = a2;
  v5 = *(_DWORD *)(gpsi + 2152LL);
  v6 = *(_DWORD *)(gpsi + 2156LL);
  HIDWORD(v12) = HIDWORD(a2) - v6;
  HIDWORD(v13) = v6 + HIDWORD(a2);
  LODWORD(v12) = a2 - v5;
  LODWORD(v13) = a2 + v5;
  v7 = 0;
  v15[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v15;
  v15[1] = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  do
  {
    while ( 1 )
    {
      while ( (unsigned int)xxxInternalGetMessage((__int64)v14, 0LL, 0x200u, 0x20Eu, 1u, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v14, 0LL, 0x23u, 0x23u, 1u, 0)
           || (unsigned int)xxxInternalGetMessage((__int64)v14, 0LL, 0x100u, 0x109u, 1u, 0)
           || *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) != a1 || LODWORD(v14[1]) == 514 )
          goto LABEL_7;
        if ( LODWORD(v14[1]) == 35 )
        {
          xxxCallHook(2, 0, 0LL, 5u);
          goto LABEL_8;
        }
        if ( LODWORD(v14[1]) != 256 )
        {
          if ( LODWORD(v14[1]) != 512 || PtInRect(&v12, *(_QWORD *)((char *)&v14[4] + 4)) )
            goto LABEL_8;
          v7 = 1;
LABEL_7:
          v4 = 0;
          goto LABEL_8;
        }
        if ( v14[2] == 27LL )
          goto LABEL_9;
LABEL_8:
        if ( !v4 )
          goto LABEL_9;
      }
      if ( gfShellFrameHangResilient && *(_QWORD *)(gptiCurrent + 1264LL) )
        break;
      if ( !(unsigned int)xxxSleepThread(7LL, 500LL, 1LL) )
        goto LABEL_20;
    }
    v11 = 0;
  }
  while ( (unsigned int)xxxSleepThread2(7u, 0x1F4u, 1, 0, (enum SLEEP_STATUS *)&v11) && !v11 );
LABEL_20:
  v7 = 1;
LABEL_9:
  v9 = *(_QWORD *)(gptiCurrent + 384LL);
  if ( *(_QWORD *)(v9 + 72) == a1 )
    xxxReleaseCapture();
  ThreadUnlock1(v9, v8);
  return v7;
}
