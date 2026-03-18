/*
 * XREFs of ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0004124
 * Callers:
 *     ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z @ 0x1C0004370 (-SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJIPEAXPEA_N@Z.c)
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1C000D1E8 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 * Callees:
 *     ?AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z @ 0x1C0002AC8 (-AssociateWithVisual@CompositionInputObject@@QEBAJPEAX@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1C0003F44 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C0003F84 (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetInputSinkHelper(
        DirectComposition::CInteractionMarshaler *this,
        void *a2,
        bool *a3)
{
  CompositionInputObject *v3; // rbx
  int v4; // esi
  int v7; // eax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2
    || (v7 = CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)&Object),
        v3 = (CompositionInputObject *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    if ( *((CompositionInputObject **)this + 31) != v3 )
    {
      if ( v3 )
        v4 = CompositionInputObject::AssociateWithVisual(v3, this);
      if ( v4 >= 0 )
      {
        DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
        if ( v3 )
        {
          *((_QWORD *)this + 31) = v3;
          v3 = 0LL;
        }
        *((_DWORD *)this + 4) |= 0x40u;
        *a3 = 1;
      }
    }
    DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
