/*
 * XREFs of Template_pzqqxxtt @ 0x1C002FF98
 * Callers:
 *     RaidpAdapterDpcRoutine @ 0x1C0008810 (RaidpAdapterDpcRoutine.c)
 *     RaidpAdapterRedirectDpcRoutine @ 0x1C001E370 (RaidpAdapterRedirectDpcRoutine.c)
 *     RaidCompletionDpcRoutine @ 0x1C002EBF0 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS Template_pzqqxxtt(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-81h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-71h]
  int v9; // [rsp+48h] [rbp-69h]
  int v10; // [rsp+4Ch] [rbp-65h]
  va_list v11; // [rsp+50h] [rbp-61h]
  __int64 v12; // [rsp+58h] [rbp-59h]
  va_list v13; // [rsp+60h] [rbp-51h]
  __int64 v14; // [rsp+68h] [rbp-49h]
  va_list v15; // [rsp+70h] [rbp-41h]
  __int64 v16; // [rsp+78h] [rbp-39h]
  va_list v17; // [rsp+80h] [rbp-31h]
  __int64 v18; // [rsp+88h] [rbp-29h]
  va_list v19; // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  va_list v21; // [rsp+A0h] [rbp-11h]
  __int64 v22; // [rsp+A8h] [rbp-9h]
  __int64 v23; // [rsp+F8h] [rbp+47h] BYREF
  va_list va; // [rsp+F8h] [rbp+47h]
  const wchar_t *v25; // [rsp+100h] [rbp+4Fh]
  __int64 v26; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  __int64 v28; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+110h] [rbp+5Fh]
  __int64 v30; // [rsp+118h] [rbp+67h] BYREF
  va_list va3; // [rsp+118h] [rbp+67h]
  __int64 v32; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va4; // [rsp+120h] [rbp+6Fh]
  __int64 v34; // [rsp+128h] [rbp+77h] BYREF
  va_list va5; // [rsp+128h] [rbp+77h]
  va_list va6; // [rsp+130h] [rbp+7Fh] BYREF

  va_start(va6, a3);
  va_start(va5, a3);
  va_start(va4, a3);
  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v23 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, const wchar_t *);
  va_copy(va2, va1);
  v26 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v28 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v30 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v32 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v34 = va_arg(va6, _QWORD);
  v3 = v25;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  if ( v25 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v25[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !v25 )
    v3 = L"NULL";
  v12 = 4LL;
  v8 = v3;
  va_copy(v11, va1);
  v14 = 4LL;
  va_copy(v13, va2);
  v16 = 8LL;
  va_copy(v15, va3);
  va_copy(v17, va4);
  va_copy(v19, va5);
  va_copy(v21, va6);
  v18 = 8LL;
  v20 = 4LL;
  v22 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventDpc, 0LL, 8u, &UserData);
}
