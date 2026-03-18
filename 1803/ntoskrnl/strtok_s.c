/*
 * XREFs of strtok_s @ 0x14018E990
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14016CD90 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x14021F8EC (__report_rangecheckfailure.c)
 */

char *__cdecl strtok_s(char *Str, const char *Delim, char **Context)
{
  const char *v4; // r10
  char *v5; // r9
  __int64 v7; // rax
  bool v8; // cf
  unsigned int v9; // r8d
  unsigned __int8 v10; // r8
  char v11; // r10
  char *v12; // r10
  unsigned __int8 *v13; // rbx
  _BYTE v14[32]; // [rsp+30h] [rbp-38h]

  v4 = Delim;
  v5 = Str;
  if ( Context && Delim && (Str || *Context) )
  {
    v7 = 0LL;
    v8 = 1;
    do
    {
      if ( !v8 )
        _report_rangecheckfailure(Str, Delim, Context);
      v14[v7++] = 0;
      v8 = (unsigned __int64)v7 < 0x20;
    }
    while ( v7 < 32 );
    do
    {
      v9 = *(unsigned __int8 *)v4++;
      v14[(unsigned __int64)v9 >> 3] |= 1 << (v9 & 7);
    }
    while ( (_BYTE)v9 );
    if ( !Str )
      v5 = *Context;
    v10 = *v5;
    if ( ((unsigned __int8)(1 << (*v5 & 7)) & v14[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 )
    {
      v11 = *v5;
      do
      {
        v10 = v11;
        if ( !v11 )
          break;
        v11 = *++v5;
        v10 = *v5;
      }
      while ( ((unsigned __int8)(1 << (*v5 & 7)) & v14[(unsigned __int64)(unsigned __int8)*v5 >> 3]) != 0 );
    }
    v12 = v5;
    if ( v10 )
    {
      while ( 1 )
      {
        v13 = (unsigned __int8 *)(v5 + 1);
        if ( ((unsigned __int8)(1 << (v10 & 7)) & v14[(unsigned __int64)v10 >> 3]) != 0 )
          break;
        ++v5;
        v10 = *v13;
        if ( !*v13 )
          goto LABEL_21;
      }
      *v5++ = 0;
    }
LABEL_21:
    *Context = v5;
    if ( v12 == v5 )
      return 0LL;
    return v12;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
