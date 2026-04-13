/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180021FFC
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800220FC (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x18004505C (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800452A4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x1800029C8 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::details::ReportFailure_CaughtExceptionCommon(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  _WORD *v3; // rdi
  char v4; // r10
  __int64 v5; // r9
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  char v13; // cl
  __int64 v15; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v17; // [rsp+90h] [rbp+28h]
  __int64 v18; // [rsp+98h] [rbp+30h]
  __int64 v19; // [rsp+A0h] [rbp+38h]
  _WORD *v20; // [rsp+A8h] [rbp+40h]
  __int64 v21; // [rsp+B0h] [rbp+48h]
  __int64 v22; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, _QWORD);
  v18 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _WORD *);
  v21 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v3 = v20;
  v4 = 0;
  LOBYTE(v15) = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( v20[v5] );
  v9 = 0;
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v10 = g_pfnResultFromCaughtExceptionInternal(&v20[v5], 2048 - v5, (__int64 *)va);
    v4 = v15;
    v9 = v10;
  }
  v11 = v9 >> 31;
  if ( (v9 & 0x80000000) == 0 )
    v9 = -2147024322;
  v12 = v19;
  if ( !(_DWORD)v22 && !(_BYTE)v11 )
    v12 = 3;
  v13 = 1;
  if ( v4 )
    v13 = 5;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, v18, v12, v9, v3, v13);
  return v9;
}
