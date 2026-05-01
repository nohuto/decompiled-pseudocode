/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180111A9C
 * Callers:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJPEAPEAVCRemoteTask@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@56@@Z @ 0x180102A4C (--$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@De.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::s_AddThreadAffineWrapper(
        struct Windows::Internal::IComPoolTask *a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  int v3; // ebx
  struct Windows::Internal::IComPoolTask *v4; // rcx
  struct Windows::Internal::IComPoolTask *v6; // [rsp+30h] [rbp+8h] BYREF
  Windows::Internal::ComTaskPool::CRemoteTask *v7; // [rsp+38h] [rbp+10h] BYREF

  v6 = a1;
  *a2 = 0LL;
  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(
         &v7,
         &v6);
  if ( v3 >= 0 )
  {
    v4 = v7;
    v7 = 0LL;
    *a2 = v4;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
