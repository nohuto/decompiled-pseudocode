/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119F70
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0118570 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  _BYTE v5[2]; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+32h] [rbp-36h]

  v3 = dword_1C018AD2C;
  v4 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( (dword_1C018AD2C & 1) != 0 )
  {
    dword_1C018AD2C &= ~1u;
    if ( (v3 & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 1LL, a3, 0LL);
  }
  else
  {
    if ( (dword_1C018AD2C & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 0LL, a3, 0LL);
    PostWinlogonMessage(1026LL, 4u);
  }
  v5[0] = gTKScanCode;
  v6 = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)v5, gTKExtraInformation, 0, 0, 0LL);
  v6 = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)v5, gTKExtraInformation, 0, 0, 0LL);
}
