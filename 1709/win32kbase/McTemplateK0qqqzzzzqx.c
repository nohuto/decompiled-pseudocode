/*
 * XREFs of McTemplateK0qqqzzzzqx @ 0x1C00E4078
 * Callers:
 *     EtwTraceInputProcessDelay @ 0x1C00E03A0 (EtwTraceInputProcessDelay.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqzzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  const wchar_t *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  const wchar_t *v22; // rcx
  int v23; // edx
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+30h] [rbp-99h] BYREF
  int *v26; // [rsp+40h] [rbp-89h]
  __int64 v27; // [rsp+48h] [rbp-81h]
  char *v28; // [rsp+50h] [rbp-79h]
  __int64 v29; // [rsp+58h] [rbp-71h]
  char *v30; // [rsp+60h] [rbp-69h]
  __int64 v31; // [rsp+68h] [rbp-61h]
  const wchar_t *v32; // [rsp+70h] [rbp-59h]
  int v33; // [rsp+78h] [rbp-51h]
  int v34; // [rsp+7Ch] [rbp-4Dh]
  const wchar_t *v35; // [rsp+80h] [rbp-49h]
  int v36; // [rsp+88h] [rbp-41h]
  int v37; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v38; // [rsp+90h] [rbp-39h]
  int v39; // [rsp+98h] [rbp-31h]
  int v40; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v41; // [rsp+A0h] [rbp-29h]
  int v42; // [rsp+A8h] [rbp-21h]
  int v43; // [rsp+ACh] [rbp-1Dh]
  char *v44; // [rsp+B0h] [rbp-19h]
  __int64 v45; // [rsp+B8h] [rbp-11h]
  char *v46; // [rsp+C0h] [rbp-9h]
  __int64 v47; // [rsp+C8h] [rbp-1h]
  int v48; // [rsp+108h] [rbp+3Fh] BYREF

  v48 = a4;
  v12 = a7;
  v26 = &v48;
  v27 = 4LL;
  v28 = &a5;
  v30 = &a6;
  v13 = -1LL;
  v29 = 4LL;
  v31 = 4LL;
  if ( a7 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a7[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v33 = v15;
  v34 = 0;
  if ( !a7 )
    v12 = L"NULL";
  v32 = v12;
  v16 = a8;
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v36 = v18;
  v37 = 0;
  if ( !a8 )
    v16 = L"NULL";
  v35 = v16;
  v19 = a9;
  if ( a9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a9[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10;
  }
  v39 = v21;
  v40 = 0;
  if ( !a9 )
    v19 = L"NULL";
  v38 = v19;
  v22 = a10;
  if ( a10 )
  {
    do
      ++v13;
    while ( a10[v13] );
    v23 = 2 * v13 + 2;
  }
  else
  {
    v23 = 10;
  }
  v42 = v23;
  v44 = &a11;
  v43 = 0;
  v46 = &a12;
  v45 = 4LL;
  if ( !a10 )
    v22 = L"NULL";
  v41 = v22;
  v47 = 8LL;
  return McGenEventWriteKM((__int64)v22, &ImmersiveInputProcessDelayEvent, &W32kControlGuid, 0xAu, &v25);
}
