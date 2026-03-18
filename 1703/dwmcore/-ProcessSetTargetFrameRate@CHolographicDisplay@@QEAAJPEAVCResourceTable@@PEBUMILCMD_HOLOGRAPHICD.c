/*
 * XREFs of ?ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE@@@Z @ 0x18012FD8C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetTargetFrameRate(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE *a3)
{
  RTL_SRWLOCK *v3; // rbx
  int v6; // eax

  v3 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  HIDWORD(this[17].Ptr) = *((_DWORD *)a3 + 2);
  v6 = *((_DWORD *)a3 + 3);
  HIDWORD(this[9].Ptr) |= 0x20u;
  LODWORD(this[18].Ptr) = v6;
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
