/*
 * XREFs of WPP_RECORDER_SF_Sdq @ 0x1C0110520
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Sdq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rdi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  const wchar_t *v12; // rdx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  v6 = a6;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
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
    v12 = a6;
    if ( !a6 )
      v12 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, const union _LARGE_INTEGER *, __int64, const wchar_t *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
      43LL,
      v12,
      v11,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v6 = L"NULL";
  LOWORD(v15) = 43;
  return WppAutoLogTrace(
           a1,
           3LL,
           19LL,
           &WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
           v15,
           v6,
           2 * v13,
           (__int64 *)va);
}
