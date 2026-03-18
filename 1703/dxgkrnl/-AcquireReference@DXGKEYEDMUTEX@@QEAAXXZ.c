/*
 * XREFs of ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0038578
 * Callers:
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0039380 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0088420 (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     DxgkShareObjects @ 0x1C009D2D0 (DxgkShareObjects.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01A5554 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKEYEDMUTEX::AcquireReference(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v4 + 24) = 555LL;
    WdLogEvent5_WdAssertion(v4);
  }
}
