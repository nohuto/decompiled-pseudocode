/*
 * XREFs of xxxShowOwnedWindows @ 0x1C004BB84
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0140320 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C020EA88 (xxxMinimizeHungWindow.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

char __fastcall xxxShowOwnedWindows(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 DesktopWindow; // rax
  __int64 v8; // rdx
  __int64 v9; // r13
  int v10; // r14d
  _QWORD *v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  char i; // al
  char v16; // al
  __int64 v17; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[4]; // [rsp+20h] [rbp-48h] BYREF

  LOBYTE(v4) = *(_BYTE *)(a1 + 71) & 0xC0;
  v5 = a2;
  if ( (_BYTE)v4 != 64 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v4 = BuildHwndList(*(_QWORD *)(DesktopWindow + 112), 2LL, 0LL);
    v9 = v4;
    if ( v4 )
    {
      v10 = 4;
      if ( (_DWORD)v5 != 2 )
        v10 = 0;
      v11 = (_QWORD *)(v4 + 32);
      if ( (_DWORD)v5 == 4 )
        v10 = 3;
      while ( 1 )
      {
        if ( *v11 == 1LL )
        {
          LOBYTE(v4) = FreeHwndList(v9);
          return v4;
        }
        LOBYTE(v8) = 1;
        v12 = HMValidateHandleNoSecure(*v11, v8);
        v13 = v12;
        if ( v12 && (*(_BYTE *)(*(_QWORD *)(v12 + 168) + 100LL) & 4) == 0 && v12 != a1 )
        {
          v14 = *(_QWORD *)(v12 + 120);
          if ( v14 )
          {
            for ( i = *(_BYTE *)(v14 + 71); ; i = *(_BYTE *)(v17 + 71) )
            {
              v16 = i & 0xC0;
              if ( !v16 )
                break;
              if ( v14 == a1 )
                break;
              if ( v16 == -64 )
                break;
              v17 = *(_QWORD *)(v14 + 120);
              if ( !v17 )
                break;
              v14 = *(_QWORD *)(v14 + 120);
            }
          }
          if ( v10 )
          {
            if ( !v14 || v14 == a1 || (_DWORD)v5 == 4 && (*(_BYTE *)(v14 + 71) & 0x28) == 0x20 )
              goto LABEL_14;
          }
          else if ( v14 != a1 )
          {
            goto LABEL_14;
          }
          if ( (unsigned int)v5 >= 3 )
          {
            if ( (*(_BYTE *)(v13 + 57) & 0x40) == 0 )
              goto LABEL_14;
          }
          else if ( (*(_BYTE *)(v13 + 71) & 0x10) == 0 )
          {
            goto LABEL_14;
          }
          if ( a3 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect(v13 + 128);
            GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
            GreDeleteObject(RectRgnIndirect);
            SetOrClrWF(1LL, v13, 320LL, 1LL);
            SetVisible((struct tagWND *)v13);
          }
          else
          {
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v23[0] = *(_QWORD *)(ThreadWin32Thread + 392);
            *(_QWORD *)(ThreadWin32Thread + 392) = v23;
            v23[1] = v13;
            _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
            xxxSendMessage(v13, 24LL, (unsigned int)v5 >= 3, v5);
            ThreadUnlock1(v21, v20);
          }
        }
LABEL_14:
        ++v11;
      }
    }
  }
  return v4;
}
