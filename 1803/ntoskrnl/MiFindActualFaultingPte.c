/*
 * XREFs of MiFindActualFaultingPte @ 0x140059BC4
 * Callers:
 *     MiIsFaultPteIntact @ 0x140059B20 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckVirtualAddress @ 0x14003E120 (MiCheckVirtualAddress.c)
 *     MiFillPteHierarchy @ 0x14003E540 (MiFillPteHierarchy.c)
 *     MiFindActualFaultingPte @ 0x140059BC4 (MiFindActualFaultingPte.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiFindActualFaultingPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r10
  char v3; // al
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  unsigned __int64 PrototypePteDirect; // rdx
  unsigned __int64 v12[4]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v13[8]; // [rsp+40h] [rbp-88h] BYREF
  __int16 v14; // [rsp+80h] [rbp-48h]
  __int64 v15; // [rsp+88h] [rbp-40h]
  int v16; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+E0h] [rbp+18h] BYREF

  if ( *(_BYTE *)(a1 + 65) != 1 )
  {
    result = *(_QWORD *)(a1 + 72);
    if ( result != ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
      return result;
    v5 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
    v7 = MI_READ_PTE_LOCK_FREE(v5);
    if ( (v7 & 1) != 0 )
      return 0LL;
    if ( (v7 & 0x400) == 0 )
      return v5;
    if ( (unsigned int)MiIsPrototypePteVadLookup(v7) )
    {
      PrototypePteDirect = MiCheckVirtualAddress(v9, &v16, &v17);
      if ( !PrototypePteDirect )
        return 0LL;
    }
    else
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v8);
    }
    v13[0] = PrototypePteDirect;
    v14 = 17;
    v15 = ((PrototypePteDirect >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    result = MiFindActualFaultingPte(v13);
    if ( !result )
      return v5;
    return result;
  }
  MiFillPteHierarchy(a2, v12);
  v2 = 4LL;
  while ( 1 )
  {
    v3 = MI_READ_PTE_LOCK_FREE(v12[v2 - 1]);
    if ( (v3 & 1) == 0 )
      return v4;
    if ( v3 < 0 )
      return 0LL;
    if ( v2 == 1 )
    {
      v5 = v12[0];
      goto LABEL_10;
    }
  }
}
