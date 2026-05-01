/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002AFD8
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180012860 (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x180012A2C (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        APTTYPE a3,
        DWORD a4,
        APTTYPEQUALIFIER pAptQualifier)
{
  _BOOL8 v6; // rdi
  DWORD v7; // ebx
  DWORD TickCount; // r14d
  HRESULT v9; // eax
  unsigned int v10; // eax
  DWORD v11; // ecx
  HCURSOR CursorW; // rax
  DWORD v13; // eax
  unsigned int v14; // eax
  DWORD v15; // eax
  struct tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  APTTYPE pAptType; // [rsp+A0h] [rbp+40h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  dwindex = a4;
  pAptType = a3;
  v6 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  v7 = 5000;
  TickCount = GetTickCount();
  do
  {
    while ( 2 )
    {
      if ( v6 )
      {
        v9 = CoWaitForMultipleHandles(0x18u, v7, 1u, a2, &dwindex);
        if ( v9 == -2147417835 )
        {
          dwindex = 258;
        }
        else if ( v9 < 0 )
        {
          dwindex = -1;
        }
      }
      else
      {
        dwindex = MsgWaitForMultipleObjectsEx(1u, a2, v7, 0x1CFFu, 0);
      }
      v7 = 0;
      v10 = GetTickCount() - TickCount;
      if ( v10 > 0x1388 )
      {
        v11 = 258;
        dwindex = 258;
      }
      else
      {
        v11 = dwindex;
        v7 = 5000 - v10;
      }
      if ( v11 == 1 )
      {
        while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
        {
          if ( Msg.message == 18 )
          {
            PostQuitMessage(Msg.wParam);
            dwindex = 258;
            goto LABEL_32;
          }
          TranslateMessage(&Msg);
          if ( Msg.message != 32 || LOWORD(Msg.lParam) == 0xFFFE )
          {
            DispatchMessageW(&Msg);
          }
          else
          {
            CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F02);
            SetCursor(CursorW);
          }
          v13 = WaitForMultipleObjectsEx(1u, a2, 0, 0, 0);
          v11 = v13;
          if ( v13 != 258 )
          {
            dwindex = v13;
            goto LABEL_29;
          }
          v7 = 0;
          v14 = GetTickCount() - TickCount;
          if ( v14 > 0x1388 )
          {
            v11 = 258;
            dwindex = 258;
            goto LABEL_29;
          }
          v7 = 5000 - v14;
        }
        v11 = dwindex;
LABEL_29:
        if ( v11 == 1 )
          continue;
      }
      break;
    }
  }
  while ( v11 == 192 );
  if ( v11 == 258 )
  {
LABEL_32:
    v15 = WaitForMultipleObjectsEx(1u, a2, 0, 0, 0);
    v11 = dwindex;
    if ( v15 != 258 )
      return v15;
  }
  return v11;
}
