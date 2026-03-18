/*
 * XREFs of Template_xxqqxxqzqqqqqqzzqq @ 0x180142AC8
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B9C94 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxqqxxqzqqqqqqzzqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const wchar_t *a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        const wchar_t *a17,
        const wchar_t *a18,
        char a19,
        char a20)
{
  const wchar_t *v20; // r8
  int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // edx
  const wchar_t *v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  const wchar_t *v28; // rcx
  bool v29; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-D0h]
  __int64 v33; // [rsp+40h] [rbp-C8h]
  char *v34; // [rsp+48h] [rbp-C0h]
  __int64 v35; // [rsp+50h] [rbp-B8h]
  char *v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h]
  char *v38; // [rsp+68h] [rbp-A0h]
  __int64 v39; // [rsp+70h] [rbp-98h]
  char *v40; // [rsp+78h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-88h]
  char *v42; // [rsp+88h] [rbp-80h]
  __int64 v43; // [rsp+90h] [rbp-78h]
  const wchar_t *v44; // [rsp+98h] [rbp-70h]
  int v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A4h] [rbp-64h]
  char *v47; // [rsp+A8h] [rbp-60h]
  __int64 v48; // [rsp+B0h] [rbp-58h]
  char *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  char *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  char *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  char *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  char *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  const wchar_t *v59; // [rsp+108h] [rbp+0h]
  int v60; // [rsp+110h] [rbp+8h]
  int v61; // [rsp+114h] [rbp+Ch]
  const wchar_t *v62; // [rsp+118h] [rbp+10h]
  int v63; // [rsp+120h] [rbp+18h]
  int v64; // [rsp+124h] [rbp+1Ch]
  char *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  char *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  __int64 v69; // [rsp+188h] [rbp+80h] BYREF
  __int64 v70; // [rsp+190h] [rbp+88h] BYREF

  v70 = a4;
  v69 = a3;
  v20 = a10;
  UserData.Ptr = (ULONGLONG)&v69;
  *(_QWORD *)&UserData.Size = 8LL;
  v32 = &v70;
  v34 = &a5;
  v36 = &a6;
  v21 = 10;
  v33 = 8LL;
  v38 = &a7;
  v40 = &a8;
  v42 = &a9;
  v22 = -1LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 4LL;
  if ( a10 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( a10[v23] );
    v24 = 2 * v23 + 2;
  }
  else
  {
    v24 = 10;
  }
  v45 = v24;
  v25 = a17;
  v47 = &a11;
  v46 = 0;
  v49 = &a12;
  if ( !a10 )
    v20 = L"NULL";
  v44 = v20;
  v51 = &a13;
  v53 = &a14;
  v55 = &a15;
  v57 = &a16;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 4LL;
  if ( a17 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( a17[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v27 = 10;
  }
  v28 = a18;
  v60 = v27;
  if ( !a17 )
    v25 = L"NULL";
  v61 = 0;
  v59 = v25;
  v29 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v22;
    while ( a18[v22] );
    v21 = 2 * v22 + 2;
    v29 = a18 == 0LL;
  }
  if ( v29 )
    v28 = L"NULL";
  v63 = v21;
  v62 = v28;
  v65 = &a19;
  v64 = 0;
  v67 = &a20;
  v66 = 4LL;
  v68 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ANIMATION_LAST_FRAME_EVENT, 0x12u, &UserData);
}
