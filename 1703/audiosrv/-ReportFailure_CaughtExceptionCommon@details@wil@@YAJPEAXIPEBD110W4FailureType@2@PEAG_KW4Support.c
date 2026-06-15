/*
 * XREFs of ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800A1440
 * Callers:
 *     ?ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions@2@@Z @ 0x1800A13E4 (-ReportFailure_CaughtException@details@wil@@YAJPEAXIPEBD110W4FailureType@2@W4SupportedExceptions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z @ 0x18007E76C (-ReportFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBGW4ReportFailureOptions@12@@Z.c)
 */

__int64 __fastcall wil::details::ReportFailure_CaughtExceptionCommon(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        _WORD *a8)
{
  _WORD *v8; // rdi
  char v9; // si
  __int64 v10; // rax
  int v14; // ebp
  char v15; // r10
  signed int v16; // ebx
  signed int v17; // eax

  v8 = a8;
  v9 = 1;
  a7 = 0;
  v10 = -1LL;
  v14 = 1;
  v15 = 0;
  do
    ++v10;
  while ( a8[v10] );
  v16 = 0;
  if ( g_pfnResultFromCaughtExceptionInternal )
  {
    v17 = ((__int64 (__fastcall *)(_WORD *, __int64, char *))g_pfnResultFromCaughtExceptionInternal)(
            &a8[v10],
            2048 - v10,
            &a7);
    v15 = a7;
    v16 = v17;
  }
  if ( v16 >= 0 )
  {
    v16 = -2147024322;
    v14 = 3;
  }
  if ( v15 )
    v9 = 5;
  wil::details::ReportFailure(a1, a2, a3, 0LL, 0LL, a6, v14, v16, v8, v9);
  return (unsigned int)v16;
}
