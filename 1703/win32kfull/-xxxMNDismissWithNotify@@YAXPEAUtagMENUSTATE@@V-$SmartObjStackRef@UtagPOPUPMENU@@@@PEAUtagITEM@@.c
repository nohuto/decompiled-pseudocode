/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02034AC
 * Callers:
 *     xxxMNButtonUp @ 0x1C020451C (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0205230 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C020589C (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     zzzStartFade @ 0x1C01C295C (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0203A74 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C0204628 (xxxMNCancel.c)
 */

_QWORD *__fastcall xxxMNDismissWithNotify(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v9; // ebx
  int v10; // r8d

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v9 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v9 = 294;
      a5 = **(_QWORD **)(*a2 + 40LL);
      goto LABEL_7;
    }
    v9 = 273;
    a5 = 0LL;
  }
  a4 = *(_DWORD *)(a3 + 8);
LABEL_7:
  if ( (unsigned int)zzzMNFadeSelection(*(struct tagMENU **)(*a2 + 40LL), (struct tagITEM *)a3) )
    zzzStartFade();
  v10 = -1;
  if ( v9 != 274 )
    v10 = -3;
  xxxWindowEvent(0x8013u, *(__int64 **)(*a2 + 16LL), v10, a4, 0);
  xxxMNCancel(a1, v9, a4, a5);
  return SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(a2);
}
