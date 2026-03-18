/*
 * XREFs of MiInitializeSlowPte @ 0x14021C0C4
 * Callers:
 *     MiSlowRotateCopy @ 0x14021C23C (MiSlowRotateCopy.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 */

struct _KTHREAD *__fastcall MiInitializeSlowPte(struct _KTHREAD **a1, unsigned __int64 a2)
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
  result = (struct _KTHREAD *)MiMakeValidPte((unsigned __int64)a1, v6, ProtectionPfnCompatible | 0xA0000000);
  *a1 = result;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    return MiWritePteShadow();
  return result;
}
