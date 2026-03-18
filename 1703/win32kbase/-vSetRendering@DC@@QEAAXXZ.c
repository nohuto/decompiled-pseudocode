/*
 * XREFs of ?vSetRendering@DC@@QEAAXXZ @ 0x1C00392D0
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0038070 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C002CB1C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C002CD30 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00EBB30 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 */

void __fastcall DC::vSetRendering(DC *this)
{
  int v2; // r8d
  bool v3; // zf
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-18h]

  v2 = *((_DWORD *)this + 10) | 1;
  v3 = (*((_DWORD *)this + 9) & 0x4000) == 0;
  *((_QWORD *)this + 180) = *(_QWORD *)((char *)this + ((*((_DWORD *)this + 10) & 1) != 0 ? 8 : 0) + 1432);
  v5 = *(_OWORD *)((char *)this + 1448);
  *((_DWORD *)this + 10) = v2;
  *(_OWORD *)((char *)this + 1464) = v5;
  if ( !v3 )
  {
    if ( (unsigned int)SURFACE::bRedirectionBitmap(*((SURFACE **)this + 64)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v4 + 280));
      ++*(_DWORD *)(*((_QWORD *)this + 64) + 332LL);
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(*((_QWORD *)this + 64) + 280LL));
    }
  }
}
