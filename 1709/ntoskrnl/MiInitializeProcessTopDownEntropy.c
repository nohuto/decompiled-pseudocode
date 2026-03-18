/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x14045E728
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx

  result = *(unsigned int *)(a1 + 2088);
  if ( (result & 0x40) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 1296);
    v5 = *(_QWORD *)(v4 + 40);
    if ( *(_QWORD *)(a1 + 1152) <= 0x100000000uLL )
    {
LABEL_6:
      result = (unsigned __int8)ExGenRandom(1) << 16;
      *(_QWORD *)(v4 + 40) = v5 - result;
      return result;
    }
    if ( !a2 )
    {
      v5 = ((unsigned int)ExGenRandom(1) << 16) + 0x7FF600000000LL;
      goto LABEL_6;
    }
    if ( !a3 )
    {
      v5 = 0x7FF600000000LL;
      goto LABEL_6;
    }
    v5 = *(_QWORD *)(a1 + 960);
    result = v5 - 0x7FF600000001LL;
    if ( (unsigned __int64)(v5 - 0x7FF600000001LL) <= 0x1FFFFFFFELL )
      goto LABEL_6;
  }
  return result;
}
