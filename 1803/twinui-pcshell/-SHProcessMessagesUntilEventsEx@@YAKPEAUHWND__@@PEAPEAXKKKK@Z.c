/*
 * XREFs of ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18008C180
 * Callers:
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180190B60 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUnifiedTileManager@UnifiedTile@Shell.c)
 *     ??$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180190CB0 (--$WaitForCompletion@UIAsyncActionCompletedHandler@Foundation@Windows@@UIAsyncAction@23@@@YAJPEA.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180199BEC (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAUIRandomAccessStream@Streams@Storage@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHProcessMessagesUntilEventsEx(
        HWND a1,
        void **a2,
        ULONG a3,
        DWORD a4,
        APTTYPE pAptType,
        APTTYPEQUALIFIER pAptQualifier)
{
  _BOOL8 v9; // r15
  DWORD TickCount; // r12d
  DWORD v11; // ebx
  __int64 result; // rax
  DWORD v13; // ecx
  DWORD v14; // eax
  DWORD v15; // eax
  DWORD v16; // eax
  HRESULT v17; // eax
  HCURSOR CursorW; // rax
  DWORD v19; // eax
  struct tagMSG Msg; // [rsp+30h] [rbp-30h] BYREF
  DWORD dwindex; // [rsp+A8h] [rbp+48h] BYREF

  v9 = CoGetApartmentType(&pAptType, &pAptQualifier) >= 0
    && pAptQualifier == APTTYPEQUALIFIER_APPLICATION_STA
    && pAptType == APTTYPE_STA;
  TickCount = GetTickCount();
  v11 = a4;
  result = 0xFFFFFFFFLL;
  if ( a2 || a4 != -1 )
  {
    while ( 1 )
    {
      if ( v9 )
      {
        v17 = CoWaitForMultipleHandles(0x18u, v11, a3, a2, &dwindex);
        if ( v17 == -2147417835 )
        {
          v13 = 258;
        }
        else
        {
          if ( v17 >= 0 )
          {
            v13 = dwindex;
            goto LABEL_7;
          }
          v13 = -1;
        }
        dwindex = v13;
      }
      else
      {
        v13 = MsgWaitForMultipleObjectsEx(a3, a2, v11, 0x1CFFu, 0);
        dwindex = v13;
      }
LABEL_7:
      v11 = 0;
      if ( a4 == -1 )
      {
        v11 = -1;
      }
      else
      {
        v14 = GetTickCount() - TickCount;
        if ( v14 > a4 )
        {
          v13 = 258;
          dwindex = 258;
        }
        else
        {
          v13 = dwindex;
          v11 = a4 - v14;
        }
      }
      if ( v13 != a3 )
        goto LABEL_22;
      while ( 1 )
      {
        if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
        {
          v13 = dwindex;
          goto LABEL_21;
        }
        if ( Msg.message == 18 )
          break;
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
          v15 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
          v13 = v15;
          if ( v15 != 258 )
          {
            dwindex = v15;
            goto LABEL_21;
          }
        }
        v11 = 0;
        if ( a4 == -1 )
        {
          v11 = -1;
        }
        else
        {
          v16 = GetTickCount() - TickCount;
          if ( v16 > a4 )
            goto LABEL_43;
          v11 = a4 - v16;
        }
      }
      PostQuitMessage(Msg.wParam);
LABEL_43:
      v13 = 258;
      dwindex = 258;
LABEL_21:
      if ( v13 != a3 )
      {
LABEL_22:
        if ( v13 != 192 )
        {
          if ( v13 == 258 && a3 )
          {
            v19 = WaitForMultipleObjectsEx(a3, a2, 0, 0, 0);
            v13 = dwindex;
            if ( v19 != 258 )
              return v19;
          }
          return v13;
        }
      }
    }
  }
  return result;
}
