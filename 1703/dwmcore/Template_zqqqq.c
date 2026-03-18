/*
 * XREFs of Template_zqqqq @ 0x180142D0C
 * Callers:
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014236C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_zqqqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // rax
  ULONG v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-31h] BYREF
  int *v11; // [rsp+30h] [rbp-21h]
  __int64 v12; // [rsp+38h] [rbp-19h]
  char *v13; // [rsp+40h] [rbp-11h]
  __int64 v14; // [rsp+48h] [rbp-9h]
  char *v15; // [rsp+50h] [rbp-1h]
  __int64 v16; // [rsp+58h] [rbp+7h]
  char *v17; // [rsp+60h] [rbp+Fh]
  __int64 v18; // [rsp+68h] [rbp+17h]
  int v19; // [rsp+B8h] [rbp+67h] BYREF

  v19 = a4;
  if ( a3 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a3[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  UserData.Size = v8;
  if ( !a3 )
    a3 = L"NULL";
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)a3;
  v11 = &v19;
  v12 = 4LL;
  v13 = &a5;
  v14 = 4LL;
  v15 = &a6;
  v16 = 4LL;
  v17 = &a7;
  v18 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_TELEMETRY_AGGREGATED_TTFF_ANALYSIS_EVENT, 5u, &UserData);
}
