/*
 * XREFs of ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0035EAC
 * Callers:
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0036330 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00393CC (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBufferInternal(CTokenManager *this, struct CLegacyTokenBuffer *a2)
{
  CTokenManager *v2; // rdi
  unsigned int v4; // edx
  _QWORD *v5; // rax
  __int64 v6; // rdx

  v2 = g_pTokenManager;
  CLegacyTokenBuffer::Reset(a2);
  if ( *((_DWORD *)v2 + 30) > 3u )
  {
    if ( a2 )
      CLegacyTokenBuffer::`scalar deleting destructor'(a2, v4);
  }
  else
  {
    CTokenManager::AcquireTokenManagerLock(v2);
    v5 = (_QWORD *)((char *)v2 + 104);
    v6 = *((_QWORD *)v2 + 13);
    if ( *(CTokenManager **)(v6 + 8) != (CTokenManager *)((char *)v2 + 104) )
      __fastfail(3u);
    *(_QWORD *)a2 = v6;
    *((_QWORD *)a2 + 1) = v5;
    *(_QWORD *)(v6 + 8) = a2;
    *v5 = a2;
    ++*((_DWORD *)v2 + 30);
    *((_QWORD *)v2 + 9) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v2 + 64, 0LL);
  }
}
