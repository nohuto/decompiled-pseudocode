/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E4B0
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x180075BF0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 *     ?QueryInterface@CWin32ApplicationView@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081A20 (-QueryInterface@CWin32ApplicationView@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081A30 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081A40 (-QueryInterface@CWin32ApplicationView@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081A50 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081A60 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        void **a3)
{
  *a3 = 0LL;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::QueryInterface(this);
  _InterlockedIncrement((volatile signed __int32 *)this + 47);
  *a3 = this;
  return 0LL;
}
