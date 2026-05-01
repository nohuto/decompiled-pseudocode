/*
 * XREFs of WPP_SF_lDqd @ 0x180132B7C
 * Callers:
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x1800481CC (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x18004829C (-_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_lDqd(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+98h] [rbp+20h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+28h] BYREF
  va_list va; // [rsp+A0h] [rbp+28h]
  __int64 v8; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v6 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v8 = va_arg(va2, _QWORD);
  v5 = a4;
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_ace03dded3743996b6b4d2e4c589bf4a_Traceguids,
           a2,
           &v5,
           4LL,
           va,
           4LL,
           va1,
           8LL,
           va2,
           4LL,
           0LL);
}
