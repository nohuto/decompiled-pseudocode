/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00CBF18
 * Callers:
 *     CheckForegroundRight @ 0x1C00CBD2C (CheckForegroundRight.c)
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C00CC03C (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  bool v8; // zf
  __int64 v10; // rdx
  __int64 v11; // rax

  if ( (*((_DWORD *)a1 + 194) & 0x100) != 0 )
    return 1LL;
  v6 = *((unsigned int *)a1 + 209);
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 400LL) + 836LL)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
    if ( !gpqForeground )
      return 1LL;
    v10 = *(_QWORD *)(gpqForeground + 120LL);
    v11 = v10 ? *(_QWORD *)(v10 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)(v11 + 400) + 836LL) == *((_DWORD *)a1 + 209) )
      return 1LL;
    v8 = (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) == 0;
  }
  else
  {
    if ( !(unsigned int)IsDesktopApp(a1, v6, a2, a4) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v7 = *(_QWORD *)(gpqForeground + 120LL);
    if ( !v7 )
      return 1LL;
    v8 = !IsNonImmersiveBand(v7);
  }
  return !v8;
}
