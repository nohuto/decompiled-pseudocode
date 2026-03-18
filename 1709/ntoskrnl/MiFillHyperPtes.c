/*
 * XREFs of MiFillHyperPtes @ 0x140116DE4
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14003D1A0 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, unsigned __int8 a3, __int64 a4)
{
  unsigned __int64 *v6; // r9
  __int64 v7; // r10
  __int64 result; // rax
  unsigned int v9; // ebp
  ULONG_PTR *v10; // r14
  ULONG_PTR v11; // rbx
  ULONG_PTR v12; // rdi
  char v13; // [rsp+38h] [rbp-80h] BYREF
  char v14; // [rsp+68h] [rbp-50h] BYREF

  v6 = (unsigned __int64 *)&v13;
  v7 = 4LL;
  do
  {
    *(v6 - 1) = a1;
    *v6 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = 0xFFFFF68000000000uLL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 += 2;
    --v7;
  }
  while ( v7 );
  v9 = 0;
  v10 = (ULONG_PTR *)&v14;
  do
  {
    v11 = *(v10 - 1);
    v12 = *v10;
    if ( *(_DWORD *)a4 )
    {
      if ( v11 <= v12 )
      {
LABEL_9:
        if ( v9 )
          MiMakeSystemAddressValid(v11, 0LL, 0, a3, 1);
        while ( 1 )
        {
          result = *(_QWORD *)v11;
          if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
            result = MiReadPteShadow(v11, *(_QWORD *)v11);
          if ( !result )
          {
            if ( *(_DWORD *)a4 )
            {
              result = MiMakeDemandZeroPte(4LL);
              *(_QWORD *)v11 = result;
              if ( v11 >= 0xFFFFF6FB7DBED000uLL && v11 <= 0xFFFFF6FB7DBED7F8uLL )
                result = MiWritePteShadow(v11, result);
            }
            ++*(_QWORD *)(a4 + 8);
          }
          v11 += 8LL;
          if ( v11 > v12 )
            break;
          if ( (v11 & 0xFFF) == 0 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v12 - v11) >> 3) + 1;
    }
    ++v9;
    v10 -= 2;
  }
  while ( v9 < 4 );
  return result;
}
