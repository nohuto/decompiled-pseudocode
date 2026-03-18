/*
 * XREFs of _anonymous_namespace_::ConvertToInputType @ 0x1800921C4
 * Callers:
 *     ?SupportsInteractionType@CInteraction@@UEBAHKI@Z @ 0x1800917C0 (-SupportsInteractionType@CInteraction@@UEBAHKI@Z.c)
 *     ?SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z @ 0x180091840 (-SupportsPointerType@CInteraction@@UEBAHKW4SupportedTypeOption@@@Z.c)
 *     ?GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801693D0 (-GetInteractionContext@CInteraction@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z @ 0x1801693F0 (-GetInteractionContext@CInteractionRoot@@UEBAJKPEAPEAUIInteractionContextWrapper@@@Z.c)
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18019CA78 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulatio.c)
 *     ?RemoveContact@CInteractionProcessor@@QEAAXK@Z @ 0x18019CF84 (-RemoveContact@CInteractionProcessor@@QEAAXK@Z.c)
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z @ 0x1801A3E00 (-SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKW4SupportedTypeOption@@@Z @ 0x1801A3EB0 (-SupportsPointerType@CInteractionRoot@@UEBAHKW4SupportedTypeOption@@@Z.c)
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
