/*
 * XREFs of MiInitializeSlowPte @ 0x140214098
 * Callers:
 *     MiSlowRotateCopy @ 0x140214204 (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  int ProtectionPfnCompatible; // r8d
  int v5; // r9d
  __int64 v6; // r10
  struct _KTHREAD *result; // rax

  if ( MiIsPfnInline(a2) )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v3 - 0x58000000000LL);
  }
  else if ( v5 )
  {
    if ( v5 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  *a1 = MiMakeValidPte((unsigned __int64)a1, v6, ProtectionPfnCompatible | 0xA0000000);
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)result )
    return MiWritePteShadow();
  return result;
}
