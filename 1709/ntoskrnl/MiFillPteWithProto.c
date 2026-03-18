/*
 * XREFs of MiFillPteWithProto @ 0x140125368
 * Callers:
 *     MiResolveSharedZeroFault @ 0x140040630 (MiResolveSharedZeroFault.c)
 * Callees:
 *     MiUpdatePageTableUseCount @ 0x1400666B8 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017C7C0 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017C7E0 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiFillPteWithProto(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax

  MiUpdatePageTableUseCount((__int64)(a1 << 25) >> 16);
  if ( a3 == 256 )
    result = MiMakePrototypePteDirect(a2, v6, v7, v8);
  else
    result = MiMakePrototypePteVadLookup(a3, v6, v7, v8);
  *(_QWORD *)a1 = result;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    return MiWritePteShadow(a1, result);
  return result;
}
