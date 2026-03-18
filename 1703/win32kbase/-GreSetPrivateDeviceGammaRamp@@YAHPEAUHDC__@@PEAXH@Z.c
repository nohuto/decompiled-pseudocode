/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00020C4
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C0001FB0 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C0002190 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0002368 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0031E20 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007BCB0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]
  char v12; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v10 = 0;
  v11 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v9, a1);
  v6 = v9;
  if ( v9 )
  {
    if ( !*(_DWORD *)(v9 + 32) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v12);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v8, (struct XDCOBJ *)&v9);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v8);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion();
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v9);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 12));
  }
  return v4;
}
