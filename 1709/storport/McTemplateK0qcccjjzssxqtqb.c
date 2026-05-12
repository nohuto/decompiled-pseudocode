/*
 * XREFs of McTemplateK0qcccjjzssxqtqb @ 0x1C00017F8
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0002ECC (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0003DBC (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0qcccjjzssxqtqb(
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
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r8d
  const char *v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  const char *v24; // rcx
  int v25; // eax
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  void *SecurityDescriptor; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v29[16]; // [rsp+40h] [rbp-C0h] BYREF
  int *v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  char *v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  char *v34; // [rsp+70h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-88h]
  char *v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  const wchar_t *v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  const char *v45; // [rsp+C0h] [rbp-40h]
  int v46; // [rsp+C8h] [rbp-38h]
  int v47; // [rsp+CCh] [rbp-34h]
  const char *v48; // [rsp+D0h] [rbp-30h]
  int v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  void **p_SecurityDescriptor; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  char *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  char *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int v61; // [rsp+168h] [rbp+68h] BYREF

  v61 = a4;
  v17 = a10;
  SecurityDescriptor = WPP_MAIN_CB.SecurityDescriptor;
  v30 = &v61;
  v32 = &a5;
  v27 = 512;
  v34 = &a6;
  v36 = &a7;
  v38 = a8;
  v40 = a9;
  v18 = -1LL;
  v31 = 4LL;
  v33 = 1LL;
  v35 = 1LL;
  v37 = 1LL;
  v39 = 16LL;
  v41 = 16LL;
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
  v43 = v20;
  v44 = 0;
  if ( !a10 )
    v17 = L"NULL";
  v42 = v17;
  v21 = a11;
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
  v46 = v23;
  v24 = a12;
  if ( !a11 )
    v21 = "NULL";
  v47 = 0;
  v45 = v21;
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
  v49 = v25;
  v50 = 0;
  p_SecurityDescriptor = &SecurityDescriptor;
  v52 = 8LL;
  v53 = &a14;
  if ( !a12 )
    v24 = "NULL";
  v48 = v24;
  v55 = &a15;
  v54 = 4LL;
  v57 = &v27;
  v59 = a17;
  v56 = 4LL;
  v58 = 4LL;
  v60 = 512LL;
  return McGenEventWriteKM(v24, &EventUnitSmartAttributes, 0LL, 15LL, v29);
}
