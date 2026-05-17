/*
 * XREFs of sprintf @ 0x18008F710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091650 @ 0x180091650 (sub_180091650.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v3; // eax
  bool v4; // sf
  int v5; // ebx
  char *v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  char *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  va_list va; // [rsp+80h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format && Buffer )
  {
    v8 = Buffer;
    v6 = Buffer;
    v7 = 0x7FFFFFFF;
    v9 = 66;
    v3 = sub_180091650(&v6, Format, 0LL, va);
    v4 = --v7 < 0;
    v5 = v3;
    if ( v4 )
      sub_18009A104(0LL, &v6);
    else
      *v6 = 0;
    return v5;
  }
  else
  {
    sub_18008B020();
    return -1;
  }
}
