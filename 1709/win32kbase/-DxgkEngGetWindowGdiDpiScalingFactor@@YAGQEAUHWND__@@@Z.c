/*
 * XREFs of ?DxgkEngGetWindowGdiDpiScalingFactor@@YAGQEAUHWND__@@@Z @ 0x1C00F2F40
 * Callers:
 *     <none>
 * Callees:
 *     UserIsGDIScalingApplicable @ 0x1C00735D0 (UserIsGDIScalingApplicable.c)
 *     UserGetHwndDpi @ 0x1C00A0480 (UserGetHwndDpi.c)
 *     GreGetScaledLogPixels @ 0x1C00A2100 (GreGetScaledLogPixels.c)
 */

__int64 __fastcall DxgkEngGetWindowGdiDpiScalingFactor(HWND a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int16 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 12) & 0x20000000) != 0
    && (unsigned int)UserIsGDIScalingApplicable(a1, v4, v5)
    && (unsigned int)UserGetHwndDpi(a1, &v7) )
  {
    return GreGetScaledLogPixels(v7) / 0x60u;
  }
  else
  {
    return 1LL;
  }
}
