/*
 * XREFs of ?Dispose@CHolographicViewer@@UEAAJXZ @ 0x1801FC0A0
 * Callers:
 *     ??1CHolographicViewer@@MEAA@XZ @ 0x1801FBECC (--1CHolographicViewer@@MEAA@XZ.c)
 *     ?DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FC060 (-DetachFromChannel@CHolographicViewer@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicViewer::Dispose(CHolographicViewer *this)
{
  void *v2; // rcx

  AcquireSRWLockExclusive((PSRWLOCK)this + 13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 9);
  v2 = (void *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 8) = 0LL;
  }
  _InterlockedExchange((volatile __int32 *)this + 24, 3);
  ReleaseSRWLockExclusive((PSRWLOCK)this + 13);
  return 0LL;
}
