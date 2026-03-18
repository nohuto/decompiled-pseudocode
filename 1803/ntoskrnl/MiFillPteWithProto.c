/*
 * XREFs of MiFillPteWithProto @ 0x14003C58C
 * Callers:
 *     MiResolveSharedZeroFault @ 0x14001E1D0 (MiResolveSharedZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiUpdatePageTableUseCount @ 0x14003C610 (MiUpdatePageTableUseCount.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x1401A6614 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1401A6634 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiFillPteWithProto(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PrototypePteDirect; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  MiUpdatePageTableUseCount((__int64)(a1 << 25) >> 16, 1LL);
  if ( a3 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(a2, v6, v7, v8);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(a3);
  *(_QWORD *)a1 = PrototypePteDirect;
  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
    return MiWritePteShadow(v12, v11);
  return result;
}
