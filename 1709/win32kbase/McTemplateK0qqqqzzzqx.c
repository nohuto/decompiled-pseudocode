/*
 * XREFs of McTemplateK0qqqqzzzqx @ 0x1C00E3A9C
 * Callers:
 *     EtwTraceMessageCheckDelay @ 0x1C00E0800 (EtwTraceMessageCheckDelay.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0009120 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qqqqzzzqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10,
        char a11,
        char a12)
{
  __int64 v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  int v15; // r8d
  const wchar_t *v16; // rax
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rax
  int v20; // edx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-99h] BYREF
  int *v23; // [rsp+40h] [rbp-89h]
  __int64 v24; // [rsp+48h] [rbp-81h]
  char *v25; // [rsp+50h] [rbp-79h]
  __int64 v26; // [rsp+58h] [rbp-71h]
  char *v27; // [rsp+60h] [rbp-69h]
  __int64 v28; // [rsp+68h] [rbp-61h]
  char *v29; // [rsp+70h] [rbp-59h]
  __int64 v30; // [rsp+78h] [rbp-51h]
  const wchar_t *v31; // [rsp+80h] [rbp-49h]
  int v32; // [rsp+88h] [rbp-41h]
  int v33; // [rsp+8Ch] [rbp-3Dh]
  const wchar_t *v34; // [rsp+90h] [rbp-39h]
  int v35; // [rsp+98h] [rbp-31h]
  int v36; // [rsp+9Ch] [rbp-2Dh]
  const wchar_t *v37; // [rsp+A0h] [rbp-29h]
  int v38; // [rsp+A8h] [rbp-21h]
  int v39; // [rsp+ACh] [rbp-1Dh]
  char *v40; // [rsp+B0h] [rbp-19h]
  __int64 v41; // [rsp+B8h] [rbp-11h]
  char *v42; // [rsp+C0h] [rbp-9h]
  __int64 v43; // [rsp+C8h] [rbp-1h]
  int v44; // [rsp+108h] [rbp+3Fh] BYREF

  v44 = a4;
  v24 = 4LL;
  v23 = &v44;
  v26 = 4LL;
  v25 = &a5;
  v12 = -1LL;
  v28 = 4LL;
  v27 = &a6;
  v30 = 4LL;
  v29 = &a7;
  v13 = a8;
  if ( a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a8[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v32 = v15;
  v33 = 0;
  if ( !a8 )
    v13 = L"NULL";
  v31 = v13;
  v16 = a9;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v35 = v18;
  v36 = 0;
  if ( !a9 )
    v16 = L"NULL";
  v34 = v16;
  v19 = a10;
  if ( a10 )
  {
    do
      ++v12;
    while ( a10[v12] );
    v20 = 2 * v12 + 2;
  }
  else
  {
    v20 = 10;
  }
  v38 = v20;
  v39 = 0;
  if ( !a10 )
    v19 = L"NULL";
  v41 = 4LL;
  v37 = v19;
  v43 = 8LL;
  v40 = &a11;
  v42 = &a12;
  return McGenEventWriteKM(v12, &MessageCheckDelayEvent, &W32kControlGuid, 0xAu, &v22);
}
