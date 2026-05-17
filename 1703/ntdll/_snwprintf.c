/*
 * XREFs of _snwprintf @ 0x180096DC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_18009C404 @ 0x18009C404 (sub_18009C404.c)
 *     sub_18009CD80 @ 0x18009CD80 (sub_18009CD80.c)
 */

int snwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, ...)
{
  int result; // eax
  int v5; // edi
  wchar_t *v6; // rax
  wchar_t *v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h]
  wchar_t *v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  va_list va; // [rsp+98h] [rbp+38h] BYREF

  va_start(va, Format);
  if ( Format && (!BufferCount || Buffer) )
  {
    v10 = 66;
    v9 = Buffer;
    v7 = Buffer;
    if ( BufferCount <= 0x3FFFFFFF )
      v8 = 2 * BufferCount;
    else
      v8 = 0x7FFFFFFF;
    result = sub_18009CD80(&v7, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Buffer )
    {
      if ( --v8 < 0 )
      {
        sub_18009C404(0LL, &v7);
        v6 = v7;
      }
      else
      {
        *(_BYTE *)v7 = 0;
        v6 = (wchar_t *)((char *)v7 + 1);
        v7 = (wchar_t *)((char *)v7 + 1);
      }
      if ( --v8 < 0 )
        sub_18009C404(0LL, &v7);
      else
        *(_BYTE *)v6 = 0;
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
