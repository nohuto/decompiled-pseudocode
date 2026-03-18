/*
 * XREFs of GrePolyPolygon @ 0x1C01327D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C001E0E0 (-bDWMDesktop@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GrePolyPolygonInternal @ 0x1C0132894 (GrePolyPolygonInternal.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027A510 (-bInPathBracket@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C027A538 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C027A5F4 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C027A6D8 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 */

__int64 __fastcall GrePolyPolygon(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v15[24]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v16; // [rsp+58h] [rbp-80h]

  v6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  if ( v14[0] )
  {
    v16 = v14;
    if ( (unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bDWMDesktop((DWMSCREENREADMODIFYWRITEASSIST *)v15) )
    {
      if ( !(unsigned int)DWMSCREENREADMODIFYWRITEASSIST::bInPathBracket((DWMSCREENREADMODIFYWRITEASSIST *)v15) )
      {
        DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
        if ( (unsigned int)GrePolyPolygonInternal(a1, a5) )
          v6 = DWMSCREENREADMODIFYWRITEASSIST::bReadFromAccumulatedBounds((DWMSCREENREADMODIFYWRITEASSIST *)v15);
        DWMSCREENREADMODIFYWRITEASSIST::vRestoreAccumBoundsAndEnableSpriteUpdates((DWMSCREENREADMODIFYWRITEASSIST *)v15);
      }
    }
  }
  v9 = GrePolyPolygonInternal(a1, a5);
  if ( v6 )
  {
    v13 = UserReferenceDwmApiPort(v8, v7, v10, v11);
    DwmSyncFlushAndWaitForBatch(v13);
  }
  if ( v14[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v14);
  return v9;
}
