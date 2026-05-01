/*
 * XREFs of ?Attach@?$ComPtr@VModalLink@@@WRL@Microsoft@@QEAAXPEAVModalLink@@@Z @ 0x1801B67FC
 * Callers:
 *     ??$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32BackedViewHostItem@@@Details@WRL@Microsoft@@YAJPEAPEAUIModalLink@Holographic@Shell@Internal@Windows@@$$QEAPEAVWin32BackedViewHostItem@@@Z @ 0x1801B4D74 (--$MakeAndInitialize@VModalLink@@UIModalLink@Holographic@Shell@Internal@Windows@@PEAVWin32Backed.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$ChainLink@VObjectWithSrwLock@@@Chaining@Shell@Internal@Windows@@UIModalLink@Holographic@678@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B8D70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$Ch_ea_1801B8D70.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ModalLink>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithSrwLock>,Windows::Internal::Shell::Holographic::IModalLink,Microsoft::WRL::FtmBase>::Release(v4);
  *a1 = a2;
  return result;
}
