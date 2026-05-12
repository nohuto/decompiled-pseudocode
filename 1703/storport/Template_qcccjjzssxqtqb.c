/*
 * XREFs of Template_qcccjjzssxqtqb @ 0x1C0001008
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0003774 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjjzssxqtqb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        int a13,
        char a14,
        char a15,
        int a16,
        __int64 a17)
{
  const wchar_t *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  const char *v24; // rcx
  int v25; // eax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  char *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  char *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  const wchar_t *v40; // [rsp+A0h] [rbp-60h]
  int v41; // [rsp+A8h] [rbp-58h]
  int v42; // [rsp+ACh] [rbp-54h]
  const char *v43; // [rsp+B0h] [rbp-50h]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  const char *v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C8h] [rbp-38h]
  int v48; // [rsp+CCh] [rbp-34h]
  __int64 *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+168h] [rbp+68h] BYREF

  v59 = a4;
  v17 = a10;
  v28 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
  UserData.Ptr = (unsigned __int64)&v59;
  v27 = 512;
  v30 = &a5;
  v32 = &a6;
  v34 = &a7;
  v36 = a8;
  v38 = a9;
  v18 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v31 = 1LL;
  v33 = 1LL;
  v35 = 1LL;
  v37 = 16LL;
  v39 = 16LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v41 = v20;
  v42 = 0;
  if ( !a10 )
    v17 = L"NULL";
  v21 = a11;
  v40 = v17;
  if ( a11 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a11[v22] );
    v23 = v22 + 1;
  }
  else
  {
    v23 = 5;
  }
  v44 = v23;
  v24 = a12;
  if ( !a11 )
    v21 = "NULL";
  v45 = 0;
  v43 = v21;
  if ( a12 )
  {
    do
      ++v18;
    while ( a12[v18] );
    v25 = v18 + 1;
  }
  else
  {
    v25 = 5;
  }
  v47 = v25;
  v48 = 0;
  v50 = 8LL;
  v49 = &v28;
  if ( !a12 )
    v24 = "NULL";
  v46 = v24;
  v51 = &a14;
  v52 = 4LL;
  v53 = &a15;
  v54 = 4LL;
  v55 = &v27;
  v57 = a17;
  v56 = 4LL;
  v58 = 512LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitSmartAttributes, 0LL, 0xEu, &UserData);
}
