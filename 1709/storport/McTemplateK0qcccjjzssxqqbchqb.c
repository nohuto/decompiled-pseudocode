/*
 * XREFs of McTemplateK0qcccjjzssxqqbchqb @ 0x1C0042C20
 * Callers:
 *     StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004603C (StorpTelemetrySendUnitNvmeHealthInfo.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0003DBC (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qcccjjzssxqqbchqb(
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
        int a15,
        __int64 a16,
        char a17,
        char a18,
        int a19,
        __int64 a20)
{
  const wchar_t *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r8d
  const char *v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  const char *v27; // rcx
  int v28; // eax
  void *SecurityDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+40h] [rbp-C0h] BYREF
  int *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  char *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  char *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  char *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  const wchar_t *v44; // [rsp+B0h] [rbp-50h]
  int v45; // [rsp+B8h] [rbp-48h]
  int v46; // [rsp+BCh] [rbp-44h]
  const char *v47; // [rsp+C0h] [rbp-40h]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  const char *v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  int v52; // [rsp+DCh] [rbp-24h]
  void **p_SecurityDescriptor; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  int *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  __int64 v59; // [rsp+110h] [rbp+10h]
  int v60; // [rsp+118h] [rbp+18h]
  int v61; // [rsp+11Ch] [rbp+1Ch]
  char *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  char *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  int *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int64 v68; // [rsp+150h] [rbp+50h]
  int v69; // [rsp+158h] [rbp+58h]
  int v70; // [rsp+15Ch] [rbp+5Ch]
  int v71; // [rsp+198h] [rbp+98h] BYREF

  v71 = a4;
  v20 = a10;
  SecurityDescriptor = WPP_MAIN_CB.SecurityDescriptor;
  v32 = &v71;
  v34 = &a5;
  v33 = 4LL;
  v36 = &a6;
  v38 = &a7;
  v40 = a8;
  v42 = a9;
  v21 = -1LL;
  v35 = 1LL;
  v37 = 1LL;
  v39 = 1LL;
  v41 = 16LL;
  v43 = 16LL;
  if ( a10 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a10[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v45 = v23;
  v46 = 0;
  if ( !a10 )
    v20 = L"NULL";
  v24 = a11;
  v44 = v20;
  if ( a11 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a11[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5;
  }
  v48 = v26;
  v27 = a12;
  if ( !a11 )
    v24 = "NULL";
  v49 = 0;
  v47 = v24;
  if ( a12 )
  {
    do
      ++v21;
    while ( a12[v21] );
    v28 = v21 + 1;
  }
  else
  {
    v28 = 5;
  }
  v51 = v28;
  v52 = 0;
  p_SecurityDescriptor = &SecurityDescriptor;
  v61 = 0;
  v55 = &a14;
  if ( !a12 )
    v27 = "NULL";
  v70 = 0;
  v57 = &a15;
  v59 = a16;
  v60 = a15;
  v62 = &a17;
  v64 = &a18;
  v66 = &a19;
  v68 = a20;
  v69 = a19;
  v50 = v27;
  v54 = 8LL;
  v56 = 4LL;
  v58 = 4LL;
  v63 = 1LL;
  v65 = 2LL;
  v67 = 4LL;
  return McGenEventWriteKM((__int64)v27, &EventUnitNvmeHealthLog, 0LL, 0x12u, &v31);
}
