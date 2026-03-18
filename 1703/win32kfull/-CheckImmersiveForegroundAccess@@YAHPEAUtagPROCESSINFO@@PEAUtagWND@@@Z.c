/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00B4500
 * Callers:
 *     CheckForegroundRight @ 0x1C00B431C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00B4718 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00B79A8 (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  __int64 v9; // rax
  __int64 v10; // rax

  if ( (*((_DWORD *)a1 + 192) & 0x100) != 0 )
    return 1LL;
  v4 = *((_DWORD *)a1 + 207);
  if ( v4 )
  {
    if ( v4 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL) + 828LL)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
    if ( !gpqForeground )
      return 1LL;
    v9 = *(_QWORD *)(gpqForeground + 88LL);
    v10 = v9 ? *(_QWORD *)(v9 + 16) : *(_QWORD *)(gpqForeground + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v10 + 376) + 828LL) == *((_DWORD *)a1 + 207) )
      return 1LL;
    v7 = (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) == 0;
  }
  else
  {
    if ( !(unsigned int)IsDesktopApp(a1) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v6 = *(_QWORD *)(gpqForeground + 88LL);
    if ( !v6 )
      return 1LL;
    v7 = (unsigned int)IsNonImmersiveBand(v6, v5) == 0;
  }
  return !v7;
}
