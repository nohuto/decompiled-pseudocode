/*
 * XREFs of IovAllocateMdl @ 0x140811740
 * Callers:
 *     <none>
 * Callees:
 *     VeAllocatePoolWithTagPriority @ 0x140812DA0 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall IovAllocateMdl(__int64 a1, unsigned int a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int16 v7; // di
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 *v12; // r8
  __int64 *v13; // rcx

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
    *(_WORD *)(result + 8) = 8 * (((unsigned __int64)(v10 + v6 + 4095) >> 12) + 6);
    *(_QWORD *)(result + 32) = a1 & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(result + 44) = v7 & 0xFFF;
    *(_DWORD *)(result + 40) = v6;
    if ( a5 )
    {
      if ( a3 )
      {
        v12 = *(__int64 **)(a5 + 8);
        v13 = (__int64 *)*v12;
        if ( *v12 )
        {
          do
          {
            v12 = v13;
            v13 = (__int64 *)*v13;
          }
          while ( v13 );
        }
        *v12 = result;
      }
      else
      {
        *(_QWORD *)(a5 + 8) = result;
      }
    }
  }
  return result;
}
