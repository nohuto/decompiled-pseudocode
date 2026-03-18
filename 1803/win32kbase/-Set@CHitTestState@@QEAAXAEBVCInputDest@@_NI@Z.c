/*
 * XREFs of ?Set@CHitTestState@@QEAAXAEBVCInputDest@@_NI@Z @ 0x1C0126178
 * Callers:
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012542C (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01261EC (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00371A4 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

void __fastcall CHitTestState::Set(CHitTestState *this, const struct CInputDest *a2, char a3, int a4)
{
  int v4; // edi
  int v8; // eax
  unsigned int v9; // eax

  v4 = 0;
  if ( *(_DWORD *)a2 )
  {
    CInputDest::operator=((__int64)this, (__int64)a2);
    v8 = *((_DWORD *)this + 47);
    if ( a3 )
    {
      v9 = v8 | 1;
      v4 = a4;
    }
    else
    {
      v9 = v8 & 0xFFFFFFFE;
    }
    *((_DWORD *)this + 47) = v9;
  }
  else
  {
    CInputDest::SetEmpty(this);
    *((_DWORD *)this + 47) &= ~1u;
  }
  *((_DWORD *)this + 46) = v4;
}
