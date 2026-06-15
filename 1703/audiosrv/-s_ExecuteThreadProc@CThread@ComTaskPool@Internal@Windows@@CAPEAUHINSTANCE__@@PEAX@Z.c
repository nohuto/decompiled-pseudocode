/*
 * XREFs of ?s_ExecuteThreadProc@CThread@ComTaskPool@Internal@Windows@@CAPEAUHINSTANCE__@@PEAX@Z @ 0x1800D825C
 * Callers:
 *     ?s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D8A60 (-s_ThreadPoolCallback@CThread@ComTaskPool@Internal@Windows@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z @ 0x1800D8AA0 (-s_ThreadProc@CThread@ComTaskPool@Internal@Windows@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800466D0 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x18007D368 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ?_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ @ 0x1800D7B44 (-_ThreadProc@CThread@ComTaskPool@Internal@Windows@@AEAAXXZ.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CThread::s_ExecuteThreadProc(__int64 a1)
{
  Windows::Internal::ComTaskPool::CThread *v1; // rbx
  __int64 v2; // rdi
  Windows::Internal::ComTaskPool::CThread *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v4, a1);
  v1 = v4;
  Windows::Internal::ComTaskPool::CThread::_ThreadProc(v4);
  v2 = *((_QWORD *)v1 + 9);
  *((_QWORD *)v1 + 9) = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v4);
  return v2;
}
