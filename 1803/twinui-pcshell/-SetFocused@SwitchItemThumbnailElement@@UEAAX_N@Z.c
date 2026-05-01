/*
 * XREFs of ?SetFocused@SwitchItemThumbnailElement@@UEAAX_N@Z @ 0x18029D8C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1802766CC (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18027674C (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x18028B660 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18029DBC8 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::SetFocused(SwitchItemThumbnailElement *this, char a2)
{
  __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::SetFocused(this, a2);
  v4 = *((_QWORD *)this + 30);
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v4);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v3, &v4, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v4);
  SwitchItemThumbnailElement::UpdateThumbnailBorder(this);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v3);
}
