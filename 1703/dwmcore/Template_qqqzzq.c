/*
 * XREFs of Template_qqqzzq @ 0x180142888
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqzzq(
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
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-49h] BYREF
  int *v17; // [rsp+30h] [rbp-39h]
  __int64 v18; // [rsp+38h] [rbp-31h]
  char *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  const wchar_t *v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+5Ch] [rbp-Dh]
  const wchar_t *v24; // [rsp+60h] [rbp-9h]
  int v25; // [rsp+68h] [rbp-1h]
  int v26; // [rsp+6Ch] [rbp+3h]
  char *v27; // [rsp+70h] [rbp+7h]
  __int64 v28; // [rsp+78h] [rbp+Fh]
  int v29; // [rsp+C0h] [rbp+57h] BYREF
  int v30; // [rsp+C8h] [rbp+5Fh] BYREF

  v30 = a4;
  v29 = a3;
  v8 = a6;
  UserData.Ptr = (ULONGLONG)&v29;
  *(_QWORD *)&UserData.Size = 4LL;
  v17 = &v30;
  v19 = &a5;
  v9 = -1LL;
  v18 = 4LL;
  v10 = 10;
  v20 = 4LL;
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
  v22 = v12;
  v23 = 0;
  if ( !a6 )
    v8 = L"NULL";
  v21 = v8;
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
  v25 = v10;
  v24 = v13;
  v26 = 0;
  v27 = &a8;
  v28 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_ANIMATION_TTFF_ANALYSIS_EVENT, 6u, &UserData);
}
