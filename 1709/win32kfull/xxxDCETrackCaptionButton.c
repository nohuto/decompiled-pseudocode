/*
 * XREFs of xxxDCETrackCaptionButton @ 0x1C00475C4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0046880 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     DwmSyncHitTestQuery @ 0x1C0049A6C (DwmSyncHitTestQuery.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxMNCanClose @ 0x1C007BA94 (xxxMNCanClose.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 */

__int64 __fastcall xxxDCETrackCaptionButton(_BYTE *a1, unsigned int a2)
{
  unsigned __int16 v4; // si
  int v5; // r12d
  unsigned __int16 v6; // r13
  void *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int16 v10; // r15
  __int16 v11; // di
  int v12; // ebx
  int v13; // edx
  void *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // ax
  __int16 v19; // [rsp+50h] [rbp-19h]
  _DWORD v20[3]; // [rsp+54h] [rbp-15h] BYREF
  __int64 v21[12]; // [rsp+60h] [rbp-9h] BYREF
  int v23; // [rsp+E0h] [rbp+77h]
  __int64 v24; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v21, 0, 0x30uLL);
  v4 = 0;
  v19 = 0;
  v5 = 0;
  v23 = 0;
  v6 = 0;
  LODWORD(v24) = a2;
  *(_QWORD *)&v20[1] = gptiCurrent;
  v20[0] = 1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  v7 = (void *)ReferenceDwmApiPort();
  UserSessionSwitchLeaveCrit(v9, v8);
  DwmSyncHitTestQuery(v7, 1LL, 0LL, a2, (__int64)&v24, (__int64)v20);
  EnterCrit(0LL, 1LL);
  if ( !v20[0] )
    return xxxTrackCaptionButton(a1, a2);
  if ( a2 == 8 )
  {
    v5 = 2;
    v6 = 1344;
LABEL_42:
    if ( v5 != 2 || (a1[70] & 2) == 0 )
      goto LABEL_47;
    if ( (a1[71] & 0x20) == 0 )
    {
      v10 = -4064;
      goto LABEL_8;
    }
    goto LABEL_46;
  }
  if ( a2 == 9 )
  {
    v5 = 3;
    v6 = 1312;
    if ( (a1[70] & 1) == 0 )
      goto LABEL_47;
    if ( (a1[71] & 1) == 0 )
    {
      v10 = -4048;
      goto LABEL_8;
    }
LABEL_46:
    v10 = -3808;
    goto LABEL_8;
  }
  if ( a2 != 20 )
  {
    if ( a2 == 21 )
    {
      v5 = 4;
      v6 = 1408;
      if ( (a1[65] & 4) != 0 )
      {
        v10 = -3712;
        goto LABEL_8;
      }
LABEL_47:
      v11 = 0;
      v5 = 0;
      v10 = 0;
      goto LABEL_9;
    }
    goto LABEL_42;
  }
  v5 = 5;
  v6 = 1296;
  if ( !(unsigned int)xxxMNCanClose(a1) )
    goto LABEL_47;
  v10 = -4000;
LABEL_8:
  v19 = 1;
  v11 = 1;
  SetOrClrWF(1LL, a1, v6, 1LL);
  xxxWindowEvent(32778, (_DWORD)a1, -2, v5, 0);
LABEL_9:
  xxxSetCapture((__int64)a1);
  v12 = v24;
  do
  {
    if ( !(unsigned int)xxxInternalGetMessage((unsigned int)v21, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((unsigned int)v21, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(*(_QWORD *)&v20[1] + 464LL) |= 0x8000u;
        xxxDispatchMessage(v21);
        *(_DWORD *)(*(_QWORD *)&v20[1] + 464LL) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_26;
    }
    if ( LODWORD(v21[1]) != 514 )
    {
      if ( LODWORD(v21[1]) == 512 && v10 )
      {
        if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        v15 = (void *)ReferenceDwmApiPort();
        UserSessionSwitchLeaveCrit(v17, v16);
        DwmSyncHitTestQuery(v15, v21[2], v21[3], a2, (__int64)&v24, (__int64)v20);
        EnterCrit(0LL, 1LL);
        v12 = v24;
        v18 = (_DWORD)v24 == a2;
        v11 = v19;
        if ( v19 != v18 )
        {
          v11 = (_DWORD)v24 == a2;
          v19 = v11;
          SetOrClrWF(v18 == 1, a1, v6, 1LL);
          xxxWindowEvent(32778, (_DWORD)a1, -2, v5, 0);
        }
      }
LABEL_26:
      v13 = v23;
      continue;
    }
    xxxReleaseCapture();
    v13 = 1;
    v23 = 1;
  }
  while ( a1 == *(_BYTE **)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) && !v13 );
  if ( v10 )
  {
    if ( v11 && v10 != 0xF180 )
    {
      SetOrClrWF(0LL, a1, v6, 1LL);
      xxxWindowEvent(32778, (_DWORD)a1, -2, v5, 0);
    }
    if ( v23 )
    {
      if ( v12 == a2 )
        return v10;
    }
  }
  return v4;
}
