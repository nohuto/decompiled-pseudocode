/*
 * XREFs of ??4?$com_ptr_t@VDwm3DRECompositorThunk@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVDwm3DRECompositorThunk@@@Z @ 0x1800CA144
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 *__fastcall wil::com_ptr_t<Dwm3DRECompositorThunk,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CMILCOMBase::InternalAddRef((CMILCOMBase *)(a2 + 8));
  if ( v2 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 8));
  return a1;
}
