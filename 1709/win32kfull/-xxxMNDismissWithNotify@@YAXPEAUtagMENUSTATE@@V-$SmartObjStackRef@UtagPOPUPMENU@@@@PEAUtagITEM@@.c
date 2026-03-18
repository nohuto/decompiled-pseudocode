/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0204EF0
 * Callers:
 *     xxxMNButtonUp @ 0x1C0205FA4 (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C0206E14 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C0207450 (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C00975A4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     zzzStartFade @ 0x1C013DD98 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x1C0205578 (-zzzMNFadeSelection@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C0206110 (xxxMNCancel.c)
 */

_QWORD *__fastcall xxxMNDismissWithNotify(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v9 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v9 = 294;
      a5 = **(_QWORD **)(*(_QWORD *)*a2 + 40LL);
      goto LABEL_7;
    }
    v9 = 273;
    a5 = 0LL;
  }
  a4 = *(_DWORD *)(a3 + 8);
LABEL_7:
  if ( (unsigned int)zzzMNFadeSelection(*(struct tagMENU **)(*(_QWORD *)*a2 + 40LL), (struct tagITEM *)a3) )
    zzzStartFade();
  v10 = 0xFFFFFFFFLL;
  if ( v9 != 274 )
    v10 = 4294967293LL;
  xxxWindowEvent(0x8013u, *(volatile signed __int32 **)(*(_QWORD *)*a2 + 16LL), v10, a4, 0);
  xxxMNCancel(a1, v9, a4, a5);
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(a2, v11, v12, v13);
}
