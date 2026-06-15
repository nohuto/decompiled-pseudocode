/*
 * XREFs of ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x180019AAC
 * Callers:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180019BC4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 * Callees:
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x180002968 (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 *     __security_check_cookie @ 0x180034E70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180036250 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtException(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v7; // dl
  __int64 v10; // rcx
  signed int v11; // ebx
  signed int v12; // eax
  char v13; // r9
  BOOL v14; // ecx
  int v15; // ecx
  _BYTE v17[16]; // [rsp+50h] [rbp-1048h] BYREF
  _WORD v18[2048]; // [rsp+60h] [rbp-1038h] BYREF

  v7 = 0;
  v18[0] = 0;
  v17[0] = 0;
  v10 = -1LL;
  do
    ++v10;
  while ( v18[v10] );
  v11 = 0;
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v12 = g_pfnResultFromCaughtExceptionInternal(&v18[v10], 2048 - v10, v17);
    v7 = v17[0];
    v11 = v12;
  }
  v13 = 1;
  v14 = v11 < 0;
  if ( v11 >= 0 )
    v11 = -2147024322;
  v15 = !v14;
  if ( v7 )
    v13 = 5;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, 2 * v15 + 1, v11, v18, v13);
  return (unsigned int)v11;
}
