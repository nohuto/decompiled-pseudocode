/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@V?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UIModalLink@Holographic@678@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801B6290
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UIModalLink@Holographic@678@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1801B5F28 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$ChainLink@VObjectWith.c)
 */

__int64 *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        __int64 *a1,
        volatile int *a2)
{
  char v2; // bl

  v2 = (char)a2;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>(
    a1,
    a2);
  if ( (v2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
