/*
 * XREFs of KiVerifyScopesExecute @ 0x140818740
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiVerifyPdata @ 0x140818E0C (KiVerifyPdata.c)
 */

__int64 KiVerifyScopesExecute()
{
  int v0; // ebx
  __int64 (__fastcall **v1)(); // rdi
  int v2; // esi
  __int64 (__fastcall *v3)(); // rax
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  BOOL v7; // [rsp+38h] [rbp-18h]
  int v8; // [rsp+3Ch] [rbp-14h]
  int v9; // [rsp+40h] [rbp-10h]
  ULONG_PTR v10; // [rsp+48h] [rbp-8h]

  v10 = 0LL;
  v0 = KiVerifyPass;
  v6 = 0xFEFFFFFFFFFFFFFFuLL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v10;
    goto LABEL_10;
  }
  do
  {
    v1 = KiVerifyXcptRoutines;
    v7 = (v0 & 1) == 0;
    v2 = 0;
    do
    {
      v3 = *v1;
      v8 = 0;
      v9 = 0;
      ((void (__fastcall *)(unsigned __int64 *))v3)(&v6);
      if ( !v9 )
        KeBugCheckEx(0x14Du, v2, v0, v8, 0LL);
      ++v2;
      ++v1;
      BugCheckParameter4 = __ROL8__(v8 ^ v10, v8 & 0x3F);
      v10 = BugCheckParameter4;
    }
    while ( (__int64)v1 < (__int64)&qword_1407C5118 );
    --v0;
  }
  while ( v0 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  return KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
