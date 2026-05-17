/*
 * XREFs of swprintf @ 0x18008C660
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_180091FB0 @ 0x180091FB0 (sub_180091FB0.c)
 *     sub_18009A104 @ 0x18009A104 (sub_18009A104.c)
 */

int swprintf(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  int v4; // eax
  bool v5; // sf
  int v6; // ebx
  wchar_t *v7; // rcx
  wchar_t *v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  wchar_t *v10; // [rsp+40h] [rbp-28h]
  int v11; // [rsp+48h] [rbp-20h]
  const wchar_t *v12; // [rsp+90h] [rbp+28h] BYREF

  v12 = Format;
  if ( BufferCount && Buffer )
  {
    v10 = Buffer;
    v8 = Buffer;
    v11 = 66;
    v9 = 0x7FFFFFFF;
    v4 = sub_180091FB0(&v8, BufferCount, 0LL, &v12);
    v5 = --v9 < 0;
    v6 = v4;
    if ( v5 )
    {
      sub_18009A104(0LL, &v8);
      v7 = v8;
    }
    else
    {
      *(_BYTE *)v8 = 0;
      v7 = (wchar_t *)((char *)v8 + 1);
      v8 = (wchar_t *)((char *)v8 + 1);
    }
    if ( --v9 < 0 )
      sub_18009A104(0LL, &v8);
    else
      *(_BYTE *)v7 = 0;
    return v6;
  }
  else
  {
    sub_18008B020();
    return -1;
  }
}
