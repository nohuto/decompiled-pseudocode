/*
 * XREFs of sub_18007D4C0 @ 0x18007D4C0
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     sub_18007D620 @ 0x18007D620 (sub_18007D620.c)
 *     sub_18007D6CC @ 0x18007D6CC (sub_18007D6CC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwCreateFile @ 0x1800A5DA0 (ZwCreateFile.c)
 */

__int64 __fastcall sub_18007D4C0(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rax
  wchar_t *v4; // rdx
  __int16 v5; // cx
  int v6; // ebx
  __int64 v8; // [rsp+60h] [rbp-A0h] BYREF
  int v9; // [rsp+68h] [rbp-98h] BYREF
  wchar_t *v10; // [rsp+70h] [rbp-90h]
  int v11; // [rsp+78h] [rbp-88h] BYREF
  __int64 v12; // [rsp+80h] [rbp-80h]
  int *v13; // [rsp+88h] [rbp-78h]
  int v14; // [rsp+90h] [rbp-70h]
  __int128 v15; // [rsp+98h] [rbp-68h]
  _BYTE v16[24]; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Buffer[264]; // [rsp+C0h] [rbp-40h] BYREF

  v8 = 0LL;
  if ( BYTE2(qword_18015C428) )
  {
    v6 = 0;
    *a2 = BYTE2(qword_18015C428);
  }
  else
  {
    sub_18007D6CC(Buffer);
    v9 = 0;
    v3 = 0x7FFFLL;
    v10 = 0LL;
    v4 = Buffer;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v3;
    }
    while ( v3 );
    if ( v3 )
      v5 = 0x7FFF - v3;
    else
      v5 = 0;
    if ( v3 )
    {
      LOWORD(v9) = 2 * v5;
      HIWORD(v9) = 2 * v5 + 2;
      v10 = Buffer;
    }
    v11 = 48;
    v12 = 0LL;
    v14 = 64;
    v13 = &v9;
    v15 = 0LL;
    v6 = ZwCreateFile(&v8, 1048704LL, &v11, v16, 0LL, 0, 7, 1, 32, 0LL, 0);
    if ( v6 >= 0 )
    {
      v6 = sub_18007D620(v8, a2);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( v8 )
      ZwClose(v8);
  }
  return (unsigned int)v6;
}
