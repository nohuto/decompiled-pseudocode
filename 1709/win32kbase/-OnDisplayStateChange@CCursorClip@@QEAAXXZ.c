/*
 * XREFs of ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C005DAA4
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z @ 0x1C012FBA0 (-BindMouse@CInputConfig@@QEAAJPEAU_LUID@@@Z.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C0017908 (--0CLockedOutputConfig@@QEAA@XZ.c)
 *     ?UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z @ 0x1C005DCD4 (-UpdateClipRect@CCursorClip@@AEAAXUtagRECT@@@Z.c)
 */

void __fastcall CCursorClip::OnDisplayStateChange(CCursorClip *this)
{
  PDRIVER_CONTROL DeviceRoutine; // rdi
  struct CInpPushLock *v2; // rdx
  struct tagRECT v3; // xmm0
  struct tagRECT v4; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  char v7; // [rsp+40h] [rbp-18h]

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  RIMLockExclusive((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 32);
  *(_QWORD *)&v4.left = 0LL;
  *(_QWORD *)&v4.right = 0LL;
  *((_OWORD *)DeviceRoutine + 3) = 0u;
  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v5, v2);
  v3 = *(struct tagRECT *)&gpInputConfig[4].Next[3].Next;
  *(struct tagRECT *)DeviceRoutine = v3;
  v4 = v3;
  CCursorClip::UpdateClipRect((CCursorClip *)DeviceRoutine, &v4);
  if ( !v7 )
  {
    ExReleasePushLockSharedEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_QWORD *)DeviceRoutine + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)DeviceRoutine + 32, 0LL);
  KeLeaveCriticalRegion();
}
