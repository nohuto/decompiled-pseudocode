/*
 * XREFs of WPP_RECORDER_SF_Sd @ 0x1C0037B54
 * Callers:
 *     CheckUSBFnConfiguration @ 0x1C0037EF8 (CheckUSBFnConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  int v14; // [rsp+20h] [rbp-48h]
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a6 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( a6[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = 2 * v10;
    v12 = L"NULL";
    if ( a6 )
      v12 = a6;
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids,
      23LL,
      v12,
      v11,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( a6 )
    v6 = a6;
  LOWORD(v14) = 23;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_9cce5eef9b87323d59081bfb01133c40_Traceguids, v14, v6);
}
