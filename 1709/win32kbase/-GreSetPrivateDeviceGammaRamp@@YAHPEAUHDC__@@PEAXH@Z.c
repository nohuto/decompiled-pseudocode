/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00FAC60
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C00FB300 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C003CB30 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003CB80 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005A7C0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00FAD24 (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(struct HOBJ__ *a1, void *a2, int a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]
  int v12; // [rsp+2Ch] [rbp-Ch]
  PERESOURCE v13; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  v6 = v10;
  if ( v10 )
  {
    if ( !*(_DWORD *)(v10 + 32) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v13);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v13, (struct XDCOBJ *)&v10);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      NEEDGRELOCK::vUnlock(&v13);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v7);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v8);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
  }
  return v4;
}
