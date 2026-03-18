/*
 * XREFs of MiFindActualFaultingPte @ 0x14002CEA0
 * Callers:
 *     MiIsFaultPteIntact @ 0x14002CD68 (MiIsFaultPteIntact.c)
 *     MiFindActualFaultingPte @ 0x14002CEA0 (MiFindActualFaultingPte.c)
 *     MiMigratePfn @ 0x14004A320 (MiMigratePfn.c)
 * Callees:
 *     MiFindActualFaultingPte @ 0x14002CEA0 (MiFindActualFaultingPte.c)
 *     MiCheckVirtualAddress @ 0x140109690 (MiCheckVirtualAddress.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiFindActualFaultingPte(unsigned __int64 a1)
{
  unsigned __int64 v1; // r11
  __int64 v2; // r9
  int v3; // r10d
  _QWORD *v4; // r8
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r10
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 PteShadow; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r11
  __int64 PrototypePteDirect; // rax
  _BYTE v15[8]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+30h] [rbp-38h]
  unsigned __int64 v18; // [rsp+38h] [rbp-30h]
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]

  v1 = a1;
  v17 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v18 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v2) = 3;
  do
  {
    v3 = v2;
    v2 = (unsigned int)(v2 - 1);
    v4 = (_QWORD *)*(&v17 + v2);
    v5 = *v4;
    if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v5) = MiReadPteShadow(*(&v17 + v2), *v4);
    if ( (v5 & 1) == 0 )
      break;
    if ( (v5 & 0x80u) != 0LL )
    {
      if ( v3 )
        return 0LL;
      break;
    }
  }
  while ( (_DWORD)v2 );
  v6 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v17 = v6;
  v18 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v7) = 4;
  v20 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v7 = (unsigned int)(v7 - 1);
    v8 = (_QWORD *)*(&v17 + v7);
    v9 = *v8;
    if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
      LOBYTE(v9) = MiReadPteShadow(*(&v17 + v7), *v8);
    if ( (v9 & 1) == 0 )
      return (__int64)v8;
    if ( (_DWORD)v7 && (v9 & 0x80u) != 0LL )
      return 0LL;
  }
  while ( (_DWORD)v7 != 1 );
  PteShadow = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(v6, PteShadow);
  if ( (PteShadow & 1) != 0 )
    return 0LL;
  if ( (PteShadow & 0x400) == 0 )
    return v6;
  if ( (unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
  {
    PrototypePteDirect = MiCheckVirtualAddress(v13, v15, v16);
    if ( !PrototypePteDirect )
      return 0LL;
  }
  else
  {
    PrototypePteDirect = MiGetPrototypePteDirect(v12);
  }
  result = MiFindActualFaultingPte(PrototypePteDirect);
  if ( !result )
    return v6;
  return result;
}
