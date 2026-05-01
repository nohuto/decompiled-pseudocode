/*
 * XREFs of WPP_SF_LSdL @ 0x1801326D8
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180049A20 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18005D358 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800F9450 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_LSdL(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // [rsp+98h] [rbp+20h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v11 = va_arg(va1, _QWORD);
  v10 = a4;
  v5 = a5;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5LL;
  }
  v8 = 2 * v7;
  if ( !a5 )
    v5 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
           a2,
           &v10,
           4LL,
           v5,
           v8,
           va,
           4LL,
           va1,
           4LL,
           0LL);
}
