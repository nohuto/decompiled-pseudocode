/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C00E6DB8
 * Callers:
 *     RestoreGammaRamp @ 0x1C00E6820 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00E6BA0 (FadeDesktop.c)
 *     NtGdiSetDeviceGammaRamp @ 0x1C02953F0 (NtGdiSetDeviceGammaRamp.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C00E7034 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00E707C (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // esi
  int v8; // r14d
  unsigned int v9; // ebx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  _BYTE v12[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-A0h]
  unsigned int v15; // [rsp+3Ch] [rbp-9Ch] BYREF
  DC *v16; // [rsp+40h] [rbp-98h] BYREF
  int v17; // [rsp+48h] [rbp-90h]
  int v18; // [rsp+4Ch] [rbp-8Ch]
  _BYTE v19[8]; // [rsp+50h] [rbp-88h] BYREF
  HDEV v20; // [rsp+58h] [rbp-80h]
  _QWORD v21[8]; // [rsp+60h] [rbp-78h] BYREF

  v7 = (unsigned int)a1;
  v8 = 0;
  v13 = 0;
  v15 = (unsigned int)a1;
  v9 = 0;
  v14 = 0;
  v17 = 0;
  v18 = 0;
  XDCOBJ::vLock(&v16, a1);
  if ( v16 )
  {
    if ( !*((_DWORD *)v16 + 8) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)v12);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v19, (struct XDCOBJ *)&v16);
      v20 = (HDEV)*((_QWORD *)v16 + 6);
      v14 = GreSetDeviceGammaRampInternal(v20, a2, a3, a4, (enum _SETGAMMARAMP_FAILED_REASON *)&v13, &v15);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v19);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v16);
    _InterlockedDecrement((volatile signed __int32 *)v16 + 3);
    v8 = v13;
    v7 = v15;
    v9 = v14;
  }
  if ( !v9 )
  {
    memset(v21, 0, sizeof(v21));
    v21[0] = 0x4000000006LL;
    memset(&v21[1], 0, 36);
    LODWORD(v21[6]) = 84;
    HIDWORD(v21[6]) = v8;
    v21[7] = __PAIR64__(a4, v7);
    DrvDxgkWriteDiagEntry(v21);
    EngSetLastError(0x57u);
  }
  return v9;
}
