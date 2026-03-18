/*
 * XREFs of Template_pqzzzzzzz @ 0x1401F9104
 * Callers:
 *     PiDqTraceQueryCreate @ 0x1404B8E84 (PiDqTraceQueryCreate.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS Template_pqzzzzzzz(__int64 a1, __int64 a2, const GUID *a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v5; // rax
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // r9d
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  const wchar_t *v12; // rcx
  __int64 v13; // rdx
  int v14; // r9d
  const wchar_t *v15; // rcx
  __int64 v16; // rdx
  int v17; // r9d
  const wchar_t *v18; // rcx
  __int64 v19; // rdx
  int v20; // r9d
  const wchar_t *v21; // rcx
  __int64 v22; // rdx
  int v23; // r9d
  const wchar_t *v24; // rcx
  bool v25; // zf
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-99h] BYREF
  va_list v28; // [rsp+58h] [rbp-89h]
  __int64 v29; // [rsp+60h] [rbp-81h]
  const wchar_t *v30; // [rsp+68h] [rbp-79h]
  int v31; // [rsp+70h] [rbp-71h]
  int v32; // [rsp+74h] [rbp-6Dh]
  const wchar_t *v33; // [rsp+78h] [rbp-69h]
  int v34; // [rsp+80h] [rbp-61h]
  int v35; // [rsp+84h] [rbp-5Dh]
  const wchar_t *v36; // [rsp+88h] [rbp-59h]
  int v37; // [rsp+90h] [rbp-51h]
  int v38; // [rsp+94h] [rbp-4Dh]
  const wchar_t *v39; // [rsp+98h] [rbp-49h]
  int v40; // [rsp+A0h] [rbp-41h]
  int v41; // [rsp+A4h] [rbp-3Dh]
  const wchar_t *v42; // [rsp+A8h] [rbp-39h]
  int v43; // [rsp+B0h] [rbp-31h]
  int v44; // [rsp+B4h] [rbp-2Dh]
  const wchar_t *v45; // [rsp+B8h] [rbp-29h]
  int v46; // [rsp+C0h] [rbp-21h]
  int v47; // [rsp+C4h] [rbp-1Dh]
  const wchar_t *v48; // [rsp+C8h] [rbp-19h]
  int v49; // [rsp+D0h] [rbp-11h]
  int v50; // [rsp+D4h] [rbp-Dh]
  __int64 v51; // [rsp+120h] [rbp+3Fh] BYREF
  va_list va; // [rsp+120h] [rbp+3Fh]
  __int64 v53; // [rsp+128h] [rbp+47h] BYREF
  va_list va1; // [rsp+128h] [rbp+47h]
  const wchar_t *v55; // [rsp+130h] [rbp+4Fh]
  const wchar_t *v56; // [rsp+138h] [rbp+57h]
  const wchar_t *v57; // [rsp+140h] [rbp+5Fh]
  const wchar_t *v58; // [rsp+148h] [rbp+67h]
  const wchar_t *v59; // [rsp+150h] [rbp+6Fh]
  const wchar_t *v60; // [rsp+158h] [rbp+77h]
  const wchar_t *v61; // [rsp+160h] [rbp+7Fh]
  va_list va2; // [rsp+168h] [rbp+87h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v51 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v53 = va_arg(va2, _QWORD);
  v55 = va_arg(va2, const wchar_t *);
  v56 = va_arg(va2, const wchar_t *);
  v57 = va_arg(va2, const wchar_t *);
  v58 = va_arg(va2, const wchar_t *);
  v59 = va_arg(va2, const wchar_t *);
  v60 = va_arg(va2, const wchar_t *);
  v61 = va_arg(va2, const wchar_t *);
  v3 = v55;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v28, va1);
  v5 = -1LL;
  v29 = 4LL;
  v6 = 10;
  if ( v55 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v55[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10;
  }
  v31 = v8;
  v32 = 0;
  if ( !v55 )
    v3 = L"NULL";
  v30 = v3;
  v9 = v56;
  if ( v56 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v56[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v34 = v11;
  v35 = 0;
  if ( !v56 )
    v9 = L"NULL";
  v33 = v9;
  v12 = v57;
  if ( v57 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( v57[v13] );
    v14 = 2 * v13 + 2;
  }
  else
  {
    v14 = 10;
  }
  v37 = v14;
  v38 = 0;
  if ( !v57 )
    v12 = L"NULL";
  v36 = v12;
  v15 = v58;
  if ( v58 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v58[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v40 = v17;
  v41 = 0;
  if ( !v58 )
    v15 = L"NULL";
  v39 = v15;
  v18 = v59;
  if ( v59 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v59[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v43 = v20;
  v44 = 0;
  if ( !v59 )
    v18 = L"NULL";
  v42 = v18;
  v21 = v60;
  if ( v60 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v60[v22] );
    v23 = 2 * v22 + 2;
  }
  else
  {
    v23 = 10;
  }
  v46 = v23;
  v47 = 0;
  if ( !v60 )
    v21 = L"NULL";
  v45 = v21;
  v24 = v61;
  v25 = v61 == 0LL;
  if ( v61 )
  {
    do
      ++v5;
    while ( v61[v5] );
    v6 = 2 * v5 + 2;
    v25 = v61 == 0LL;
  }
  if ( v25 )
    v24 = L"NULL";
  v49 = v6;
  v48 = v24;
  v50 = 0;
  return EtwWriteEx(Microsoft_Windows_Kernel_PnPHandle, &KMPnPEvt_DevQuery_QueryStart, 0LL, 0, a3, 0LL, 9u, &UserData);
}
