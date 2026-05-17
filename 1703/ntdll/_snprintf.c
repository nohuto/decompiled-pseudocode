/*
 * XREFs of _snprintf @ 0x180096D10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009C40C @ 0x18009C40C (sub_18009C40C.c)
 */

int snprintf(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax
  int v5; // ebx
  char *v6; // [rsp+30h] [rbp-48h] BYREF
  int v7; // [rsp+38h] [rbp-40h]
  char *v8; // [rsp+40h] [rbp-38h]
  int v9; // [rsp+48h] [rbp-30h]
  va_list va; // [rsp+98h] [rbp+20h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    v9 = 66;
    v8 = Buffer;
    v6 = Buffer;
    if ( BufferCount > 0x7FFFFFFF )
      LODWORD(BufferCount) = 0x7FFFFFFF;
    v7 = BufferCount;
    result = sub_18009C40C(&v6, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Buffer )
    {
      if ( --v7 < 0 )
        sub_18009C404(0LL, &v6);
      else
        *v6 = 0;
      return v5;
    }
  }
  else
  {
    sub_180095DE0();
    return -1;
  }
  return result;
}
