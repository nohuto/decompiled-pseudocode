/*
 * XREFs of WPP_SF_qSdL @ 0x180112350
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_qSdL(TRACEHANDLE a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v10; // [rsp+A0h] [rbp+28h]
  __int64 v11; // [rsp+A8h] [rbp+30h] BYREF
  va_list va1; // [rsp+A8h] [rbp+30h]
  va_list va2; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v10 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v3 = v10;
  if ( v10 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v10[v4] );
    v5 = v4 + 1;
  }
  else
  {
    v5 = 5LL;
  }
  v6 = 2 * v5;
  if ( !v10 )
    v3 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_dec5a53844bb36396a136e6751054188_Traceguids,
           0x10u,
           va,
           8LL,
           v3,
           v6,
           va1,
           4LL,
           va2,
           4LL,
           0LL);
}
