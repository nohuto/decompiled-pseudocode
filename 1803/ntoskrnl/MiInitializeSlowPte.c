/*
 * XREFs of MiInitializeSlowPte @ 0x140258228
 * Callers:
 *     MiSlowRotateCopy @ 0x140258394 (MiSlowRotateCopy.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 */

struct _KTHREAD *__fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rdx
  int ProtectionPfnCompatible; // r8d
  __int64 v5; // r9
  __int64 v6; // r10
  struct _KTHREAD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  if ( MiIsPfnInline(a2) )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v3 - 0x58000000000LL);
  }
  else if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  *a1 = MiMakeValidPte((unsigned __int64)a1, v6, ProtectionPfnCompatible | 0xA0000000, v5);
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)result )
    return MiWritePteShadow(v9, v8, v10);
  return result;
}
