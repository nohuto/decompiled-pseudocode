/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002C790
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180013078 (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1800132C0 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E5300 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800E661C (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x1800EE894 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        DWORD a3,
        DWORD a4,
        APTTYPE pAptType,
        APTTYPEQUALIFIER pAptQualifier)
{
  _BOOL8 v9; // r15
  DWORD TickCount; // r12d
  DWORD v11; // ebx
  __int64 result; // rax
  HRESULT v13; // eax
  DWORD v14; // ecx
  DWORD v15; // eax
  HCURSOR CursorW; // rax
  DWORD v17; // eax
  DWORD v18; // eax
  DWORD v19; // eax
  struct tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  v9 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptType == APTTYPE_STA
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA;
  TickCount = GetTickCount();
  v11 = a4;
  result = 0xFFFFFFFFLL;
  if ( a2 || a4 != -1 )
  {
    while ( 1 )
    {
      if ( !v9 )
      {
        v14 = MsgWaitForMultipleObjectsEx(a3, a2, v11, 0x1CFFu, 0);
        dwindex = v14;
        goto LABEL_16;
      }
      v13 = CoWaitForMultipleHandles(0x18u, v11, a3, a2, &dwindex);
      if ( v13 == -2147417835 )
      {
        v14 = 258;
      }
      else
      {
        if ( v13 >= 0 )
        {
          v14 = dwindex;
          goto LABEL_16;
        }
        v14 = -1;
      }
      dwindex = v14;
LABEL_16:
      v11 = 0;
      if ( a4 == -1 )
      {
        v11 = -1;
      }
      else
      {
        v15 = GetTickCount() - TickCount;
        if ( v15 > a4 )
        {
          v14 = 258;
          dwindex = 258;
        }
        else
        {
          v14 = dwindex;
          v11 = a4 - v15;
        }
      }
      if ( v14 != a3 )
        goto LABEL_39;
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        if ( Msg.message == 18 )
        {
          PostQuitMessage(Msg.wParam);
LABEL_36:
          v14 = 258;
          dwindex = 258;
          goto LABEL_38;
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
        if ( a3 )
        {
          v17 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
          v14 = v17;
          if ( v17 != 258 )
          {
            dwindex = v17;
            goto LABEL_38;
          }
        }
        v11 = 0;
        if ( a4 == -1 )
        {
          v11 = -1;
        }
        else
        {
          v18 = GetTickCount() - TickCount;
          if ( v18 > a4 )
            goto LABEL_36;
          v11 = a4 - v18;
        }
      }
      v14 = dwindex;
LABEL_38:
      if ( v14 != a3 )
      {
LABEL_39:
        if ( v14 != 192 )
        {
          if ( v14 == 258 && a3 )
          {
            v19 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
            v14 = dwindex;
            if ( v19 != 258 )
              return v19;
          }
          return v14;
        }
      }
    }
  }
  return result;
}
