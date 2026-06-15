/*
 * XREFs of ??0CExclusiveStreamGroupProxy@@QEAA@XZ @ 0x1800A4CD0
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x1800A4880 (--$MakeAndInitialize@VCExclusiveStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@QEAA@XZ @ 0x1800799F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::CExclusiveStreamGroupProxy(
        CExclusiveStreamGroupProxy *this)
{
  CExclusiveStreamGroupProxy *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((__int64)this);
  *(_QWORD *)this = &CExclusiveStreamGroupProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<CBaseStreamGroupProxy,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 27) = &CExclusiveStreamGroupProxy::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 28) = &CExclusiveStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>,1,0>'};
  result = this;
  *((_QWORD *)this + 57) = 0LL;
  return result;
}
