/*
 * XREFs of ?IsTaskbarWindow@CTopLevelWindow@@AEBA_NXZ @ 0x18001ED98
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18001F010 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTopLevelWindow::IsTaskbarWindow(CTopLevelWindow *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  bool result; // al

  v2 = *((_QWORD *)this + 90);
  v3 = *(_DWORD *)(v2 + 112);
  result = 0;
  if ( v3 > 0
    && (v3 <= 2 || v3 == 16)
    && (!(unsigned int)IsShellManagedWindow(*(_QWORD *)(v2 + 40))
     || GetPropW(*(HWND *)(*((_QWORD *)this + 90) + 40LL), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow")) )
  {
    v4 = *((_QWORD *)this + 90);
    if ( (!*(_QWORD *)(v4 + 544) || (*(_DWORD *)(v4 + 104) & 0x40000) != 0) && *(char *)(v4 + 104) >= 0 )
      return 1;
  }
  return result;
}
