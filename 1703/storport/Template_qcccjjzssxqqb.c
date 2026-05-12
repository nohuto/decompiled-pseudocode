/*
 * XREFs of Template_qcccjjzssxqqb @ 0x1C0045BF0
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C00452EC (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjjzssxqqb(
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
        __int64 a13,
        char a14,
        __int64 a15,
        __int64 a16)
{
  const wchar_t *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  const char *v20; // rdx
  __int64 v21; // rcx
  int v22; // ecx
  const char *v23; // rcx
  int v24; // eax
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v29; // [rsp+50h] [rbp-B0h]
  __int64 v30; // [rsp+58h] [rbp-A8h]
  char *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  char *v33; // [rsp+70h] [rbp-90h]
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  const wchar_t *v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A8h] [rbp-58h]
  int v41; // [rsp+ACh] [rbp-54h]
  const char *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  const char *v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+CCh] [rbp-34h]
  __int64 *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  int *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  __int64 v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+158h] [rbp+58h] BYREF

  v56 = a4;
  v16 = a10;
  v27 = *(_QWORD *)&WPP_MAIN_CB.DeviceLock.Header.Lock;
  UserData.Ptr = (unsigned __int64)&v56;
  v26 = 216;
  v29 = &a5;
  v31 = &a6;
  v33 = &a7;
  v35 = a8;
  v37 = a9;
  v17 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v30 = 1LL;
  v32 = 1LL;
  v34 = 1LL;
  v36 = 16LL;
  v38 = 16LL;
  if ( a10 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a10[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v40 = v19;
  v41 = 0;
  if ( !a10 )
    v16 = L"NULL";
  v39 = v16;
  v20 = a11;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v43 = v22;
  v23 = a12;
  if ( !a11 )
    v20 = "NULL";
  v44 = 0;
  v42 = v20;
  if ( a12 )
  {
    do
      ++v17;
    while ( a12[v17] );
    v24 = v17 + 1;
  }
  else
  {
    v24 = 5;
  }
  v46 = v24;
  v47 = 0;
  v49 = 8LL;
  v48 = &v27;
  if ( !a12 )
    v23 = "NULL";
  v45 = v23;
  v50 = &a14;
  v51 = 4LL;
  v52 = &v26;
  v54 = a16;
  v53 = 4LL;
  v55 = 216LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitNvmeHealthLog, 0LL, 0xDu, &UserData);
}
