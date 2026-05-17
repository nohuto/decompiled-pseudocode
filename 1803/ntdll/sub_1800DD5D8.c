/*
 * XREFs of sub_1800DD5D8 @ 0x1800DD5D8
 * Callers:
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x18006D930 (RtlStringFromGUIDEx.c)
 *     RtlRandomEx @ 0x18007AA80 (RtlRandomEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwCreateKey @ 0x18009AE60 (ZwCreateKey.c)
 */

__int64 __fastcall sub_1800DD5D8(_QWORD *a1, __int64 a2)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  int Key; // ebx
  __int32 v8; // [rsp+44h] [rbp-45h] BYREF
  __int64 v9; // [rsp+48h] [rbp-41h]
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-39h] BYREF
  int v11; // [rsp+60h] [rbp-29h]
  __int64 v12; // [rsp+68h] [rbp-21h]
  UNICODE_STRING *p_UnicodeString; // [rsp+70h] [rbp-19h]
  int v14; // [rsp+78h] [rbp-11h]
  __int128 v15; // [rsp+80h] [rbp-9h]
  unsigned int v16[4]; // [rsp+90h] [rbp+7h] BYREF

  v9 = 0LL;
  v4 = v16;
  v8 = MEMORY[0x7FFE0014];
  v5 = 8LL;
  do
  {
    *(_WORD *)v4 = RtlRandomEx(&v8);
    v4 = (unsigned int *)((char *)v4 + 2);
    --v5;
  }
  while ( v5 );
  Key = RtlStringFromGUIDEx(v16, (__int64)&UnicodeString, 1);
  if ( Key >= 0 )
  {
    v11 = 48;
    p_UnicodeString = &UnicodeString;
    v12 = a2;
    v14 = 576;
    v15 = 0LL;
    Key = ZwCreateKey();
    RtlFreeUnicodeString(&UnicodeString);
    if ( Key >= 0 )
      *a1 = v9;
  }
  return (unsigned int)Key;
}
