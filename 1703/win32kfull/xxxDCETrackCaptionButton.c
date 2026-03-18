/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00C61FC
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C003C4E8 (xxxSetCapture.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     xxxMNCanClose @ 0x1C00C26D0 (xxxMNCanClose.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     DwmSyncHitTestQuery @ 0x1C00E7D74 (DwmSyncHitTestQuery.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int16 v6; // si
  int v7; // r12d
  unsigned __int16 v8; // r13
  void *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 v14; // r15
  __int16 v15; // di
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  void *v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int16 v27; // ax
  __int16 v28; // [rsp+50h] [rbp-19h]
  _DWORD v29[3]; // [rsp+54h] [rbp-15h] BYREF
  __int64 v30[12]; // [rsp+60h] [rbp-9h] BYREF
  int v32; // [rsp+E0h] [rbp+77h]
  __int64 v33; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v30, 0, 0x30uLL);
  v6 = 0;
  v28 = 0;
  v7 = 0;
  v32 = 0;
  v8 = 0;
  LODWORD(v33) = a2;
  *(_QWORD *)&v29[1] = gptiCurrent;
  v29[0] = 1;
  if ( gdwInAtomicOperation )
  {
    v4 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  v9 = (void *)ReferenceDwmApiPort(v4, gdwInAtomicOperation, 1LL, v5);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  DwmSyncHitTestQuery(v9, 1LL, 0LL, a2, (__int64)&v33, (__int64)v29);
  EnterCrit(0LL, 1LL);
  if ( !v29[0] )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v7 = 2;
    v8 = 1344;
LABEL_37:
    v14 = 0;
    if ( v7 != 2 || (*(_BYTE *)(a1 + 70) & 2) == 0 )
      goto LABEL_42;
    if ( (*(_BYTE *)(a1 + 71) & 0x20) == 0 )
    {
      v14 = -4064;
      goto LABEL_8;
    }
    goto LABEL_41;
  }
  if ( a2 == 9 )
  {
    v7 = 3;
    v8 = 1312;
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 70) & 1) == 0 )
      goto LABEL_42;
    if ( (*(_BYTE *)(a1 + 71) & 1) == 0 )
    {
      v14 = -4048;
      goto LABEL_8;
    }
LABEL_41:
    v14 = -3808;
    goto LABEL_8;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v7 = 4;
      v8 = 1408;
      v14 = 0;
      if ( (*(_BYTE *)(a1 + 65) & 4) != 0 )
      {
        v14 = -3712;
        goto LABEL_8;
      }
LABEL_42:
      v15 = 0;
      v7 = 0;
      goto LABEL_9;
    }
    goto LABEL_37;
  }
  v7 = 5;
  v8 = 1296;
  v14 = 0;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    goto LABEL_42;
  v14 = -4000;
LABEL_8:
  v28 = 1;
  v15 = 1;
  SetOrClrWF(1, (_DWORD *)a1, v8, 1);
  xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
LABEL_9:
  xxxSetCapture(a1);
  v16 = v33;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v30, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v30, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(*(_QWORD *)&v29[1] + 440LL) |= 0x8000u;
        xxxDispatchMessage(v30);
        *(_DWORD *)(*(_QWORD *)&v29[1] + 440LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_24;
    }
    if ( LODWORD(v30[1]) != 514 )
    {
      if ( LODWORD(v30[1]) == 512 && v14 )
      {
        if ( gdwInAtomicOperation )
        {
          v17 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        v22 = (void *)ReferenceDwmApiPort(v17, gdwInAtomicOperation, v18, v19);
        UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
        DwmSyncHitTestQuery(v22, v30[2], v30[3], a2, (__int64)&v33, (__int64)v29);
        EnterCrit(0LL, 1LL);
        v16 = v33;
        v27 = (_DWORD)v33 == a2;
        v15 = v28;
        if ( v28 != v27 )
        {
          v15 = (_DWORD)v33 == a2;
          v28 = v15;
          SetOrClrWF(v27 == 1, (_DWORD *)a1, v8, 1);
          xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
        }
      }
LABEL_24:
      v20 = v32;
      continue;
    }
    xxxReleaseCapture();
    v20 = 1;
    v32 = 1;
  }
  while ( a1 == *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) && !v20 );
  if ( v14 )
  {
    if ( v15 && v14 != 0xF180 )
    {
      SetOrClrWF(0, (_DWORD *)a1, v8, 1);
      xxxWindowEvent(0x800Au, (__int64 *)a1, -2, v7, 0);
    }
    if ( v32 )
    {
      if ( v16 == a2 )
        return v14;
    }
  }
  return v6;
}
