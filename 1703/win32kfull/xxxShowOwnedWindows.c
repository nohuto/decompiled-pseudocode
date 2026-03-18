/*
 * XREFs of xxxShowOwnedWindows @ 0x1C00E8AD0
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     xxxShowOwnedPopups @ 0x1C0139730 (xxxShowOwnedPopups.c)
 *     xxxMinimizeHungWindow @ 0x1C020CBF8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 */

void __fastcall xxxShowOwnedWindows(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 DesktopWindow; // rax
  struct tagBWL *v7; // r13
  __int64 v8; // r14
  unsigned __int64 *v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  char i; // al
  char v14; // al
  __int64 v15; // rax
  __int64 RectRgnIndirect; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD v19[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( (*(_BYTE *)(a1 + 71) & 0xC0) != 0x40 )
  {
    DesktopWindow = GetDesktopWindow(a1);
    v7 = BuildHwndList(*(_QWORD *)(DesktopWindow + 112), 2, 0LL);
    if ( v7 )
    {
      v8 = 4LL;
      if ( a2 != 2 )
        v8 = 0LL;
      v9 = (unsigned __int64 *)((char *)v7 + 32);
      if ( a2 == 4 )
        v8 = 3LL;
      while ( 1 )
      {
        if ( *v9 == 1 )
        {
          FreeHwndList(v7);
          return;
        }
        v10 = HMValidateHandleNoSecure(*v9, 1);
        v11 = v10;
        if ( v10 && (*(_BYTE *)(*(_QWORD *)(v10 + 168) + 92LL) & 4) == 0 && v10 != a1 )
        {
          v12 = *(_QWORD *)(v10 + 120);
          if ( v12 )
          {
            for ( i = *(_BYTE *)(v12 + 71); ; i = *(_BYTE *)(v15 + 71) )
            {
              v14 = i & 0xC0;
              if ( !v14 )
                break;
              if ( v12 == a1 )
                break;
              if ( v14 == -64 )
                break;
              v15 = *(_QWORD *)(v12 + 120);
              if ( !v15 )
                break;
              v12 = *(_QWORD *)(v12 + 120);
            }
          }
          if ( v8 )
          {
            if ( !v12 || v12 == a1 || a2 == 4 && (*(_BYTE *)(v12 + 71) & 0x28) == 0x20 )
              goto LABEL_14;
          }
          else if ( v12 != a1 )
          {
            goto LABEL_14;
          }
          if ( a2 >= 3 )
          {
            if ( (*(_BYTE *)(v11 + 57) & 0x40) == 0 )
              goto LABEL_14;
          }
          else if ( (*(_BYTE *)(v11 + 71) & 0x10) == 0 )
          {
            goto LABEL_14;
          }
          if ( a3 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect(v11 + 128);
            GreCombineRgn(a3, a3, RectRgnIndirect, 2LL);
            GreDeleteObject(RectRgnIndirect);
            SetOrClrWF(1, (_DWORD *)v11, 0x140u, 1);
            SetVisible((_QWORD *)v11, 0);
          }
          else
          {
            v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v19;
            v19[1] = v11;
            ++*(_DWORD *)(v11 + 8);
            xxxSendMessage(v11, 24, a2 >= 3, a2);
            ThreadUnlock1(v18, v17);
          }
        }
LABEL_14:
        ++v9;
      }
    }
  }
}
