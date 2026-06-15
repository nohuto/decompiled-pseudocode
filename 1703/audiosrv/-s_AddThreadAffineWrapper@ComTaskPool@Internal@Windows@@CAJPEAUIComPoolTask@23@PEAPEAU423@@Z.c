/*
 * XREFs of ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x1800D8024
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___ @ 0x18004D44C (Windows--Internal--ComTaskPool--QueueTask__lambda_9888ee29221e6d6bd53d80d31d373ecc___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJPEAPEAVCRemoteTask@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@56@@Z @ 0x1800D4038 (--$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@De.c)
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
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v7);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(
         &v7,
         &v6);
  if ( v3 >= 0 )
  {
    v4 = v7;
    v7 = 0LL;
    *a2 = v4;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
