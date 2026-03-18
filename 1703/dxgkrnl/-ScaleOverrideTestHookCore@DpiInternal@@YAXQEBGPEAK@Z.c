/*
 * XREFs of ?ScaleOverrideTestHookCore@DpiInternal@@YAXQEBGPEAK@Z @ 0x1C000428C
 * Callers:
 *     ?ScaleOverrideTestHook@@YAXQEBGPEAK@Z @ 0x1C0003F74 (-ScaleOverrideTestHook@@YAXQEBGPEAK@Z.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+48h] [rbp-B8h]
  wchar_t *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  int v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  const wchar_t *v35; // [rsp+88h] [rbp-78h]
  int *v36; // [rsp+90h] [rbp-70h]
  int v37; // [rsp+98h] [rbp-68h]
  int *v38; // [rsp+A0h] [rbp-60h]
  int v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B8h] [rbp-48h]
  _BYTE v42[40]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[16]; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v44[80]; // [rsp+110h] [rbp+10h] BYREF

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
  v16 = v11;
  if ( v11 < 0
    || (v17 = RtlStringCbPrintfW(
                v44,
                0xA0uLL,
                L"%s\\%s\\%s",
                L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
                L"Monitors",
                pszDest),
        v16 = v17,
        v17 < 0) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v22 + 24) = v16;
    *(_QWORD *)(v22 + 32) = v10;
    WdLogEvent5_WdAssertion(v22);
  }
  else
  {
    v24 = 0;
    v28 = v44;
    v25 = 0;
    v35 = L"DesktopScaleFactor";
    v26 = 0LL;
    v36 = &v24;
    v38 = &v25;
    v27 = 5;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    v32 = 0;
    v33 = 0LL;
    v34 = 288;
    v37 = 0x4000000;
    v39 = 4;
    v40 = 0LL;
    v41 = 0;
    memset(v42, 0, sizeof(v42));
    v18 = RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\", &v26, 0LL, 0LL);
    v21 = v18;
    if ( v18 >= 0 )
    {
      if ( v24 != v25 )
        *(_DWORD *)a2 = v24;
    }
    else if ( v18 != -1073741772 )
    {
      v23 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v23 + 24) = v21;
      WdLogEvent5_WdError(v23);
    }
  }
}
