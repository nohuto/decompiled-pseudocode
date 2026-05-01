/*
 * XREFs of ??$As@UIApplicationViewBase@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewBase@@@WRL@Microsoft@@@Details@12@@Z @ 0x180138DF8
 * Callers:
 *     _lambda_74326b6c5464fd33f98787e73af58621_::operator() @ 0x18013AA18 (_lambda_74326b6c5464fd33f98787e73af58621_--operator().c)
 *     _lambda_ea68e4127058bb6a1a7a73048de55176_::operator() @ 0x18013AB2C (_lambda_ea68e4127058bb6a1a7a73048de55176_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IApplicationViewBase>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_979cde28_2164_437c_b963_55e5d4ac1d02,
           a2);
}
