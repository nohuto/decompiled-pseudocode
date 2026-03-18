/*
 * XREFs of _lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_::operator() @ 0x1C00FE1CC
 * Callers:
 *     ?UmfdZombifyAllUmfdFonts@@YAXXZ @ 0x1C00FE0AC (-UmfdZombifyAllUmfdFonts@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_e4459ade3bcd7fb5ab4b4d20e93e54c8_::operator()(__int64 a1, __int64 a2)
{
  __int64 v3; // r9
  struct PDEV *v4; // r11
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v7; // r10
  __int64 v8; // rcx

  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 28) )
    {
      v3 = 0LL;
      if ( *(_DWORD *)(a2 + 24) )
      {
        v4 = qword_1C0334158;
        do
        {
          for ( i = *(_QWORD *)(a2 + 8 * v3 + 40); i; i = *(_QWORD *)(i + 8) )
          {
            if ( *(struct PDEV **)(i + 88) == v4 )
            {
              result = *(_QWORD *)(i + 80);
              v7 = 0LL;
              for ( *(_BYTE *)(result + 12) = 1; (unsigned int)v7 < *(_DWORD *)(i + 36); *(_QWORD *)(v8 + 16) = 0LL )
              {
                result = *(_QWORD *)(i + 152);
                v8 = *(_QWORD *)(result + 8 * v7);
                v7 = (unsigned int)(v7 + 1);
              }
            }
          }
          v3 = (unsigned int)(v3 + 1);
        }
        while ( (unsigned int)v3 < *(_DWORD *)(a2 + 24) );
      }
    }
  }
  return result;
}
