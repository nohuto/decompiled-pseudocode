/*
 * XREFs of IovAllocateMdl @ 0x1407A4770
 * Callers:
 *     <none>
 * Callees:
 *     VeAllocatePoolWithTagPriority @ 0x1407A5DD0 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall IovAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int16 v7; // di
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 *i; // rcx

  v6 = a2;
  v7 = a1;
  v10 = a1 & 0xFFF;
  result = VeAllocatePoolWithTagPriority(
             (POOL_TYPE)640,
             8 * (unsigned int)((v10 + (unsigned __int64)a2 + 4095) >> 12) + 48,
             0x6C644D56u,
             HighPoolPriority,
             a6);
  if ( result )
  {
    *(_QWORD *)result = 0LL;
    *(_WORD *)(result + 10) = 0;
    *(_QWORD *)(result + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(result + 44) = v7 & 0xFFF;
    *(_DWORD *)(result + 40) = v6;
    *(_WORD *)(result + 8) = 8 * (((unsigned __int64)(v10 + v6 + 4095) >> 12) + 6);
    if ( a5 )
    {
      if ( a3 )
      {
        for ( i = *(__int64 **)(a5 + 8); *i; i = (__int64 *)*i )
          ;
        *i = result;
      }
      else
      {
        *(_QWORD *)(a5 + 8) = result;
      }
    }
  }
  return result;
}
