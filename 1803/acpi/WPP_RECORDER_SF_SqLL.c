/*
 * XREFs of WPP_RECORDER_SF_SqLL @ 0x1C002E348
 * Callers:
 *     ACPIMatchHardwareId @ 0x1C007E598 (ACPIMatchHardwareId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_SqLL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, const wchar_t *a6, ...)
{
  const wchar_t *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+70h] [rbp-18h]
  __int64 v17; // [rsp+78h] [rbp-10h]
  __int64 v18; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v20; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
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
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids,
      12LL,
      v12,
      v11,
      (__int64 *)va);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v6 = L"NULL";
  LOWORD(v15) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           6LL,
           &WPP_5674c7d3fdf73a809948aef8edb05fda_Traceguids,
           v15,
           v6,
           2 * v13,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL,
           v16,
           v17);
}
