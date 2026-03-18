/*
 * XREFs of ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 *     DxgkUnlock @ 0x1C00CE6A0 (DxgkUnlock.c)
 *     DxgkGetPresentHistory @ 0x1C00DF2D0 (DxgkGetPresentHistory.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     DxgkDestroyOverlay @ 0x1C01AD610 (DxgkDestroyOverlay.c)
 * Callees:
 *     <none>
 */

COREACCESS *__fastcall COREACCESS::COREACCESS(COREACCESS *this, struct DXGADAPTER *const a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_BYTE *)this + 24) = 0;
  if ( a2 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    *((_QWORD *)this + 1) = -1LL;
  }
  return this;
}
