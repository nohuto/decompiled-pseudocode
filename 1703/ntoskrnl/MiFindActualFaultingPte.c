/*
 * XREFs of MiFindActualFaultingPte @ 0x140118380
 * Callers:
 *     MiIsFaultPteIntact @ 0x1401182D8 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x140118380 (MiFindActualFaultingPte.c)
 * Callees:
 *     MiCheckVirtualAddress @ 0x1400C20D0 (MiCheckVirtualAddress.c)
 *     MiFindActualFaultingPte @ 0x140118380 (MiFindActualFaultingPte.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiFindActualFaultingPte(unsigned __int64 a1)
{
  int v1; // r9d
  char v2; // al
  int v3; // r10d
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // rbx
  int v6; // r9d
  char v7; // al
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // r11
  __int64 PrototypePteDirect; // rax
  int v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]
  unsigned __int64 v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  v18 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v1 = 3;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v2 = MI_READ_PTE_LOCK_FREE(*(&v18 + (unsigned int)(v1 - 1)));
    if ( (v2 & 1) == 0 )
      break;
    if ( v2 < 0 )
    {
      if ( v3 )
        return 0LL;
      break;
    }
  }
  while ( v1 );
  v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v18 = v5;
  v19 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 4;
  v21 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v7 = MI_READ_PTE_LOCK_FREE(*(&v18 + (unsigned int)(v6 - 1)));
    if ( (v7 & 1) == 0 )
      return v8;
    if ( v6 && v7 < 0 )
      return 0LL;
  }
  while ( v6 != 1 );
  v9 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v9 & 1) != 0 )
    return 0LL;
  if ( (v9 & 0x400) == 0 )
    return v5;
  if ( (unsigned int)MiIsPrototypePteVadLookup(v9) )
  {
    PrototypePteDirect = MiCheckVirtualAddress(v14, &v16, &v17);
    if ( !PrototypePteDirect )
      return 0LL;
  }
  else
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v13, v11, v12, v13);
  }
  result = MiFindActualFaultingPte(PrototypePteDirect);
  if ( !result )
    return v5;
  return result;
}
