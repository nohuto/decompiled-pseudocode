/*
 * XREFs of RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x180106E68
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x180046890 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

_BOOL8 __fastcall RtlpHpLfhBucketSubsegmentStatsUpdate(volatile signed __int64 *a1, int a2)
{
  signed __int64 v2; // rax
  BOOL v3; // r9d
  __int64 v4; // r8
  _BYTE *v7; // rcx
  __int64 v8; // rdx
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  signed __int64 v11; // rtt
  signed __int64 v13; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = 0;
  v13 = *a1;
  v4 = a2 & 3;
  do
  {
    if ( *((unsigned __int8 *)&v13 + 2 * v4) == a2 )
    {
      if ( *((_BYTE *)&v13 + 2 * v4 + 1) == 64 )
      {
        v7 = (char *)&v13 + 1;
        v8 = 4LL;
        do
        {
          *v7 >>= 1;
          v7 += 2;
          --v8;
        }
        while ( v8 );
      }
      v3 = ++*((_BYTE *)&v13 + 2 * v4 + 1) > 8u;
    }
    else
    {
      v9 = (char *)&v13 + 1;
      v10 = 4LL;
      do
      {
        *v9 >>= 1;
        v9 += 2;
        --v10;
      }
      while ( v10 );
      *((_BYTE *)&v13 + 2 * v4) = a2;
      *((_BYTE *)&v13 + 2 * v4 + 1) = 1;
    }
    v11 = v2;
    v2 = _InterlockedCompareExchange64(a1, v13, v2);
    v13 = v2;
  }
  while ( v11 != v2 );
  return v3;
}
