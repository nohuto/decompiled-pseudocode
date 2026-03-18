/*
 * XREFs of ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0010654
 * Callers:
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C001135C (-ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ.c)
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0011390 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C000B6D8 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0010B70 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C004A1B4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBuffer(CTokenManager *this, CLegacyTokenBuffer *P)
{
  unsigned int v4; // edx
  CLegacyTokenBuffer **v5; // rax
  __int64 v6; // rdx

  CLegacyTokenBuffer::Reset(P);
  if ( *((_DWORD *)this + 44) > 3u )
  {
    if ( P )
      CLegacyTokenBuffer::`scalar deleting destructor'(P, v4);
  }
  else
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v5 = (CLegacyTokenBuffer **)((char *)this + 160);
    v6 = *((_QWORD *)this + 20);
    if ( *(CTokenManager **)(v6 + 8) != (CTokenManager *)((char *)this + 160) )
      __fastfail(3u);
    *(_QWORD *)P = v6;
    *((_QWORD *)P + 1) = v5;
    *(_QWORD *)(v6 + 8) = P;
    *v5 = P;
    ++*((_DWORD *)this + 44);
    *((_QWORD *)this + 12) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 88, 0LL);
  }
}
