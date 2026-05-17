/*
 * XREFs of sprintf @ 0x18009A3A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
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
    v3 = sub_18009C40C(&v6, Format, 0LL, va);
    v4 = --v7 < 0;
    v5 = v3;
    if ( v4 )
      sub_18009C404(0LL, &v6);
    else
      *v6 = 0;
    return v5;
  }
  else
  {
    sub_180095DE0();
    return -1;
  }
}
