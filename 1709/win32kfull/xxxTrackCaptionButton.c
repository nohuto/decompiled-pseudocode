/*
 * XREFs of xxxTrackCaptionButton @ 0x1C02125C4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 * Callees:
 *     xxxReleaseCapture @ 0x1C0046780 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0046880 (xxxSetCapture.c)
 *     xxxInternalGetMessage @ 0x1C0048DAC (xxxInternalGetMessage.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxDispatchMessage @ 0x1C00A10D0 (xxxDispatchMessage.c)
 *     xxxSleepThread2 @ 0x1C00A3308 (xxxSleepThread2.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0212320 (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(volatile signed __int32 *a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  __int64 v6; // r12
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // esi
  int v11; // eax
  HDC DCEx; // rbx
  __int16 v13; // bx
  int v14; // eax
  unsigned __int16 v15; // r12
  HDC v16; // rbx
  HDC v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int16 v22[2]; // [rsp+38h] [rbp-29h] BYREF
  int v23; // [rsp+3Ch] [rbp-25h]
  _WORD v24[2]; // [rsp+40h] [rbp-21h] BYREF
  int v25; // [rsp+44h] [rbp-1Dh]
  int v26; // [rsp+48h] [rbp-19h]
  int v27; // [rsp+4Ch] [rbp-15h]
  __int64 v28; // [rsp+50h] [rbp-11h]
  int v29[4]; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v30[12]; // [rsp+68h] [rbp+7h] BYREF

  memset(v30, 0, sizeof(v30));
  v4 = 0;
  v23 = 0;
  v25 = 0;
  v5 = 0;
  v6 = gptiCurrent;
  v28 = gptiCurrent;
  v7 = a2 - 8;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 11;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          v10 = 4;
          v5 = 1408;
        }
        else
        {
          v10 = 0;
        }
      }
      else
      {
        v10 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v10 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v10 = 2;
    v5 = 1344;
  }
  v11 = xxxCalcCaptionButton((__int64)a1, v10, (__int16 *)v22, v29, v24, 0);
  v26 = SHIWORD(v11);
  v27 = (__int16)v11;
  if ( v22[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, (unsigned int)v27, v26, v24[0] + 1);
    _ReleaseDC(DCEx);
    v25 = 1;
    v13 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, 4294967294LL, v10, 0);
  }
  else
  {
    v13 = v25;
    v10 = 0;
  }
  xxxSetCapture((__int64)a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((int)v30, 0, 512, 526, 1, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((int)v30, 0, 577, 599, 1, 0) )
      {
        *(_DWORD *)(v6 + 464) |= 0x8000u;
        xxxDispatchMessage((__int64)v30, v19, v20, v21);
        *(_DWORD *)(v6 + 464) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( v30[2] != 514 )
    {
      if ( v30[2] == 512 && v22[0] )
      {
        v15 = PtInRect(v29, *(unsigned __int64 *)&v30[9]);
        if ( v13 != v15 )
        {
          LOWORD(v25) = v15;
          v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          BitBltSysBmp(v16, (unsigned int)v27, v26, v24[0] + v15);
          _ReleaseDC(v16);
          SetOrClrWF(v15 == 1, a1, v5, 1);
          xxxWindowEvent(0x800Au, a1, 4294967294LL, v10, 0);
        }
        v6 = v28;
      }
LABEL_23:
      v14 = v23;
      goto LABEL_24;
    }
    xxxReleaseCapture();
    v14 = 1;
    v23 = 1;
LABEL_24:
    if ( a1 != *(volatile signed __int32 **)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL) || v14 )
      break;
    v13 = v25;
  }
  if ( v22[0] )
  {
    if ( (_WORD)v25 && v22[0] != 0xF180 )
    {
      v17 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v17, (unsigned int)v27, v26, v24[0]);
      _ReleaseDC(v17);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, 4294967294LL, v10, 0);
    }
    if ( v23 && PtInRect(v29, *(unsigned __int64 *)&v30[9]) )
      return v22[0];
  }
  return v4;
}
