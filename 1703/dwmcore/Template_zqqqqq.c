/*
 * XREFs of Template_zqqqqq @ 0x180142DDC
 * Callers:
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014236C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqqqqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7, char a8)
{
  __int64 v8; // rax
  ULONG v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-49h] BYREF
  int *v12; // [rsp+30h] [rbp-39h]
  __int64 v13; // [rsp+38h] [rbp-31h]
  char *v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  char *v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  char *v18; // [rsp+60h] [rbp-9h]
  __int64 v19; // [rsp+68h] [rbp-1h]
  char *v20; // [rsp+70h] [rbp+7h]
  __int64 v21; // [rsp+78h] [rbp+Fh]
  int v22; // [rsp+C8h] [rbp+5Fh] BYREF

  v22 = a4;
  if ( a3 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a3[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  UserData.Size = v9;
  if ( !a3 )
    a3 = L"NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a3;
  v12 = &v22;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v17 = 4LL;
  v18 = &a7;
  v20 = &a8;
  v19 = 4LL;
  v21 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_AGGREGATED_VSYNC_ANALYSIS_EVENT, 6u, &UserData);
}
