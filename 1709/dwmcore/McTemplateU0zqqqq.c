/*
 * XREFs of McTemplateU0zqqqq @ 0x18012EC48
 * Callers:
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18012E1DC (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0zqqqq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6, char a7)
{
  __int64 v7; // rax
  int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+20h] [rbp-31h] BYREF
  const wchar_t *v11; // [rsp+30h] [rbp-21h]
  int v12; // [rsp+38h] [rbp-19h]
  int v13; // [rsp+3Ch] [rbp-15h]
  int *v14; // [rsp+40h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp-9h]
  char *v16; // [rsp+50h] [rbp-1h]
  __int64 v17; // [rsp+58h] [rbp+7h]
  char *v18; // [rsp+60h] [rbp+Fh]
  __int64 v19; // [rsp+68h] [rbp+17h]
  char *v20; // [rsp+70h] [rbp+1Fh]
  __int64 v21; // [rsp+78h] [rbp+27h]
  int v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = a4;
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
  v12 = v8;
  v13 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v15 = 4LL;
  v11 = a3;
  v14 = &v22;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  return McGenEventWriteUM(
           &Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_TELEMETRY_AGGREGATED_TTFF_ANALYSIS_EVENT,
           6u,
           &v10);
}
