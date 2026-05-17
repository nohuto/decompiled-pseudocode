/*
 * XREFs of strtok_s @ 0x1800A1410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 */

char *__cdecl strtok_s(char *String, const char *Delimiter, char **Context)
{
  const char *v4; // r10
  char *v5; // r9
  __int64 v7; // rax
  bool v8; // cf
  unsigned int v9; // r8d
  char *v10; // r10
  _BYTE v11[32]; // [rsp+30h] [rbp-38h]

  v4 = Delimiter;
  v5 = String;
  if ( Context && Delimiter && (String || *Context) )
  {
    v7 = 0LL;
    v8 = 1;
    do
    {
      if ( !v8 )
        _report_rangecheckfailure();
      v11[v7++] = 0;
      v8 = (unsigned __int64)v7 < 0x20;
    }
    while ( v7 < 32 );
    do
    {
      v9 = *(unsigned __int8 *)v4++;
      v11[(unsigned __int64)v9 >> 3] |= 1 << (v9 & 7);
    }
    while ( (_BYTE)v9 );
    if ( !String )
      v5 = *Context;
    while ( ((unsigned __int8)(1 << (*v5 & 7)) & v11[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 && *v5 )
      ++v5;
    v10 = v5;
    while ( *v5 )
    {
      if ( ((unsigned __int8)(1 << (*v5 & 7)) & v11[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 )
      {
        *v5++ = 0;
        break;
      }
      ++v5;
    }
    *Context = v5;
    if ( v10 == v5 )
      return 0LL;
    return v10;
  }
  else
  {
    sub_180095DE0();
    return 0LL;
  }
}
