/*
 * XREFs of _RegisterErrorReportingDialog @ 0x1C01D32EC
 * Callers:
 *     NtUserRegisterErrorReportingDialog @ 0x1C01DE730 (NtUserRegisterErrorReportingDialog.c)
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     ?SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z @ 0x1C0132378 (-SendAsyncSGHOSTINFO@@YAHQEAU_GHOSTINFO@@@Z.c)
 */

__int64 __fastcall RegisterErrorReportingDialog(__int64 a1)
{
  __int64 v1; // rdx
  __int64 *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+24h] [rbp-34h]
  int v8; // [rsp+2Ch] [rbp-2Ch]
  int v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+34h] [rbp-24h]
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]

  if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
  {
    v10 = *v2;
    v7 = v3;
    v9 = v3;
    v11 = v3;
    v6 = 4;
    v8 = v4;
    LODWORD(v3) = SendAsyncSGHOSTINFO((struct _GHOSTINFO *const)&v6, v1, v3, v4);
  }
  return (unsigned int)v3;
}
