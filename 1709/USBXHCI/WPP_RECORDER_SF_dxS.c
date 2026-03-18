/*
 * XREFs of WPP_RECORDER_SF_dxS @ 0x1C0015658
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00118AC (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dxS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8)
{
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  const wchar_t *v14; // rcx
  int v16; // [rsp+20h] [rbp-58h]

  v8 = (__int64)a8;
  v9 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a8;
    if ( !a8 )
      v14 = L"NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      8LL,
      v14,
      2 * v13,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( *(_WORD *)(v8 + 2 * v9) );
  }
  LOWORD(v16) = a4;
  return WppAutoLogTrace(a1, 4LL, 4LL, &WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v16, &a6);
}
