/*
 * XREFs of xxxTrackCaptionButton @ 0x1C02110AC
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxReleaseCapture @ 0x1C003C3F0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C003C4E8 (xxxSetCapture.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSleepThread2 @ 0x1C005AE2C (xxxSleepThread2.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     xxxInternalGetMessage @ 0x1C00C879C (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C00CC438 (xxxDispatchMessage.c)
 *     BitBltSysBmp @ 0x1C00D642C (BitBltSysBmp.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     xxxCalcCaptionButton @ 0x1C0210C2C (xxxCalcCaptionButton.c)
 */

__int64 __fastcall xxxTrackCaptionButton(__int64 *a1, int a2)
{
  unsigned __int16 v4; // di
  unsigned __int16 v5; // r14
  __int64 v6; // r12
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  HDC DCEx; // rbx
  __int16 v13; // bx
  int v14; // eax
  unsigned __int16 v15; // r12
  HDC v16; // rbx
  HDC v17; // rbx
  unsigned __int16 v19[2]; // [rsp+38h] [rbp-29h] BYREF
  int v20; // [rsp+3Ch] [rbp-25h]
  unsigned __int16 v21[2]; // [rsp+40h] [rbp-21h] BYREF
  int v22; // [rsp+44h] [rbp-1Dh]
  int v23; // [rsp+48h] [rbp-19h]
  int v24; // [rsp+4Ch] [rbp-15h]
  __int64 v25; // [rsp+50h] [rbp-11h]
  _DWORD v26[4]; // [rsp+58h] [rbp-9h] BYREF
  unsigned __int64 v27[6]; // [rsp+68h] [rbp+7h] BYREF

  memset(v27, 0, sizeof(v27));
  v4 = 0;
  v20 = 0;
  v22 = 0;
  v5 = 0;
  v6 = gptiCurrent;
  v25 = gptiCurrent;
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
  v11 = xxxCalcCaptionButton((__int64)a1, v10, (__int16 *)v19, v26, (__int16 *)v21, 0);
  v23 = SHIWORD(v11);
  v24 = (__int16)v11;
  if ( v19[0] )
  {
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v24, v23, v21[0] + 1);
    _ReleaseDC(DCEx);
    v22 = 1;
    v13 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, a1, -2, v10, 0);
  }
  else
  {
    v13 = v22;
    v10 = 0;
  }
  xxxSetCapture((__int64)a1);
  while ( 1 )
  {
    if ( !(unsigned int)xxxInternalGetMessage((__int64)v27, 0LL, 0x200u, 0x20Eu, 1u, 0) )
    {
      if ( (unsigned int)xxxInternalGetMessage((__int64)v27, 0LL, 0x241u, 0x257u, 1u, 0) )
      {
        *(_DWORD *)(v6 + 440) |= 0x8000u;
        xxxDispatchMessage(v27);
        *(_DWORD *)(v6 + 440) &= ~0x8000u;
      }
      else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
      {
        break;
      }
      goto LABEL_23;
    }
    if ( LODWORD(v27[1]) != 514 )
    {
      if ( LODWORD(v27[1]) == 512 && v19[0] )
      {
        v15 = PtInRect(v26, *(unsigned __int64 *)((char *)&v27[4] + 4));
        if ( v13 != v15 )
        {
          LOWORD(v22) = v15;
          v16 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          BitBltSysBmp(v16, v24, v23, v21[0] + v15);
          _ReleaseDC(v16);
          SetOrClrWF(v15 == 1, a1, v5, 1);
          xxxWindowEvent(0x800Au, a1, -2, v10, 0);
        }
        v6 = v25;
      }
LABEL_23:
      v14 = v20;
      goto LABEL_24;
    }
    xxxReleaseCapture();
    v14 = 1;
    v20 = 1;
LABEL_24:
    if ( a1 != *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL) || v14 )
      break;
    v13 = v22;
  }
  if ( v19[0] )
  {
    if ( (_WORD)v22 && v19[0] != 0xF180 )
    {
      v17 = (HDC)_GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v17, v24, v23, v21[0]);
      _ReleaseDC(v17);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, a1, -2, v10, 0);
    }
    if ( v20 && PtInRect(v26, *(unsigned __int64 *)((char *)&v27[4] + 4)) )
      return v19[0];
  }
  return v4;
}
