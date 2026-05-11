/*
 * XREFs of WPP_RECORDER_SF_qZ @ 0x1C0001104
 * Callers:
 *     DriverEntry @ 0x1C0013820 (DriverEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00074E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rbx
  const wchar_t *v9; // rsi
  unsigned int v10; // eax
  const wchar_t *v11; // r9
  const wchar_t *v12; // r8
  int v14; // [rsp+20h] [rbp-58h]

  v7 = a7;
  v9 = L"\b";
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a7 )
      v10 = *a7;
    else
      v10 = 8;
    if ( a7 )
      v11 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v11 = L"NULL";
    v12 = L"\b";
    if ( a7 )
      v12 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_82983b416a25373f9b248cd84a8a7ba2_Traceguids,
      22LL,
      &a6,
      8LL,
      v12,
      2LL,
      v11,
      v10,
      0LL);
  }
  if ( v7 )
    v9 = v7;
  LOWORD(v14) = 22;
  return WppAutoLogTrace(a1, 4LL, 1LL, &WPP_82983b416a25373f9b248cd84a8a7ba2_Traceguids, v14, &a6, 8LL, v9);
}
