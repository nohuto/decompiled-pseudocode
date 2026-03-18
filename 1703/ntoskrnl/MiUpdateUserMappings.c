/*
 * XREFs of MiUpdateUserMappings @ 0x14040E018
 * Callers:
 *     PopInvokeSystemStateHandler @ 0x140405BB8 (PopInvokeSystemStateHandler.c)
 *     MmUpdateHiberMappings @ 0x14040DF80 (MmUpdateHiberMappings.c)
 * Callees:
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeQuasiPte @ 0x14017CF7C (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x14017D058 (MiRevertQuasiPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MiUpdateUserMappings()
{
  unsigned __int64 v0; // r10
  unsigned __int64 v1; // r11
  __int64 result; // rax
  unsigned __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // r10
  unsigned __int64 QuasiPte; // rax
  unsigned __int64 *v7; // r10

  v0 = 0LL;
  do
  {
    MiGetPteAddress(v0);
    result = MiGetPteAddress(v1);
    v3 = result;
  }
  while ( v4 != 1 );
  while ( v0 <= v3 )
  {
    result = MI_READ_PTE_LOCK_FREE(v0);
    if ( (result & 1) != 0 )
    {
      QuasiPte = MiMakeQuasiPte(result);
    }
    else
    {
      if ( (result & 0x400) == 0 )
        goto LABEL_10;
      QuasiPte = MiRevertQuasiPte(result);
    }
    *v7 = QuasiPte;
    result = MiPteInShadowRange((unsigned __int64)v7);
    if ( (_DWORD)result )
      result = (__int64)MiWritePteShadow();
LABEL_10:
    v0 = v5 + 8;
  }
  return result;
}
