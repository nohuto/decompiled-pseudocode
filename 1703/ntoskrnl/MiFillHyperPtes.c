/*
 * XREFs of MiFillHyperPtes @ 0x140020148
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1400D0A70 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // r9
  __int64 v6; // r10
  __int64 result; // rax
  unsigned int v8; // ebp
  ULONG_PTR *v9; // r14
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rdi
  __int64 v12; // rcx
  char v13; // [rsp+38h] [rbp-70h] BYREF
  char v14; // [rsp+68h] [rbp-40h] BYREF

  v5 = (unsigned __int64 *)&v13;
  v6 = 4LL;
  do
  {
    *(v5 - 1) = a1;
    *v5 = a2;
    a1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    result = 0xFFFFF68000000000uLL;
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v5 += 2;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  v9 = (ULONG_PTR *)&v14;
  do
  {
    v10 = *(v9 - 1);
    v11 = *v9;
    if ( *(_DWORD *)a4 )
    {
      if ( v10 <= v11 )
      {
LABEL_9:
        if ( v8 )
          MiMakeSystemAddressValid(v10, 1);
        while ( 1 )
        {
          result = MI_READ_PTE_LOCK_FREE(v10);
          if ( !result )
          {
            if ( *(_DWORD *)a4 )
            {
              *(_QWORD *)v10 = MiMakeDemandZeroPte(4LL);
              result = MiPteInShadowRange(v10);
              if ( (_DWORD)result )
                result = MiWritePteShadow(v12);
            }
            ++*(_QWORD *)(a4 + 8);
          }
          v10 += 8LL;
          if ( v10 > v11 )
            break;
          if ( (v10 & 0xFFF) == 0 )
            goto LABEL_9;
        }
      }
    }
    else
    {
      *(_QWORD *)(a4 + 8) += ((__int64)(v11 - v10) >> 3) + 1;
    }
    ++v8;
    v9 -= 2;
  }
  while ( v8 < 4 );
  return result;
}
