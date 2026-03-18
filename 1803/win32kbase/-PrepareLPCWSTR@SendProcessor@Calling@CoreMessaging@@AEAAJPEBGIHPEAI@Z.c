/*
 * XREFs of ?PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging@@AEAAJPEBGIHPEAI@Z @ 0x1C016937C
 * Callers:
 *     ?ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z @ 0x1C01695DC (-ReadParameterSize@SendProcessor@Calling@CoreMessaging@@AEAAJPEAPEADHIIIPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::PrepareLPCWSTR(
        CoreMessaging::Calling::SendProcessor *this,
        const unsigned __int16 *a2,
        int a3,
        int a4,
        unsigned int *a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // rax

  *a5 = 0;
  if ( !a4 )
  {
    if ( !a2 )
      return 0LL;
    v7 = -1LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( v7 <= 0x3FFFFFFE )
    {
      *a5 = 2 * v7 + 2;
      return 0LL;
    }
    *((_DWORD *)this + 30) = 106;
    return 2147942487LL;
  }
  v5 = 2LL * (unsigned int)(a3 + 1);
  if ( !is_mul_ok(2uLL, (unsigned int)(a3 + 1)) || v5 > 0xFFFFFFFF )
  {
    *((_DWORD *)this + 30) = 106;
    return 2147942487LL;
  }
  *a5 = v5;
  return 0LL;
}
