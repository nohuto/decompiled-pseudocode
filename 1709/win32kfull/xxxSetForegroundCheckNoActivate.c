/*
 * XREFs of xxxSetForegroundCheckNoActivate @ 0x1C01B5070
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01B4EC0 (EditionSetForegroundCheckNoActivate.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     IsMessageOnlyWindow @ 0x1C00D63A0 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v2; // edi
  int v3; // eax
  __int64 TopLevelWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( (unsigned int)IsCompositionInputWindow(a1) )
  {
    LOBYTE(v3) = IsMessageOnlyWindow((__int64)CompositionInputWindowUIOwner);
    if ( v3 )
    {
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
      v2 = 1;
    }
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0LL;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(TopLevelWindow + 67) & 8) != 0
    || (*((_BYTE *)CompositionInputWindowUIOwner + 305) & 0x10) != 0 )
  {
    return 0LL;
  }
  if ( v2 == 1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v13;
    v13[1] = CompositionInputWindowUIOwner;
    _InterlockedIncrement((volatile signed __int32 *)CompositionInputWindowUIOwner + 2);
  }
  v11 = xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0, 0);
  if ( v2 == 1 )
    ThreadUnlock1(v10, v9);
  return v11;
}
