/*
 * XREFs of ??0CSharedStreamGroupProxy@@QEAA@XZ @ 0x180029E18
 * Callers:
 *     ??$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Details@WRL@Microsoft@@YAJPEAPEAUIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEAV?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@AEAK@Z @ 0x18000D0FC (--$MakeAndInitialize@VCSharedStreamGroupProxy@@UIStreamGroupProxy@@AEAPEAUStreamGroupParams@@AEA.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x18002B244 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VCBaseStreamGroupProxy@@UIInspectable@.c)
 *     memset @ 0x180033A5A (memset.c)
 */

CSharedStreamGroupProxy *__fastcall CSharedStreamGroupProxy::CSharedStreamGroupProxy(CSharedStreamGroupProxy *this)
{
  CSharedStreamGroupProxy *result; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>();
  *((_DWORD *)this + 70) = 0;
  *(_QWORD *)this = &CSharedStreamGroupProxy::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,CBaseStreamGroupProxy,IWeakReferenceSource,IInspectable>'};
  *((_QWORD *)this + 31) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,CBaseStreamGroupProxy,IInspectable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 32) = &CSharedStreamGroupProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IInspectable>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 288), 0, 0);
  *((_BYTE *)this + 328) = 0;
  memset((char *)this + 336, 0, 0x60uLL);
  *((_QWORD *)this + 54) = 0LL;
  result = this;
  *((_QWORD *)this + 55) = 0LL;
  return result;
}
