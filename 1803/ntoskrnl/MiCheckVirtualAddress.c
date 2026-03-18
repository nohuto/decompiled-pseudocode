/*
 * XREFs of MiCheckVirtualAddress @ 0x14003E120
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1400196F0 (MiResolveDemandZeroFault.c)
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 *     MiSystemFault @ 0x140022C40 (MiSystemFault.c)
 *     MiInPagePageTable @ 0x14003D3E0 (MiInPagePageTable.c)
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 *     MiTranslatePageForCopy @ 0x14015B6C0 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x14003E2E0 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  __int64 v5; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 24;
      return 0LL;
    }
    *a2 = 4;
    return 0LL;
  }
  else
  {
    if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) != 0 )
    {
LABEL_5:
      Process = KeGetCurrentThread()->ApcState.Process;
      v7 = Process[2].Affinity.Bitmap[5];
      if ( v7 )
      {
        v8 = a1 >> 12;
        if ( a1 >> 12 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
          && v8 <= (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
        {
LABEL_8:
          *a3 = v7;
          return MiCheckUserVirtualAddress(a1, a2);
        }
        v7 = Process[2].Affinity.Bitmap[4];
        while ( v7 )
        {
          if ( v8 > (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) )
          {
            v7 = *(_QWORD *)(v7 + 8);
          }
          else
          {
            if ( v8 >= (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) )
            {
              Process[2].Affinity.Bitmap[5] = v7;
              goto LABEL_8;
            }
            v7 = *(_QWORD *)v7;
          }
        }
      }
      *a3 = 0LL;
      *a2 = 24;
      return 0LL;
    }
    v5 = a1 & 0x7FFFFFFFF000LL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 )
    {
      if ( v5 == qword_1403CB680 && v5 )
      {
        *a2 = 1;
        return qword_1403CB678;
      }
      goto LABEL_5;
    }
    result = qword_1403CB670;
    *a2 = 1;
  }
  return result;
}
