/*
 * XREFs of WPP_RECORDER_SF_DSd @ 0x1C010FFC4
 * Callers:
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0094CB4 (RIMRegisterForDeviceChangeNotifications.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  const wchar_t *v11; // rdx
  int v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v16; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const wchar_t *);
  v5 = v16;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( v16 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v16[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = 2 * v9;
    v11 = v16;
    if ( !v16 )
      v11 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
      52LL,
      (__int64 *)va,
      4LL,
      v11,
      v10,
      va1,
      4LL,
      0LL);
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( v5[v7] );
  }
  if ( !v5 )
    v5 = L"NULL";
  LOWORD(v13) = 52;
  return WppAutoLogTrace(a1, 3LL, 19LL, &WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids, v13, (__int64 *)va, 4LL, v5);
}
