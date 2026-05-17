/*
 * XREFs of LdrLoadEnclaveModule @ 0x1800C9990
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     RtlReleasePath @ 0x1800258A0 (RtlReleasePath.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 *     sub_1800C9BC0 @ 0x1800C9BC0 (sub_1800C9BC0.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 *     sub_1800CA2A4 @ 0x1800CA2A4 (sub_1800CA2A4.c)
 */

__int64 __fastcall LdrLoadEnclaveModule(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // r14
  _QWORD *v7; // rsi
  int v8; // ebx
  _QWORD *i; // rdi
  int v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11[3]; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v12[15]; // [rsp+50h] [rbp-B0h] BYREF
  char v13; // [rsp+CCh] [rbp-34h]
  int v14; // [rsp+D0h] [rbp-30h] BYREF
  __int16 *v15; // [rsp+D8h] [rbp-28h]
  __int16 v16; // [rsp+E0h] [rbp-20h] BYREF

  v5 = sub_18001EE04(a1, 1);
  if ( !v5 )
    return 3221225632LL;
  sub_180042054(*(void **)(a3 + 8), a2, v12);
  if ( v5[10] || (v7 = v5 + 11, (_QWORD *)*v7 != v7) )
  {
    v8 = -1073741800;
  }
  else
  {
    v14 = 0x1000000;
    v15 = &v16;
    v16 = 0;
    v10 = 0x800000;
    v8 = sub_18003B92C((unsigned __int16 *)a3, (unsigned __int16 *)&v14, 0, &v10);
    if ( v8 >= 0 )
    {
      v11[0] = 0;
      v8 = sub_1800C9BC0((_DWORD)v5, (unsigned int)&v14, v10, 7, (__int64)v12, 0LL, 0LL, (__int64)v11);
      if ( v8 >= 0 )
      {
        for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
        {
          v8 = sub_1800CA2A4(i[22]);
          if ( v8 < 0 )
            goto LABEL_13;
        }
        v8 = v11[0];
      }
    }
  }
LABEL_13:
  sub_1800C9AFC(v5, (unsigned int)v8);
  RtlLeaveCriticalSection((__int64)(v5 + 2));
  sub_1800C9DEC(v5);
  if ( v13 )
    RtlReleasePath(v12[0]);
  return (unsigned int)v8;
}
