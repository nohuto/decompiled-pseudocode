/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0045740
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0045400 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildCreate @ 0x1C004590C (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0045A3C (DwmGetClassStyle.c)
 *     IsMotherDesktopWindow @ 0x1C0060098 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C00600C0 (DwmAsyncChildDestroy.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C008B524 (DwmAsyncTextChange.c)
 *     IsDesktopWindow @ 0x1C0092C4C (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0092C74 (IsMessageParentWindow.c)
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rsi
  int ClassStyle; // edi
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  __int64 v13[13]; // [rsp+50h] [rbp-68h] BYREF
  const struct tagDESKTOP *v14; // [rsp+C0h] [rbp+8h]
  unsigned int v15; // [rsp+C8h] [rbp+10h]

  v15 = a2;
  v14 = a1;
  v2 = (unsigned int)a2;
  v3 = gSharedInfo[1];
  v4 = v3 + 32LL * giheLast;
  v5 = (_QWORD *)gpKernelHandleTable;
  while ( v3 <= v4 )
  {
    if ( *(_BYTE *)(v3 + 24) == 1 )
    {
      v6 = *v5;
      if ( *(const struct tagDESKTOP **)(*v5 + 24LL) == a1 )
      {
        if ( !(unsigned int)IsMotherDesktopWindow(*v5, a2, v2) )
        {
          if ( (_DWORD)v2 )
          {
            if ( !(unsigned int)IsDesktopWindow(v7) && (unsigned int)IsMessageParentWindow() )
              GetDesktopWindow();
            memset(v13, 0, 0x28uLL);
            GetWindowCompositionInfo(v6, v13);
            v8 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
            ClassStyle = DwmGetClassStyle(v6);
            v10 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildCreate(
              v10,
              *(_DWORD *)(v6 + 64),
              *(_DWORD *)(v6 + 304),
              ClassStyle,
              (__int64)v13,
              v8,
              v6 + 128);
            DwmChildRectChange(v6);
            if ( (*(_BYTE *)(v6 + 66) & 8) != 0 )
            {
              if ( (unsigned int)IsTopLevelWindow(v6) )
              {
                SendDwmIconChange(v6);
                v12 = (void *)ReferenceDwmApiPort();
                DwmAsyncTextChange(v12);
              }
            }
          }
          else
          {
            v11 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildDestroy(v11);
          }
          v2 = v15;
        }
        a1 = v14;
      }
    }
    v3 += 32LL;
    v5 += 3;
  }
}
