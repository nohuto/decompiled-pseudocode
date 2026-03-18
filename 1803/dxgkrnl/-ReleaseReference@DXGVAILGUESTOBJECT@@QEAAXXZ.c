/*
 * XREFs of ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x1C01E6CF8
 * Callers:
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E783C (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01E7970 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E79E4 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01E7B88 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_.c)
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C01E7D48 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1C01E7F04 (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 *     ?VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z @ 0x1C01E80C0 (-VailSendCreateCompositionSurface@DXGSESSIONDATA@@QEAAJPEAPEAX0@Z.c)
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C01E8278 (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN@@@Z @ 0x1C01E8428 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN.c)
 *     ?VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJPEAX@Z @ 0x1C01E85D8 (-VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA@@QEAAJPEAX@Z.c)
 *     ?VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z @ 0x1C01E8788 (-VailSendUnbindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAX@Z.c)
 *     ?VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C01E8938 (-VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0014E70 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C0038820 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ @ 0x1C01E6804 (-DestroyVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAXXZ.c)
 */

void __fastcall DXGVAILGUESTOBJECT::ReleaseReference(DXGVAILGUESTOBJECT *this)
{
  __int64 v2; // rax

  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18696LL) != KeGetCurrentThread() )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 1548LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( (*((_DWORD *)this + 2))-- == 1 )
  {
    DXGVAILGUESTOBJECT::DestroyVmBusGuestSubscribers(this);
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGVAILGUESTOBJECT *)((char *)this + 16));
    operator delete(this);
  }
}
