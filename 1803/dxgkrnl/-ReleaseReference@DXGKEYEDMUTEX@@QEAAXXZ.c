/*
 * XREFs of ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4
 * Callers:
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C0097A7C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 *     ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x1C00ACEA0 (-DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C00D54D8 (DxgkShareObjectsInternal.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01A982C (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?DxgkSharedKeyedMutexObjectObDeleteProcedure@@YAXPEAX@Z @ 0x1C01A9E20 (-DxgkSharedKeyedMutexObjectObDeleteProcedure@@YAXPEAX@Z.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BFC5C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@@Z @ 0x1C01C0140 (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXIU_D3DKMT_CREATEKEYEDMUTEX2_FL.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C01C052C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C01C0D64 (-OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z.c)
 *     ?OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z @ 0x1C01C0EB4 (-OpenKeyedMutexFromNtHandle@DXGGLOBAL@@QEAAJPEAXPEAPEAVDXGKEYEDMUTEX@@PEAI0I@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C1570 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkCreateKeyedMutex @ 0x1C01C1FE0 (DxgkCreateKeyedMutex.c)
 *     DxgkCreateKeyedMutex2 @ 0x1C01C22F0 (DxgkCreateKeyedMutex2.c)
 *     DxgkReleaseKeyedMutex @ 0x1C01C2D10 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C01C2F30 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C01C05F4 (-DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::ReleaseReference(DXGKEYEDMUTEX *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax

  v1 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( !v1 )
    DXGGLOBAL::DestroyKeyedMutex(*((DXGGLOBAL **)this + 2), this);
  if ( v1 < 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 661LL;
    WdLogEvent5_WdAssertion(v2);
  }
}
