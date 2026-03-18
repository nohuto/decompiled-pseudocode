/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C000C700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C004FB70 (MSGLUA_GPQFOREGROUND.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( a2 )
  {
    v4 = *(_QWORD *)(v2 + 16);
    v5 = *a2;
    v6 = *(_QWORD *)(v4 + 408);
    v7 = *(_QWORD *)(v6 + 420);
    if ( gbEnforceUIPI )
    {
      if ( (unsigned int)v5 <= (unsigned int)v7 )
      {
        if ( (_DWORD)v5 != (_DWORD)v7
          || (v14 = HIDWORD(v5), v15 = HIDWORD(v7), (_DWORD)v14 != (_DWORD)v15)
          && (_DWORD)v15 != -1
          && (_DWORD)v14 != -1 )
        {
          EtwTraceUIPIInputError(gptiCurrent, v4, v6, *(_QWORD *)(v6 + 420), 1);
          return 0LL;
        }
      }
    }
  }
  CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 80);
  if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v2) )
  {
    if ( (unsigned int)IsMessageOnlyWindow(v2) )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v2);
      if ( !CompositionInputWindowUIOwner )
        return 0LL;
    }
  }
  if ( (*(_BYTE *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 67) & 8) == 0
    && (*((_BYTE *)CompositionInputWindowUIOwner + 305) & 0x10) == 0 )
  {
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v19[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v19;
      v19[1] = CompositionInputWindowUIOwner;
      _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
    }
    xxxSetForegroundWindow2(CompositionInputWindowUIOwner);
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
      ThreadUnlock1(v10, v9);
    if ( a2 )
    {
      if ( gpqForeground )
      {
        v11 = *(_QWORD *)(gpqForeground + 420LL);
        v12 = *a2;
        if ( gbEnforceUIPI )
        {
          if ( (unsigned int)v12 <= (unsigned int)v11 )
          {
            if ( (_DWORD)v12 != (_DWORD)v11
              || (v16 = HIDWORD(v12), v17 = HIDWORD(v11), (_DWORD)v16 != (_DWORD)v17)
              && (_DWORD)v17 != -1
              && (_DWORD)v16 != -1 )
            {
              MSGLUA_GPQFOREGROUND();
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 1LL;
}
