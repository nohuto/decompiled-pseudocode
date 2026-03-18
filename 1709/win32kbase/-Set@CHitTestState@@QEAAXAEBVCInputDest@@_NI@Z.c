/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C012B6BC
 * Callers:
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012A9EC (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012B71C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C001748C (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
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
