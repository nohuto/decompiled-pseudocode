/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118BA0
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00103E0 (xxxProcessKeyEvent.c)
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C0117400 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v4; // rcx
  unsigned __int16 v5; // [rsp+30h] [rbp-38h] BYREF
  __int16 v6; // [rsp+32h] [rbp-36h]

  v3 = dword_1C018F8AC;
  v4 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( (dword_1C018F8AC & 1) != 0 )
  {
    dword_1C018F8AC &= ~1u;
    if ( (v3 & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 1LL, a3, 0LL);
  }
  else
  {
    if ( (dword_1C018F8AC & 0x10) != 0 )
      ApiSetEditionPostRitSound(v4, 0LL, a3, 0LL);
    PostWinlogonMessage(1026LL, 4u);
  }
  LOBYTE(v5) = gTKScanCode;
  v6 = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent(&v5, gTKExtraInformation, 0, 0, 0LL);
  v6 = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&v5, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent(&v5, gTKExtraInformation, 0, 0, 0LL);
}
