/*
 * XREFs of _snwprintf @ 0x18008C030
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
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
    result = sub_180091FB0(&v7, Format, 0LL, (__int64 *)va);
    v5 = result;
    if ( Buffer )
    {
      if ( --v8 < 0 )
      {
        sub_18009A104(0LL, &v7);
        v6 = v7;
      }
      else
      {
        *(_BYTE *)v7 = 0;
        v6 = (wchar_t *)((char *)v7 + 1);
        v7 = (wchar_t *)((char *)v7 + 1);
      }
      if ( --v8 < 0 )
        sub_18009A104(0LL, &v7);
      else
        *(_BYTE *)v6 = 0;
      return v5;
    }
  }
  else
  {
    sub_18008B020();
    return -1;
  }
  return result;
}
