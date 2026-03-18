/*
 * XREFs of MiCheckVirtualAddress @ 0x140109690
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002CEA0 (MiFindActualFaultingPte.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiResolvePageTablePage @ 0x1400422D0 (MiResolvePageTablePage.c)
 *     MiResolveDemandZeroFault @ 0x140044CE0 (MiResolveDemandZeroFault.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 *     MiTranslatePageForCopy @ 0x140217C58 (MiTranslatePageForCopy.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x140109820 (MiCheckUserVirtualAddress.c)
 */

__int64 __fastcall MiCheckVirtualAddress(unsigned __int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  _KPROCESS *Process; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  if ( a1 > 0x7FFFFFFEFFFFLL )
  {
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      *a2 = 24;
      return 0LL;
    }
    else
    {
      *a2 = 4;
      return 0LL;
    }
  }
  else if ( (a1 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
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
        return MiCheckUserVirtualAddress(a1, a2, v6, 0LL);
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
    result = 0LL;
    *a2 = 24;
  }
  else
  {
    *a2 = 1;
    return qword_1403884E8;
  }
  return result;
}
