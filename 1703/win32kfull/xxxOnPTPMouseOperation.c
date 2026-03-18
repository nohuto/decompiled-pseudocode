/*
 * XREFs of xxxOnPTPMouseOperation @ 0x1C01B1678
 * Callers:
 *     xxxDesktopThread @ 0x1C00C7B20 (xxxDesktopThread.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     xxxMoveEvent @ 0x1C01A1E40 (xxxMoveEvent.c)
 */

__int64 xxxOnPTPMouseOperation()
{
  unsigned __int64 v0; // rsi
  int v1; // edi
  INT v2; // r15d
  __int64 v3; // rbx
  char v4; // dl
  __int64 result; // rax
  __int64 v6; // rcx
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // r14
  struct tagPOINT v10; // [rsp+28h] [rbp-99h]
  __int64 v11; // [rsp+58h] [rbp-69h]
  _BYTE v12[20]; // [rsp+98h] [rbp-29h]
  __int128 v13; // [rsp+B0h] [rbp-11h]
  int v14; // [rsp+C0h] [rbp-1h]
  __int128 v15; // [rsp+C0h] [rbp-1h]
  unsigned __int64 v16; // [rsp+C8h] [rbp+7h]
  __int64 v17; // [rsp+D0h] [rbp+Fh] BYREF
  __int128 v18; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v19; // [rsp+E8h] [rbp+27h]

  v0 = v16;
  v1 = v14;
  v2 = HIDWORD(v13);
  v3 = *((_QWORD *)&v13 + 1);
  v17 = 0LL;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
    v4 = gdwPTPMouseEvents;
    if ( gdwPTPMouseEvents )
    {
      --gdwPTPMouseEvents;
      v6 = 32LL * (((_BYTE)gdwPTPQueueHead - v4 + 1) & 0x3F);
      v13 = *(_OWORD *)((char *)&gPTPMouseEventQueue + v6);
      v15 = *(_OWORD *)((char *)&gPTPMouseEventQueue + v6 + 16);
      ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
      v0 = *((_QWORD *)&v15 + 1);
      result = 1LL;
      v1 = v15;
      v2 = HIDWORD(v13);
      v3 = *((_QWORD *)&v13 + 1);
    }
    else
    {
      ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
      result = 0LL;
    }
    if ( !(_DWORD)result )
      return result;
    *(_DWORD *)v12 = 0x800000;
    *(_OWORD *)&v12[4] = 0uLL;
    v19 = (unsigned __int128)0LL >> 96;
    v18 = *(_OWORD *)v12;
    if ( (v1 & 2) != 0 )
    {
      v7 = 1;
LABEL_14:
      WORD2(v18) = v7;
      goto LABEL_15;
    }
    switch ( v1 )
    {
      case 4:
        v7 = 2;
        goto LABEL_14;
      case 8:
        v7 = 4;
        goto LABEL_14;
      case 16:
        v7 = 8;
        goto LABEL_14;
    }
LABEL_15:
    v8 = MilliSecsToQpcCount(v0);
    v9 = v8;
    if ( (gdwMitConfig & 1) != 0 )
    {
      if ( (v1 & 1) != 0 )
      {
        HIDWORD(v18) = v3;
        LODWORD(v19) = v2;
      }
      SynthesizeMouseInput(v13, &v18, v0, v8, (v1 & 1) != 0 ? 864 : 872);
    }
    else
    {
      if ( (v1 & 1) != 0 )
      {
        HIDWORD(v18) = v3;
        LODWORD(v19) = v2;
        xxxMoveEvent(v3, v2, WORD1(v18), HIDWORD(v19), v10, (__int64)&v18, (struct _SUBPIXELS *)&v17, v0, v8, 0, v11, 1);
        v3 = *(_QWORD *)gptCursorAsync;
        v2 = *(_DWORD *)&gptCursorAsync[2];
      }
      QueueMouseEvent(
        SWORD2(v18),
        0,
        HIDWORD(v19),
        v3,
        v0,
        v9,
        0LL,
        (__int64)&v18,
        (const double *)&v17,
        0,
        1,
        1,
        0,
        1,
        0,
        0,
        0LL,
        0LL);
    }
  }
}
