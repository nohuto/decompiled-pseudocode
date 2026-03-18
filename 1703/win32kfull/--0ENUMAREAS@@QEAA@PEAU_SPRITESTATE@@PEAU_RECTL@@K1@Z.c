/*
 * XREFs of ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00A76E0
 * Callers:
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00A55D0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C025A680 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C025BA68 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C025F154 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0260F10 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02623A0 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02628B0 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02647DC (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0266BB0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7830 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C025E9C0 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

ENUMAREAS *__fastcall ENUMAREAS::ENUMAREAS(
        ENUMAREAS *this,
        struct _SPRITESTATE *a2,
        struct _RECTL *a3,
        int a4,
        struct _RECTL *a5)
{
  LONG left; // eax
  LONG right; // eax
  LONG top; // eax
  LONG bottom; // eax
  int v13; // eax
  int *i; // r8
  _DWORD *j; // rdx
  int v16; // ecx
  int v17; // ecx
  __int64 k; // rbx

  *((_QWORD *)this + 11) = a2;
  SPRITERANGELOCK::vLockShared((struct _SPRITESTATE *)((char *)a2 + 128));
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 31);
  *(_DWORD *)this = a4;
  left = a3->left;
  *((_DWORD *)this + 5) = a3->left;
  *((_DWORD *)this + 1) = left;
  right = a3->right;
  *((_DWORD *)this + 7) = right;
  *((_DWORD *)this + 3) = right;
  top = a3->top;
  *((_DWORD *)this + 6) = top;
  *((_DWORD *)this + 2) = top;
  bottom = a3->bottom;
  *((_DWORD *)this + 8) = bottom;
  *((_DWORD *)this + 4) = bottom;
  if ( (a4 & 2) != 0 )
    v13 = bottom - 1;
  else
    v13 = *((_DWORD *)this + 2);
  for ( i = (int *)*((_QWORD *)a2 + 18); i[1] <= v13; i = (int *)((char *)i + *((_QWORD *)i + 1)) )
    ;
  if ( (a4 & 1) != 0 )
  {
    for ( j = (int *)((char *)i + *((_QWORD *)i + 1) - 16); *j >= *((_DWORD *)this + 3); j -= 4 )
      ;
  }
  else
  {
    for ( j = i + 6; j[1] <= *((_DWORD *)this + 1); j += 4 )
      ;
  }
  v16 = *((_DWORD *)this + 2);
  if ( *i > v16 )
    v16 = *i;
  *((_DWORD *)this + 9) = v16;
  v17 = *((_DWORD *)this + 4);
  if ( i[1] < v17 )
    v17 = i[1];
  *((_DWORD *)this + 10) = v17;
  *((_QWORD *)this + 6) = i;
  *((_QWORD *)this + 7) = j;
  if ( a5 )
    *(struct _RECTL *)((char *)this + 20) = *a5;
  for ( k = *(_QWORD *)(*((_QWORD *)this + 11) + 1096LL); k; k = *(_QWORD *)(k + 24) )
  {
    if ( *(_DWORD *)(k + 80) < *((_DWORD *)this + 7)
      && *(_DWORD *)(k + 84) < *((_DWORD *)this + 8)
      && *(_DWORD *)(k + 88) > *((_DWORD *)this + 5)
      && *(_DWORD *)(k + 92) > *((_DWORD *)this + 6) )
    {
      SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(k + 248));
    }
  }
  return this;
}
