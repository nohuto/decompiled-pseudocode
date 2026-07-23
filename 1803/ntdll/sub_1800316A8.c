/*
 * XREFs of sub_1800316A8 @ 0x1800316A8
 * Callers:
 *     sub_18003545C @ 0x18003545C (sub_18003545C.c)
 * Callees:
 *     sub_180030B84 @ 0x180030B84 (sub_180030B84.c)
 *     sub_180032B9C @ 0x180032B9C (sub_180032B9C.c)
 *     sub_180032CEC @ 0x180032CEC (sub_180032CEC.c)
 *     sub_180035DEC @ 0x180035DEC (sub_180035DEC.c)
 *     sub_18003645C @ 0x18003645C (sub_18003645C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800316A8(__int64 a1, __int64 a2, char a3, unsigned __int16 a4, __int64 a5)
{
  int v9; // ebx
  unsigned int v10; // edi
  wchar_t *v11; // rbx
  int v12; // eax
  _QWORD *v13; // rdi
  unsigned int v14; // r15d
  bool v16; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[4]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t *String2; // [rsp+40h] [rbp-C0h]
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v22[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress = 0LL;
  memset(v22, 0, 0xAAuLL);
  v16 = 0;
  v18 = 0LL;
  String2 = 0LL;
  if ( !a1 || !a2 || !a5 || !*(_QWORD *)a5 )
    return 3221225485LL;
  v9 = sub_180032B9C(&BaseAddress, a2, 25LL, 0LL);
  if ( v9 >= 0 )
  {
    v10 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_13:
      v13 = BaseAddress;
      v14 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        do
        {
          LODWORD(v18) = 11141120;
          String2 = (wchar_t *)v22;
          v9 = sub_180035DEC(a2, v13[3] + 6LL * v14, &v18);
          if ( v9 < 0 )
            break;
          v9 = sub_18003645C(a5, a2, 0, (unsigned int)v17, (__int64)String2);
          ++v14;
        }
        while ( v14 < *((unsigned __int16 *)v13 + 2) );
      }
      goto LABEL_14;
    }
    while ( 1 )
    {
      LODWORD(v18) = 11141120;
      String2 = (wchar_t *)v22;
      v9 = sub_180035DEC(a2, *(_QWORD *)(a1 + 24) + 6LL * v10, &v18);
      if ( v9 < 0 )
        break;
      v11 = String2;
      v21.Buffer = 0LL;
      if ( (int)sub_180030B84(String2, a3, &v16, &v21, a2, a4) >= 0 && v16 )
        v12 = sub_18003645C((unsigned int)&BaseAddress, a2, 0, (unsigned int)v17, (__int64)v21.Buffer);
      else
        v12 = sub_18003645C(a5, a2, 0, (unsigned int)v17, (__int64)v11);
      v9 = v12;
      if ( v12 < 0 )
        break;
      if ( ++v10 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_13;
    }
  }
  v13 = BaseAddress;
LABEL_14:
  if ( v13 )
    sub_180032CEC(v13);
  if ( v9 < 0 )
  {
    if ( *(_QWORD *)a5 )
      *(_WORD *)(*(_QWORD *)a5 + 4LL) = 0;
  }
  return (unsigned int)v9;
}
