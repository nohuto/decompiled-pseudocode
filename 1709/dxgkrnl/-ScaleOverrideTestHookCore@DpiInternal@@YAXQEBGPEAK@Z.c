/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C000C5DC
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C000C5B8 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

void __fastcall DpiInternal::ScaleOverrideTestHookCore(DpiInternal *this, unsigned __int16 *a2, unsigned int *a3)
{
  __int64 v4; // rax
  DpiInternal *v5; // r8
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  NTSTATUS v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  int v23; // [rsp+48h] [rbp-B8h]
  wchar_t *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+80h] [rbp-80h]
  const wchar_t *v31; // [rsp+88h] [rbp-78h]
  int *v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+98h] [rbp-68h]
  int *v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  _BYTE v38[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v40[80]; // [rsp+110h] [rbp+10h] BYREF

  *(_DWORD *)a2 = 0;
  v4 = -1LL;
  v5 = this;
  v6 = 314159269;
  do
    ++v4;
  while ( *((_WORD *)this + v4) );
  v7 = 2 * v4;
  if ( v7 )
  {
    v8 = v7;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (DpiInternal *)((char *)v5 + 1);
      v6 ^= v9 + (v6 >> 2) + 2080 * v6;
      --v8;
    }
    while ( v8 );
  }
  v10 = v6 & 0x7FFFFFFF;
  v11 = RtlStringCbPrintfW(pszDest, 0x16uLL, L"%d", v10);
  v13 = v11;
  if ( v11 < 0
    || (v14 = RtlStringCbPrintfW(
                v40,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                pszDest),
        v13 = v14,
        v14 < 0) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v18 + 24) = v13;
    *(_QWORD *)(v18 + 32) = v10;
    WdLogEvent5_WdAssertion(v18);
  }
  else
  {
    v20 = 0;
    v24 = v40;
    v21 = 0;
    v31 = L"DesktopScaleFactor";
    v22 = 0LL;
    v32 = &v20;
    v34 = &v21;
    v23 = 5;
    v25 = 0LL;
    v26 = 0;
    v27 = 0LL;
    v28 = 0;
    v29 = 0LL;
    v30 = 288;
    v33 = 0x4000000;
    v35 = 4;
    v36 = 0LL;
    v37 = 0;
    memset(v38, 0, sizeof(v38));
    v15 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v22, 0LL, 0LL);
    v17 = v15;
    if ( v15 >= 0 )
    {
      if ( v20 != v21 )
        *(_DWORD *)a2 = v20;
    }
    else if ( v15 != -1073741772 )
    {
      v19 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v19 + 24) = v17;
      WdLogEvent5_WdError(v19);
    }
  }
}
