/*
 * XREFs of MiCheckVirtualAddress @ 0x1400C20D0
 * Callers:
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiResolveDemandZeroFault @ 0x1400BA780 (MiResolveDemandZeroFault.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400BF190 (MiResolvePageTablePage.c)
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140118380 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x1402105E8 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x14007C120 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, int *a2, __int64 *a3)
{
  _KPROCESS *Process; // r11
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 >= 0xFFFFF68000000000uLL && a1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 4;
      return 0LL;
    }
    *a2 = 24;
    return 0LL;
  }
  if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
    || (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    v6 = Process[2].Affinity.Bitmap[5];
    if ( v6 )
    {
      v7 = a1 >> 12;
      if ( a1 >> 12 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32))
        && v7 <= (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
      {
LABEL_6:
        *a3 = v6;
        return MiCheckUserVirtualAddress(a1, a2, v6, 0);
      }
      v6 = Process[2].Affinity.Bitmap[4];
      while ( v6 )
      {
        if ( v7 > (*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) )
        {
          v6 = *(_QWORD *)(v6 + 8);
        }
        else
        {
          if ( v7 >= (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) )
          {
            Process[2].Affinity.Bitmap[5] = v6;
            goto LABEL_6;
          }
          v6 = *(_QWORD *)v6;
        }
      }
    }
    *a3 = 0LL;
    *a2 = 24;
    return 0LL;
  }
  result = qword_14036C1A8;
  *a2 = 1;
  return result;
}
