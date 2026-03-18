/*
 * XREFs of MiUpdateUserMappings @ 0x140475520
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140472BF4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetTopPteAddress @ 0x140070E30 (MiGetTopPteAddress.c)
 *     MiMakeQuasiPte @ 0x1401A6658 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x1401A66FC (MiRevertQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // r10
  __int64 v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 QuasiPte; // rax
  unsigned __int64 *v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  MiGetTopPteAddress(0LL);
  result = MiGetTopPteAddress(0x7FFFFFFEFFFFuLL);
  if ( v1 <= result )
  {
    while ( 1 )
    {
      result = MI_READ_PTE_LOCK_FREE(v1);
      if ( (result & 1) != 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        QuasiPte = MiRevertQuasiPte(result);
LABEL_6:
        *v5 = QuasiPte;
        result = MiPteInShadowRange((unsigned __int64)v5);
        if ( (_DWORD)result )
          result = (unsigned __int64)MiWritePteShadow(v7, v6, v8);
      }
      v1 = v2 + 8;
      if ( v1 > v3 )
        return result;
    }
    QuasiPte = MiMakeQuasiPte(result);
    goto LABEL_6;
  }
  return result;
}
