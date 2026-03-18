/*
 * XREFs of MiFillPteWithProto @ 0x1400A810C
 * Callers:
 *     MiResolveSharedZeroFault @ 0x1400C18A0 (MiResolveSharedZeroFault.c)
 * Callees:
 *     MiUpdatePageTableUseCount @ 0x1400A56C0 (MiUpdatePageTableUseCount.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakePrototypePteDirect @ 0x14017CF4C (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x14017CF60 (MiMakePrototypePteVadLookup.c)
 */

__int64 __fastcall MiFillPteWithProto(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 PrototypePteDirect; // rax
  __int64 result; // rax
  __int64 v8; // rcx

  MiUpdatePageTableUseCount((__int64)((_QWORD)a1 << 25) >> 16, 1u);
  if ( a3 == 256 )
    PrototypePteDirect = MiMakePrototypePteDirect(a2);
  else
    PrototypePteDirect = MiMakePrototypePteVadLookup(a3);
  *a1 = PrototypePteDirect;
  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
    return MiWritePteShadow(v8);
  return result;
}
