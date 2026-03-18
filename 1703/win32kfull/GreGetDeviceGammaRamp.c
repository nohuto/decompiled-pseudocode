/*
 * XREFs of GreGetDeviceGammaRamp @ 0x1C00E765C
 * Callers:
 *     PrepareGammaRampData @ 0x1C00E7480 (PrepareGammaRampData.c)
 *     NtGdiGetDeviceGammaRamp @ 0x1C0295010 (NtGdiGetDeviceGammaRamp.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     GreGetDeviceGammaRampInternal @ 0x1C00E7714 (GreGetDeviceGammaRampInternal.c)
 */

__int64 __fastcall GreGetDeviceGammaRamp(HDC a1, __int64 a2)
{
  unsigned int v3; // ebx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  unsigned int DeviceGammaRampInternal; // [rsp+20h] [rbp-28h]
  DC *v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]
  char v10; // [rsp+60h] [rbp+18h] BYREF
  char v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  DeviceGammaRampInternal = 0;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock(&v7, a1);
  if ( v7 )
  {
    if ( !*((_DWORD *)v7 + 8) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v11, (struct XDCOBJ *)&v7);
      DeviceGammaRampInternal = GreGetDeviceGammaRampInternal(*((_QWORD *)v7 + 6), a2);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v11);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v7);
    _InterlockedDecrement((volatile signed __int32 *)v7 + 3);
    v3 = DeviceGammaRampInternal;
  }
  if ( !v3 )
    EngSetLastError(0x57u);
  return v3;
}
