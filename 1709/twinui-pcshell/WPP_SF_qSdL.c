/*
 * XREFs of WPP_SF_qSdL @ 0x180006D18
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSdL(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v11; // [rsp+A0h] [rbp+28h]
  __int64 v12; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  if ( v11 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v11[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = L"NULL";
  v7 = 2 * v5;
  if ( v11 )
    v6 = v11;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_a48b1226f8c73eed2d41046d9a93f3a8_Traceguids,
           0x10u,
           va,
           8LL,
           v6,
           v7,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
