/*
 * XREFs of MiLogMdlRangeEvent @ 0x140254F3C
 * Callers:
 *     MiInitializeMdlPages @ 0x1400B36CC (MiInitializeMdlPages.c)
 *     MiFreePagesFromMdl @ 0x140136794 (MiFreePagesFromMdl.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x140003F94 (MiGetLeafPfnBuddy.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall MiLogMdlRangeEvent(_QWORD *a1, __int16 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v6; // rcx
  __int64 v7; // r8
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-38h]
  _QWORD *v13; // [rsp+48h] [rbp-30h] BYREF
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]

  v3 = a1;
  v6 = (_QWORD *)(48LL * *a1 - 0x58000000000LL);
  v7 = (v6[5] >> 54) & 7LL;
  if ( v7 == 1 )
    result = MiGetLeafPfnBuddy(v6);
  else
    result = 0LL;
  if ( a3 )
  {
    v9 = (16 * (result & 0xFFFFFFFFFFFFLL)) | ((v7 != 1) + 9LL);
    do
    {
      v11[0] = v9;
      v12 = 0LL;
      v10 = v3;
      v11[1] = *v3;
      do
      {
        ++v3;
        --a3;
      }
      while ( a3 && *v3 == *(v3 - 1) + 1LL );
      v15 = 0;
      v14 = 24;
      v12 = v3 - v10;
      v13 = v11;
      result = EtwTraceKernelEvent((int)&v13, 1, 0x20000001u, a2, 289413890);
    }
    while ( a3 );
  }
  return result;
}
