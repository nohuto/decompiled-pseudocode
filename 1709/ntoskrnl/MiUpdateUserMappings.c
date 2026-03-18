/*
 * XREFs of MiUpdateUserMappings @ 0x14042F614
 * Callers:
 *     MmUpdateHiberMappings @ 0x1404306AC (MmUpdateHiberMappings.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeQuasiPte @ 0x14017C804 (MiMakeQuasiPte.c)
 *     MiRevertQuasiPte @ 0x14017C8F8 (MiRevertQuasiPte.c)
 */

unsigned __int64 MiUpdateUserMappings()
{
  unsigned __int64 *v0; // r10
  unsigned __int64 v1; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r11
  __int64 v4; // rdx

  v0 = 0LL;
  do
  {
    MiGetPteAddress((unsigned __int64)v0);
    result = MiGetPteAddress(v1);
    v3 = result;
  }
  while ( v4 != 1 );
  if ( (unsigned __int64)v0 <= result )
  {
    while ( 1 )
    {
      result = *v0;
      if ( (unsigned __int64)v0 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v0 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiReadPteShadow();
      if ( (result & 1) != 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        result = MiRevertQuasiPte(result);
LABEL_11:
        *v0 = result;
        if ( (unsigned __int64)v0 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v0 <= 0xFFFFF6FB7DBED7F8uLL )
          result = (unsigned __int64)MiWritePteShadow();
      }
      if ( (unsigned __int64)++v0 > v3 )
        return result;
    }
    result = MiMakeQuasiPte(result);
    goto LABEL_11;
  }
  return result;
}
