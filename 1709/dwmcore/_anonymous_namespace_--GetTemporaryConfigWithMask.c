/*
 * XREFs of _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800921F0
 * Callers:
 *     ?SupportsInteractionType@CInteraction@@UEBAHKI@Z @ 0x1800917C0 (-SupportsInteractionType@CInteraction@@UEBAHKI@Z.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180091D44 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x180199EA4 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x180199F6C (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18019AC30 (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18019C2F0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z @ 0x1801A3E00 (-SupportsInteractionType@CInteractionRoot@@UEBAHKI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::GetTemporaryConfigWithMask(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 result; // rax

  *a2 = 0;
  v3 = (_DWORD *)(a1 + 8);
  *a3 = 0;
  v4 = 3LL;
  do
  {
    if ( *((_BYTE *)v3 - 8) )
    {
      *a2 |= *v3 & *(v3 - 1);
      result = (unsigned int)*v3;
      *a3 |= result;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  return result;
}
