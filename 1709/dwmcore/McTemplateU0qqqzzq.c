/*
 * XREFs of McTemplateU0qqqzzq @ 0x18012E6C4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x18000345C (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0qqqzzq(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rdx
  int v12; // r8d
  const wchar_t *v13; // rcx
  bool v14; // zf
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+20h] [rbp-49h] BYREF
  int *v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  int *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  char *v21; // [rsp+50h] [rbp-19h]
  __int64 v22; // [rsp+58h] [rbp-11h]
  const wchar_t *v23; // [rsp+60h] [rbp-9h]
  int v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+6Ch] [rbp+3h]
  const wchar_t *v26; // [rsp+70h] [rbp+7h]
  int v27; // [rsp+78h] [rbp+Fh]
  int v28; // [rsp+7Ch] [rbp+13h]
  char *v29; // [rsp+80h] [rbp+17h]
  __int64 v30; // [rsp+88h] [rbp+1Fh]
  int v31; // [rsp+C0h] [rbp+57h] BYREF
  int v32; // [rsp+C8h] [rbp+5Fh] BYREF

  v32 = a4;
  v31 = a3;
  v8 = a6;
  v17 = &v31;
  v18 = 4LL;
  v19 = &v32;
  v21 = &a5;
  v9 = -1LL;
  v20 = 4LL;
  v10 = 10;
  v22 = 4LL;
  if ( a6 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a6[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v12 = 10;
  }
  v24 = v12;
  v25 = 0;
  if ( !a6 )
    v8 = L"NULL";
  v23 = v8;
  v13 = a7;
  v14 = a7 == 0LL;
  if ( a7 )
  {
    do
      ++v9;
    while ( a7[v9] );
    v10 = 2 * v9 + 2;
    v14 = a7 == 0LL;
  }
  if ( v14 )
    v13 = L"NULL";
  v27 = v10;
  v26 = v13;
  v28 = 0;
  v29 = &a8;
  v30 = 4LL;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_ANIMATION_TTFF_ANALYSIS_EVENT,
           7u,
           &v16);
}
