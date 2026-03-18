/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010A860
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013EEA0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  int v3; // esi
  int v4; // edi
  char v5; // bl
  char v6; // al
  __int64 v7; // rdx
  char v8; // bl
  int v9; // r9d

  v3 = *((unsigned __int8 *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v5 = *((_BYTE *)a1 + 2);
  switch ( v3 )
  {
    case 20:
      goto LABEL_16;
    case 144:
      goto LABEL_8;
    case 145:
LABEL_16:
      if ( (dword_1C01A4E4C & 1) != 0 && !v4 )
      {
        v7 = 3LL;
        v8 = v5 & 3;
        v9 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v3 >> 2));
        if ( !_bittest(&v9, (unsigned __int8)(2 * v8)) )
        {
          if ( _bittest(&v9, (unsigned __int8)(2 * v8 + 1)) )
            v7 = 2LL;
          ApiSetEditionPostRitSound(
            *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL),
            v7,
            *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL),
            0LL);
        }
      }
      return 1LL;
  }
  if ( (unsigned __int8)v3 != gNumLockVk )
  {
    if ( (unsigned __int8)v3 != gOemScrollVk )
    {
      if ( gtmridToggleKeys )
        ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      return 1LL;
    }
    goto LABEL_16;
  }
LABEL_8:
  if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) != 17
    || (dword_1C01A4E64 & 4) == 0 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      gtmridToggleKeys = 0LL;
      gTKExtraInformation = 0;
      gTKScanCode = 0;
    }
    else if ( !gtmridToggleKeys && (dword_1C01A4E4C & 4) != 0 )
    {
      v6 = *(_BYTE *)a1;
      gTKExtraInformation = a2;
      gTKNextProcIndex = a3;
      gTKScanCode = v6;
      gtmridToggleKeys = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
    }
    if ( (dword_1C01A4E64 & 1) == 0 )
      goto LABEL_16;
  }
  return 1LL;
}
