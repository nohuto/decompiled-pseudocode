/*
 * XREFs of ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0088420 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C0100E40 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z @ 0x1C01A4FB4 (-AbandonKeyedMutex@DXGGLOBAL@@QEAAJI@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01A507C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01A5944 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01A6034 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A65A0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C01A6F90 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C01A7260 (DxgkCreateKeyedMutex2.c)
 *     DxgkReleaseKeyedMutex @ 0x1C01A7B50 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C01A7D40 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C01A5A18 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::ReleaseReference(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( !v4 )
    DXGGLOBAL::DestroyKeyedMutex(*((DXGGLOBAL **)this + 2), this);
  if ( v4 < 0 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 571LL;
    WdLogEvent5_WdAssertion(v5);
  }
}
