/*
 * XREFs of _anonymous_namespace_::ConvertToInputType @ 0x180020614
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180020530 (-SupportsPointerType@CInteraction@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePri.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1800B2B30 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180166900 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x180166920 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18018F50C (-RemoveContact@CInteractionProcessor@@QEAAXK@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x180194EF0 (-SupportsPointerType@CInteractionRoot@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMous.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::ConvertToInputType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 1LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  if ( v4 != 1 )
    return 0LL;
  return result;
}
