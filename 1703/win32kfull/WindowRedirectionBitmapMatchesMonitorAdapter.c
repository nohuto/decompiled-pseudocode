/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C009C968
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetWindowMonitorAdapterLuid @ 0x1C009C9F4 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C009CA40 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  HWND v1; // rcx
  __int64 v3; // [rsp+38h] [rbp-8h] BYREF
  __int64 v4; // [rsp+60h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+30h]
  __int64 v6; // [rsp+78h] [rbp+38h]

  LODWORD(v4) = 0;
  v6 = 0LL;
  v1 = *a1;
  v5 = 0LL;
  GreGetDxSharedSurface(v1, (__int64)&v4, (__int64)&v3);
  return 1LL;
}
