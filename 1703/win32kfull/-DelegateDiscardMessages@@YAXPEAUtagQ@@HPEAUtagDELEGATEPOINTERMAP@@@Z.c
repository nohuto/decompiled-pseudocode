/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01BAB6C
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01BB90C (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x1C00CC24C (DelQEntry.c)
 *     IsPointerInputMessage @ 0x1C00CC410 (IsPointerInputMessage.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01BAD0C (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     GetPointerMsgFrameId @ 0x1C01CA02C (GetPointerMsgFrameId.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  __int64 v9; // r12
  int v10; // ecx
  unsigned __int64 v11; // r15
  int v12; // eax
  struct tagWND *v13; // rsi

  if ( *((_DWORD *)a1 + 4) )
  {
    v5 = *(_QWORD *)a1;
    if ( a2 )
      goto LABEL_14;
    if ( v5 )
    {
      do
      {
        if ( (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
        {
          v6 = *(_DWORD *)(v5 + 24);
          if ( (v6 == 582 || v6 == 585) && *(_WORD *)(v5 + 32) == *(_WORD *)a3 )
          {
            v7 = (gdwMitConfig & 4) != 0
               ? CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v5 + 40))
               : GetPointerMsgFrameId(*(_QWORD *)(v5 + 40));
            if ( v7 == *((_DWORD *)a3 + 1) )
              break;
          }
        }
        v5 = *(_QWORD *)v5;
      }
      while ( v5 );
      if ( v5 )
      {
LABEL_14:
        v8 = 0;
        if ( v5 )
        {
          while ( !v8 )
          {
            v9 = *(_QWORD *)v5;
            if ( IsPointerInputMessage(*(_DWORD *)(v5 + 24)) && (*(_DWORD *)(v5 + 100) & 0x40) != 0 )
            {
              v11 = *(_QWORD *)(v5 + 40);
              if ( *(_WORD *)(v5 + 32) == *(_WORD *)a3 )
              {
                if ( v10 == 582 )
                {
                  v12 = (gdwMitConfig & 4) != 0
                      ? CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v5 + 40))
                      : GetPointerMsgFrameId(*(_QWORD *)(v5 + 40));
                  if ( v12 != *((_DWORD *)a3 + 1) )
                    return;
                }
                if ( *(_DWORD *)(v5 + 24) == 581 && (*(_BYTE *)(v5 + 34) & 4) == 0 )
                  return;
                if ( *((_DWORD *)a3 + 25) == 2 )
                  v13 = (struct tagWND *)*((_QWORD *)a3 + 11);
                else
                  v13 = 0LL;
                if ( GetPwndFromPointerMsgId(v11) == v13 )
                {
                  if ( *(_DWORD *)(v5 + 24) == 583 )
                    v8 = 1;
                  DelQEntry((__int64)a1, v5, 1);
                  if ( *((_QWORD *)a1 + 6) == v5 )
                    *((_QWORD *)a1 + 6) = 0LL;
                }
              }
            }
            v5 = v9;
            if ( !v9 )
              return;
          }
        }
      }
    }
  }
}
