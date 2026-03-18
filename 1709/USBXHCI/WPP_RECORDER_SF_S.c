/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0015E94
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, const char *a6)
{
  const char *v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // rcx
  int v13; // [rsp+20h] [rbp-28h]

  v6 = a6;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
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
    v11 = a6;
    if ( !a6 )
      v11 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, const char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      222LL,
      v11,
      v10,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
  }
  if ( !a6 )
    v6 = "NULL";
  LOWORD(v13) = 222;
  return WppAutoLogTrace(a1, 2LL, 4LL, &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v13, v6);
}
