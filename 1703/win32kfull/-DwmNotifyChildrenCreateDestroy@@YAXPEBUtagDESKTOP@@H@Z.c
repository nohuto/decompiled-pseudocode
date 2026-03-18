/*
 * XREFs of ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C0016158
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0015E14 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildCreate @ 0x1C0016300 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0016430 (DwmGetClassStyle.c)
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     IsDesktopWindow @ 0x1C002250C (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0022534 (IsMessageParentWindow.c)
 *     DwmAsyncTextChange @ 0x1C00436A0 (DwmAsyncTextChange.c)
 *     IsMotherDesktopWindow @ 0x1C005CF00 (IsMotherDesktopWindow.c)
 *     DwmAsyncChildDestroy @ 0x1C005CF28 (DwmAsyncChildDestroy.c)
 *     DwmChildRectChange @ 0x1C00607B4 (DwmChildRectChange.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00626F0 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall DwmNotifyChildrenCreateDestroy(const struct tagDESKTOP *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rbp
  unsigned __int64 v4; // r15
  _QWORD *v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  int ClassStyle; // edi
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  __int64 v12[13]; // [rsp+50h] [rbp-68h] BYREF
  const struct tagDESKTOP *v13; // [rsp+C0h] [rbp+8h]
  unsigned int v14; // [rsp+C8h] [rbp+10h]

  v14 = a2;
  v13 = a1;
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
            if ( !(unsigned int)IsDesktopWindow() && (unsigned int)IsMessageParentWindow() )
              GetDesktopWindow();
            memset(v12, 0, 0x28uLL);
            GetWindowCompositionInfo(v6, v12);
            v7 = ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL);
            ClassStyle = DwmGetClassStyle(v6);
            v9 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildCreate(v9, *(_DWORD *)(v6 + 64), *(_DWORD *)(v6 + 304), ClassStyle, (__int64)v12, v7, v6 + 128);
            DwmChildRectChange(v6);
            if ( (*(_BYTE *)(v6 + 66) & 8) != 0 )
            {
              if ( (unsigned int)IsTopLevelWindow(v6) )
              {
                SendDwmIconChange(v6);
                v11 = (void *)ReferenceDwmApiPort();
                DwmAsyncTextChange(v11);
              }
            }
          }
          else
          {
            v10 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildDestroy(v10);
          }
          v2 = v14;
        }
        a1 = v13;
      }
    }
    v3 += 32LL;
    v5 += 2;
  }
}
