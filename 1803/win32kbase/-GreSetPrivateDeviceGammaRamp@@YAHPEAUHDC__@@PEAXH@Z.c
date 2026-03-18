/*
 * XREFs of ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00D6CC0
 * Callers:
 *     NtGdiSetPrivateDeviceGammaRamp @ 0x1C00D74C0 (NtGdiSetPrivateDeviceGammaRamp.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0031970 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00319C0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00452F0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C009F6F0 (--1DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z @ 0x1C00D6D5C (-GreSetPrivateDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXH@Z.c)
 */

__int64 __fastcall GreSetPrivateDeviceGammaRamp(HDC a1, void *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  DYNAMICMODECHANGELOCK *v8; // rcx
  int v9; // r8d
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE v12; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  v11[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  v6 = v11[0];
  if ( v11[0] )
  {
    if ( !*(_DWORD *)(v11[0] + 32LL) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v12);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v12, (struct XDCOBJ *)v11);
      v4 = GreSetPrivateDeviceGammaRampInternal(*(HDEV *)(v6 + 48), a2, a3);
      NEEDGRELOCK::vUnlock(&v12);
      DYNAMICMODECHANGELOCK::~DYNAMICMODECHANGELOCK(v8, v7, v9);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  }
  return v4;
}
