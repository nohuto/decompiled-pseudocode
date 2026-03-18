/*
 * XREFs of xxxSetForegroundCheckNoActivate @ 0x1C01B1E90
 * Callers:
 *     EditionSetForegroundCheckNoActivate @ 0x1C01B1CF0 (EditionSetForegroundCheckNoActivate.c)
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C8FA8 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0062670 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v2; // edi
  int v3; // eax
  __int64 v4; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( IsCompositionInputWindow(a1) )
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
  TopLevelWindow = GetTopLevelWindow(v4);
  if ( !TopLevelWindow
    || (*(_BYTE *)(TopLevelWindow + 67) & 8) != 0
    || (*((_BYTE *)CompositionInputWindowUIOwner + 305) & 0x10) != 0 )
  {
    return 0LL;
  }
  if ( v2 == 1 )
  {
    v10[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v10;
    v10[1] = CompositionInputWindowUIOwner;
    ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
  }
  v8 = xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0, 0);
  if ( v2 == 1 )
    ThreadUnlock1(v7, v6);
  return v8;
}
