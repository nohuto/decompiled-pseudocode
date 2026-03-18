/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C012C040
 * Callers:
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012B34C (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00480FC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, char a3, int a4)
{
  if ( !*(_DWORD *)a2 )
  {
    CInputDest::SetEmpty(this);
LABEL_3:
    *((_DWORD *)this + 50) = 0;
    *((_DWORD *)this + 51) &= ~1u;
    return;
  }
  CInputDest::operator=((__int64)this, (__int64)a2);
  if ( !a3 )
    goto LABEL_3;
  *((_DWORD *)this + 51) |= 1u;
  *((_DWORD *)this + 50) = a4;
}
