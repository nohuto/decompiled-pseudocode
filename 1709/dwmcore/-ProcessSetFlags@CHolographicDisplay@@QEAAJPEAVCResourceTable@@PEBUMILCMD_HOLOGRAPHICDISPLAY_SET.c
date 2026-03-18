/*
 * XREFs of ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1801BD330
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetFlags(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *a3)
{
  RTL_SRWLOCK *v3; // rbx
  int v6; // eax

  v3 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  v6 = *((_DWORD *)a3 + 2);
  HIDWORD(this[9].Ptr) |= 0x10u;
  LODWORD(this[18].Ptr) = v6;
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
