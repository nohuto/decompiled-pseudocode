/*
 * XREFs of MiFillHyperPtes @ 0x1400B75AC
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakeSystemAddressValid @ 0x140122000 (MiMakeSystemAddressValid.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

unsigned __int64 __fastcall MiFillHyperPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // r9
  __int64 v6; // r10
  unsigned __int64 result; // rax
  unsigned int v8; // ebp
  ULONG_PTR *v9; // r14
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char v15; // [rsp+38h] [rbp-70h] BYREF
  char v16; // [rsp+68h] [rbp-40h] BYREF

  v5 = (unsigned __int64 *)&v15;
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
  v9 = (ULONG_PTR *)&v16;
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
                result = (unsigned __int64)MiWritePteShadow(v13, v12, v14);
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
