/*
 * XREFs of ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x1800D73E8
 * Callers:
 *     ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJPEAPEAVCRemoteTask@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@56@@Z @ 0x1800D4038 (--$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@De.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CRemoteReleaseStub@ComTaskPool@Internal@Windows@@QEAA@PEAUIComPoolTask@23@@Z @ 0x1800D4A48 (--0CRemoteReleaseStub@ComTaskPool@Internal@Windows@@QEAA@PEAUIComPoolTask@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D67DC (-InternalRelease@-$ComPtr@VCRemoteReleaseStub@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAA.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(
        Windows::Internal::ComTaskPool::CRemoteTask *this,
        IUnknown *a2)
{
  IUnknown **v4; // rbx
  IUnknown **v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed int AgileReference; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = (IUnknown **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
    v4 = Windows::Internal::ComTaskPool::CRemoteReleaseStub::CRemoteReleaseStub(v5, a2);
  v6 = *((_QWORD *)this + 3);
  v13 = 0LL;
  v12 = v6;
  *((_QWORD *)this + 3) = v4;
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CRemoteReleaseStub>::InternalRelease(&v13);
  v7 = *((_QWORD *)this + 3);
  AgileReference = v7 == 0 ? 0x8007000E : 0;
  if ( v7 )
  {
    v9 = (v7 + 16) & -(__int64)(v7 != 0);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 2);
    AgileReference = 0;
    if ( v9 )
    {
      v12 = 0LL;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
      AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, v9, &v12);
      if ( AgileReference >= 0 )
      {
        v10 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 2) = v12;
        v12 = v10;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
    }
  }
  return (unsigned int)AgileReference;
}
