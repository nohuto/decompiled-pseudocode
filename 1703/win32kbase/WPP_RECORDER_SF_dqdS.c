/*
 * XREFs of WPP_RECORDER_SF_dqdS @ 0x1C010D35C
 * Callers:
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C010D020 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_dqdS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        const wchar_t *a9)
{
  __int64 v9; // rdi
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  const wchar_t *v14; // rdx
  int v16; // [rsp+20h] [rbp-68h]

  v9 = (__int64)a9;
  v11 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    if ( a9 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a9[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = a9;
    if ( !a9 )
      v14 = L"NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, const wchar_t *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_bde2c2312b7534929182a13e08e71911_Traceguids,
      25LL,
      &a6,
      4LL,
      &a7,
      8LL,
      &a8,
      4LL,
      v14,
      2 * v13,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v11;
    while ( *(_WORD *)(v9 + 2 * v11) );
  }
  LOWORD(v16) = 25;
  return WppAutoLogTrace(a1, 3LL, 20LL, &WPP_bde2c2312b7534929182a13e08e71911_Traceguids, v16, &a6, 4LL, &a7);
}
