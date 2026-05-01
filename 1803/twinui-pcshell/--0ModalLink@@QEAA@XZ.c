/*
 * XREFs of ??0ModalLink@@QEAA@XZ @ 0x1801B5B60
 * Callers:
 *     ??$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32BackedViewHostItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@$$QEAPEAVWin32BackedViewHostItem@@@Z @ 0x1801B4D74 (--$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32Backed.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UIModalLink@Holographic@678@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801B5A40 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@V-$ChainLink@VObjectWithSrwLock@@@Chai.c)
 */

ModalLink *__fastcall ModalLink::ModalLink(ModalLink *this)
{
  ModalLink *result; // rax

  *((_QWORD *)this + 2) = &ModalLink::`vbtable';
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = &ObjectWithClassName::`vftable';
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &ModalLink::`vftable'{for `Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Chaining::IChainLink>'};
  *((_QWORD *)this + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 9) = &ModalLink::`vftable'{for `Windows::Internal::Shell::Holographic::IModalLink'};
  *((_QWORD *)this + 10) = &ModalLink::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &ModalLink::`vftable'{for `ObjectWithClassName'};
  result = this;
  *((_QWORD *)this + 16) = 0LL;
  return result;
}
