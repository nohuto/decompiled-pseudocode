/*
 * XREFs of PipDmgGetDeviceDmarPolicy @ 0x14058C704
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14058C7DC (PipDmgGetDriverDmarCompatLevel.c)
 */

__int64 __fastcall PipDmgGetDeviceDmarPolicy(_QWORD **a1)
{
  _QWORD **v1; // rdi
  __int64 v3; // rbp
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  int DriverDmarCompatLevel; // eax
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]

  v1 = a1 + 2;
  v9 = 0LL;
  v10 = 0LL;
  v3 = 6LL;
  v4 = 1;
  do
  {
    v5 = *v1;
    while ( v5 )
    {
      DriverDmarCompatLevel = PipDmgGetDriverDmarCompatLevel(*(_QWORD *)(*v5 + 48LL) + 24LL);
      v5 = (_QWORD *)v5[1];
      ++*((_DWORD *)&v9 + DriverDmarCompatLevel);
    }
    ++v1;
    --v3;
  }
  while ( v3 );
  if ( !HIDWORD(v9) )
  {
    if ( HIDWORD(v10) )
    {
      v8 = (*a1)[90];
      if ( v8 && (*(_BYTE *)(v8 + 8) & 4) != 0 )
        return 2;
      else
        return 0;
    }
    else
    {
      return (_DWORD)v10 != 0 ? 2 : 0;
    }
  }
  return v4;
}
