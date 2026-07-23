/*
 * XREFs of KiVerifyScopesExecute @ 0x1408B9D90
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiVerifyPdata @ 0x1408BA460 (KiVerifyPdata.c)
 */

void __fastcall KiVerifyScopesExecute(PVOID Parameter)
{
  int v1; // ebx
  __int64 (__fastcall **v2)(); // rdi
  int v3; // esi
  ULONG_PTR BugCheckParameter4; // rdx
  unsigned __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  BOOL v6; // [rsp+38h] [rbp-18h]
  int v7; // [rsp+3Ch] [rbp-14h]
  int v8; // [rsp+40h] [rbp-10h]
  ULONG_PTR v9; // [rsp+48h] [rbp-8h]

  v9 = 0LL;
  v1 = KiVerifyPass;
  v5 = 0xFEFFFFFFFFFFFFFFuLL;
  if ( !KiVerifyPass )
  {
    BugCheckParameter4 = v9;
    goto LABEL_10;
  }
  do
  {
    v2 = KiVerifyXcptRoutines;
    v6 = (v1 & 1) == 0;
    v3 = 0;
    do
    {
      v7 = 0;
      v8 = 0;
      ((void (__fastcall *)(unsigned __int64 *))*v2)(&v5);
      if ( !v8 )
        KeBugCheckEx(0x14Du, v3, v1, v7, 0LL);
      ++v3;
      ++v2;
      BugCheckParameter4 = __ROL8__(v7 ^ v9, v7 & 0x3F);
      v9 = BugCheckParameter4;
    }
    while ( (__int64)v2 < (__int64)&qword_1408F2148 );
    --v1;
  }
  while ( v1 );
  if ( BugCheckParameter4 != 0x7493D5224FA9E69ALL )
LABEL_10:
    KeBugCheckEx(0x14Du, 0xFFFFFFFFuLL, 0LL, 0x7493D5224FA9E69AuLL, BugCheckParameter4);
  KiVerifyPdata((ULONG_PTR)PsNtosImageBase);
  KiVerifyPdata((ULONG_PTR)PsHalImageBase);
}
